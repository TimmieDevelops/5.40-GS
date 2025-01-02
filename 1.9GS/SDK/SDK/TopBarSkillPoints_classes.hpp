#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TopBarSkillPoints

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TopBarSkillPoints.TopBarSkillPoints_C
// 0x00B0 (0x02E8 - 0x0238)
class UTopBarSkillPoints_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_SillPointGained;                               // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_XP_Gained_;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonXPBar;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FounderBadge;                                      // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_3;                                   // 0x0260(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_201;                                 // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineBreak;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MissionRewardBadge;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MonthlyVIPBadge;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PersonalBoost;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RestBoost;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TeammateBoost;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBar_C*                               XpBar;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Party_Member_Boosted;                              // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MXPBoostDoubleRest;                                // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MXPBoostDouble;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MXPBoostSingle;                                    // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MXPBoostRest;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MXPBoostSingleRest;                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RestType;                                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Xp_For_Level;                                      // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         XPRequiredToLevel;                                 // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TopBarSkillPoints(int32 EntryPoint);
	void Destruct();
	void Founder_Changed();
	void On_Party_Joined();
	void On_Party_Left();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Xp_Boost_Changed(int32 BoostAmount);
	void Construct();
	void UpdateAccountInfo(const struct FFortPublicAccountInfo& Info);
	void Update_Boosts();
	class UWidget* GetBonusExperienceTooltipWidget();
	class UWidget* GetSkillPointsTooltipWidget();
	void GetBonusExperienceDescription(class FText* Result);
	int32 RestExperencePercentOfLevel();
	int32 BoostExperiencePercentOfLevel();
	void Bind_Party_Delegates();
	void Unbind_Party_Delegates();
	void HandleOnTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewMemberState);
	void HandleRemotePlayerRemoved(int32 RemovedIndex);
	void Has_Founder_Badge(bool* Result);
	void Has_VIP_Badge(bool* Result);
	class UWidget* GetMonthlyVIPBadgetTooltipWidget();
	class UWidget* GetFounderBadgetTooltipWidget();
	void Has_Mission_Reward_Boost(bool* Result);
	class UWidget* GetMissionRewardBadgeTooltipWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TopBarSkillPoints_C">();
	}
	static class UTopBarSkillPoints_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTopBarSkillPoints_C>();
	}
};
static_assert(alignof(UTopBarSkillPoints_C) == 0x000008, "Wrong alignment on UTopBarSkillPoints_C");
static_assert(sizeof(UTopBarSkillPoints_C) == 0x0002E8, "Wrong size on UTopBarSkillPoints_C");
static_assert(offsetof(UTopBarSkillPoints_C, UberGraphFrame) == 0x000238, "Member 'UTopBarSkillPoints_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, Ani_SillPointGained) == 0x000240, "Member 'UTopBarSkillPoints_C::Ani_SillPointGained' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, Ani_XP_Gained_) == 0x000248, "Member 'UTopBarSkillPoints_C::Ani_XP_Gained_' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, ButtonXPBar) == 0x000250, "Member 'UTopBarSkillPoints_C::ButtonXPBar' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, FounderBadge) == 0x000258, "Member 'UTopBarSkillPoints_C::FounderBadge' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, HorizontalBox_3) == 0x000260, "Member 'UTopBarSkillPoints_C::HorizontalBox_3' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, HorizontalBox_201) == 0x000268, "Member 'UTopBarSkillPoints_C::HorizontalBox_201' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, LineBreak) == 0x000270, "Member 'UTopBarSkillPoints_C::LineBreak' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, MissionRewardBadge) == 0x000278, "Member 'UTopBarSkillPoints_C::MissionRewardBadge' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, MonthlyVIPBadge) == 0x000280, "Member 'UTopBarSkillPoints_C::MonthlyVIPBadge' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, PersonalBoost) == 0x000288, "Member 'UTopBarSkillPoints_C::PersonalBoost' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, RestBoost) == 0x000290, "Member 'UTopBarSkillPoints_C::RestBoost' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, TeammateBoost) == 0x000298, "Member 'UTopBarSkillPoints_C::TeammateBoost' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, XpBar) == 0x0002A0, "Member 'UTopBarSkillPoints_C::XpBar' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, Party_Member_Boosted) == 0x0002A8, "Member 'UTopBarSkillPoints_C::Party_Member_Boosted' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, MXPBoostDoubleRest) == 0x0002B0, "Member 'UTopBarSkillPoints_C::MXPBoostDoubleRest' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, MXPBoostDouble) == 0x0002B8, "Member 'UTopBarSkillPoints_C::MXPBoostDouble' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, MXPBoostSingle) == 0x0002C0, "Member 'UTopBarSkillPoints_C::MXPBoostSingle' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, MXPBoostRest) == 0x0002C8, "Member 'UTopBarSkillPoints_C::MXPBoostRest' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, MXPBoostSingleRest) == 0x0002D0, "Member 'UTopBarSkillPoints_C::MXPBoostSingleRest' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, RestType) == 0x0002D8, "Member 'UTopBarSkillPoints_C::RestType' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, Xp_For_Level) == 0x0002E0, "Member 'UTopBarSkillPoints_C::Xp_For_Level' has a wrong offset!");
static_assert(offsetof(UTopBarSkillPoints_C, XPRequiredToLevel) == 0x0002E4, "Member 'UTopBarSkillPoints_C::XPRequiredToLevel' has a wrong offset!");

}

