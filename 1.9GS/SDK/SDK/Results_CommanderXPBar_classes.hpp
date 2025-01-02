#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_CommanderXPBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Results_CommanderXP_Data_structs.hpp"
#include "CommonUI_classes.hpp"
#include "REsults_CommanderXP_MaterialData_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_CommanderXPBar.Results_CommanderXPBar_C
// 0x0110 (0x0348 - 0x0238)
class UResults_CommanderXPBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_SkipToFinalState;                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_FlashBar;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Intro;                                        // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_BonusXpType_C*                 BonusXpType;                                       // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressBarNew;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           countTimer;                                        // 0x0268(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         CurrentXP;                                         // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLevel;                                      // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   CountFinished;                                     // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         PlayRate;                                          // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MAT_progressBarNew;                                // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIScoreReport*                     ScoreReport;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   LeveledUp;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   IntroFinished;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         countTime;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         countTimeStart;                                    // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkippedToEnd;                                     // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSkippingToEnd;                                    // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA[0x6];                                      // 0x02CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             GainXP;                                            // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ACGainXp;                                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Intro;                                             // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CountEnd;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CurrentXpParameterName;                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentCountStep;                                  // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   CountIncrement;                                    // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                             RestXP;                                            // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BoostXP;                                           // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MissedXP;                                          // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FResults_CommanderXP_Data>      XpSections;                                        // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FResults_CommanderXP_MaterialData> ProgressBarInfo;                                   // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Results_CommanderXPBar(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void On_Count_Finished();
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Count_Sequence();
	void Intro_Sequence();
	void UpdateCount();
	void Initialize(class UFortUIScoreReport* InScoreReport, float PlayRate_0);
	void SetSkippingToEnd();
	void SkipToFinalState();
	void PlayAnimationCommon(class UWidgetAnimation* Animation);
	void clearXpBar();
	void updateXpType();
	void RandomizeDesignView();
	void UpdateProgressBarPercent(class FName ParameterName, float ProgressBarPercent);
	void GetHoveredProgressBarSection(class FName* XpSectionName);
	class UWidget* Get_ProgressBarNew_ToolTipWidget();
	void DebugSections();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_CommanderXPBar_C">();
	}
	static class UResults_CommanderXPBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_CommanderXPBar_C>();
	}
};
static_assert(alignof(UResults_CommanderXPBar_C) == 0x000008, "Wrong alignment on UResults_CommanderXPBar_C");
static_assert(sizeof(UResults_CommanderXPBar_C) == 0x000348, "Wrong size on UResults_CommanderXPBar_C");
static_assert(offsetof(UResults_CommanderXPBar_C, UberGraphFrame) == 0x000238, "Member 'UResults_CommanderXPBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, Anim_SkipToFinalState) == 0x000240, "Member 'UResults_CommanderXPBar_C::Anim_SkipToFinalState' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, Anim_FlashBar) == 0x000248, "Member 'UResults_CommanderXPBar_C::Anim_FlashBar' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, Anim_Intro) == 0x000250, "Member 'UResults_CommanderXPBar_C::Anim_Intro' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, BonusXpType) == 0x000258, "Member 'UResults_CommanderXPBar_C::BonusXpType' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, ProgressBarNew) == 0x000260, "Member 'UResults_CommanderXPBar_C::ProgressBarNew' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, countTimer) == 0x000268, "Member 'UResults_CommanderXPBar_C::countTimer' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, CurrentXP) == 0x000270, "Member 'UResults_CommanderXPBar_C::CurrentXP' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, CurrentLevel) == 0x000274, "Member 'UResults_CommanderXPBar_C::CurrentLevel' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, CountFinished) == 0x000278, "Member 'UResults_CommanderXPBar_C::CountFinished' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, PlayRate) == 0x000288, "Member 'UResults_CommanderXPBar_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, MAT_progressBarNew) == 0x000290, "Member 'UResults_CommanderXPBar_C::MAT_progressBarNew' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, ScoreReport) == 0x000298, "Member 'UResults_CommanderXPBar_C::ScoreReport' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, LeveledUp) == 0x0002A0, "Member 'UResults_CommanderXPBar_C::LeveledUp' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, IntroFinished) == 0x0002B0, "Member 'UResults_CommanderXPBar_C::IntroFinished' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, countTime) == 0x0002C0, "Member 'UResults_CommanderXPBar_C::countTime' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, countTimeStart) == 0x0002C4, "Member 'UResults_CommanderXPBar_C::countTimeStart' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, bSkippedToEnd) == 0x0002C8, "Member 'UResults_CommanderXPBar_C::bSkippedToEnd' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, bSkippingToEnd) == 0x0002C9, "Member 'UResults_CommanderXPBar_C::bSkippingToEnd' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, GainXP) == 0x0002D0, "Member 'UResults_CommanderXPBar_C::GainXP' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, ACGainXp) == 0x0002D8, "Member 'UResults_CommanderXPBar_C::ACGainXp' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, Intro) == 0x0002E0, "Member 'UResults_CommanderXPBar_C::Intro' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, CountEnd) == 0x0002E8, "Member 'UResults_CommanderXPBar_C::CountEnd' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, CurrentXpParameterName) == 0x0002F0, "Member 'UResults_CommanderXPBar_C::CurrentXpParameterName' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, CurrentCountStep) == 0x0002F8, "Member 'UResults_CommanderXPBar_C::CurrentCountStep' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, CountIncrement) == 0x000300, "Member 'UResults_CommanderXPBar_C::CountIncrement' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, RestXP) == 0x000310, "Member 'UResults_CommanderXPBar_C::RestXP' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, BoostXP) == 0x000318, "Member 'UResults_CommanderXPBar_C::BoostXP' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, MissedXP) == 0x000320, "Member 'UResults_CommanderXPBar_C::MissedXP' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, XpSections) == 0x000328, "Member 'UResults_CommanderXPBar_C::XpSections' has a wrong offset!");
static_assert(offsetof(UResults_CommanderXPBar_C, ProgressBarInfo) == 0x000338, "Member 'UResults_CommanderXPBar_C::ProgressBarInfo' has a wrong offset!");

}

