#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionRewardItem_Tooltip

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C
// 0x0038 (0x0268 - 0x0230)
class UMissionRewardItem_Tooltip_C final : public UUserWidget
{
public:
	class UBorder*                                Border;                                            // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextField;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              Item;                                              // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   DisplayName;                                       // 0x0250(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	class FText Get_Reward_Name();
	struct FSlateBrush Get_Reward_Icon();
	struct FLinearColor Get_Rarity_Color();
	struct FSlateColor Get_Rarity_Color__SlateColor_();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionRewardItem-Tooltip_C">();
	}
	static class UMissionRewardItem_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionRewardItem_Tooltip_C>();
	}
};
static_assert(alignof(UMissionRewardItem_Tooltip_C) == 0x000008, "Wrong alignment on UMissionRewardItem_Tooltip_C");
static_assert(sizeof(UMissionRewardItem_Tooltip_C) == 0x000268, "Wrong size on UMissionRewardItem_Tooltip_C");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, Border) == 0x000230, "Member 'UMissionRewardItem_Tooltip_C::Border' has a wrong offset!");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, Icon) == 0x000238, "Member 'UMissionRewardItem_Tooltip_C::Icon' has a wrong offset!");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, TextField) == 0x000240, "Member 'UMissionRewardItem_Tooltip_C::TextField' has a wrong offset!");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, Item) == 0x000248, "Member 'UMissionRewardItem_Tooltip_C::Item' has a wrong offset!");
static_assert(offsetof(UMissionRewardItem_Tooltip_C, DisplayName) == 0x000250, "Member 'UMissionRewardItem_Tooltip_C::DisplayName' has a wrong offset!");

}

