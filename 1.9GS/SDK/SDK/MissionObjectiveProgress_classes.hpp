#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionObjectiveProgress

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionObjectiveProgress.MissionObjectiveProgress_C
// 0x0018 (0x0250 - 0x0238)
class UMissionObjectiveProgress_C final : public UCommonUserWidget
{
public:
	class UProgressBar*                           ObjectiveProgressBar;                              // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ProgressBarText;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bConfigureAsHUD;                                   // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void Update(class AFortObjectiveBase* Objective, int32 BarIndex);
	void GetHeightEstimate(float* Height);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionObjectiveProgress_C">();
	}
	static class UMissionObjectiveProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionObjectiveProgress_C>();
	}
};
static_assert(alignof(UMissionObjectiveProgress_C) == 0x000008, "Wrong alignment on UMissionObjectiveProgress_C");
static_assert(sizeof(UMissionObjectiveProgress_C) == 0x000250, "Wrong size on UMissionObjectiveProgress_C");
static_assert(offsetof(UMissionObjectiveProgress_C, ObjectiveProgressBar) == 0x000238, "Member 'UMissionObjectiveProgress_C::ObjectiveProgressBar' has a wrong offset!");
static_assert(offsetof(UMissionObjectiveProgress_C, ProgressBarText) == 0x000240, "Member 'UMissionObjectiveProgress_C::ProgressBarText' has a wrong offset!");
static_assert(offsetof(UMissionObjectiveProgress_C, bConfigureAsHUD) == 0x000248, "Member 'UMissionObjectiveProgress_C::bConfigureAsHUD' has a wrong offset!");

}
