#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionPanelContent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "RewardListEntryType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionPanelContent.MissionPanelContent_C
// 0x0028 (0x0260 - 0x0238)
class UMissionPanelContent_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UFortMultiSizeImage*                    MissionIcon;                                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MissionName;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MissionRewards;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OverviewObjectives;                                // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MissionPanelContent(int32 EntryPoint);
	void Construct();
	void UpdateMissionDisplay();
	void UpdateMissionRewards();
	void UpdateOverviewObjectives();
	void Setup_Mission_Rewards(TArray<class UFortItem*>& Array, ERewardListEntryType RewardType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionPanelContent_C">();
	}
	static class UMissionPanelContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionPanelContent_C>();
	}
};
static_assert(alignof(UMissionPanelContent_C) == 0x000008, "Wrong alignment on UMissionPanelContent_C");
static_assert(sizeof(UMissionPanelContent_C) == 0x000260, "Wrong size on UMissionPanelContent_C");
static_assert(offsetof(UMissionPanelContent_C, UberGraphFrame) == 0x000238, "Member 'UMissionPanelContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionPanelContent_C, MissionIcon) == 0x000240, "Member 'UMissionPanelContent_C::MissionIcon' has a wrong offset!");
static_assert(offsetof(UMissionPanelContent_C, MissionName) == 0x000248, "Member 'UMissionPanelContent_C::MissionName' has a wrong offset!");
static_assert(offsetof(UMissionPanelContent_C, MissionRewards) == 0x000250, "Member 'UMissionPanelContent_C::MissionRewards' has a wrong offset!");
static_assert(offsetof(UMissionPanelContent_C, OverviewObjectives) == 0x000258, "Member 'UMissionPanelContent_C::OverviewObjectives' has a wrong offset!");

}

