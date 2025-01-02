#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeamTotalScore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_TeamTotalScore.Results_TeamTotalScore_C
// 0x00C8 (0x0300 - 0x0238)
class UResults_TeamTotalScore_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_SkipToConvertScoreFinalState;                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_TeleportPadIntro;                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_CommanderXPOutro;                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ConvertScore;                                 // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_CommanderXPIntro;                             // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SkipToScoreFinalState;                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_CountScore;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SubtotalsIntro;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_CountScoreIntro;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTotalScoreOverlay;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamSubtotalScore_C*           SubtotalBuilding;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamSubtotalScore_C*           SubtotalCombat;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamSubtotalScore_C*           SubtotalMission;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamSubtotalScore_C*           SubtotalUtility;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextTotalScore;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TotalScore;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountScoreInterpolationTime;                       // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConvertScoreInterpolationTime;                     // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConvertScoreInterpolationEndEarlyTime;             // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountScorePlayRate;                                // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkippedToCountScoreEnd;                           // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSkippingToCountScoreEnd;                          // 0x02CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CE[0x2];                                      // 0x02CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Count_Score_Finished;                              // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bCountingScore;                                    // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSkippedToConvertScoreEnd;                         // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSkippingToConvertScoreEnd;                        // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E3[0x1];                                      // 0x02E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConvertScorePlayRate;                              // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CountUpLoop;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CountUpEnd;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        loopedCountUpSound;                                // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Results_TeamTotalScore(int32 EntryPoint);
	void BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
	void Teleport_Pad_Intro_Sequence();
	void Convert_Score_Interpolation_Finished();
	void Count_Score_Interpolation_Finished();
	void Convert_Score_Sequence();
	void Convert_Score_Intro_Sequence();
	void PreConstruct(bool IsDesignTime);
	void Count_Score_Intro_Sequence();
	void Count_Score_Sequence();
	void Initialize(class UFortUIScoreReport* Score_Report);
	void SkipToCountScoreFinalState();
	void SetSkippingToCountScoreEnd();
	void SkipToConvertScoreFinalState();
	void SetSkippingToConvertScoreEnd();
	void InitializeCountScorePlayRate(float PlayRate);
	void InitializeConvertScorePlayRate(float PlayRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_TeamTotalScore_C">();
	}
	static class UResults_TeamTotalScore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_TeamTotalScore_C>();
	}
};
static_assert(alignof(UResults_TeamTotalScore_C) == 0x000008, "Wrong alignment on UResults_TeamTotalScore_C");
static_assert(sizeof(UResults_TeamTotalScore_C) == 0x000300, "Wrong size on UResults_TeamTotalScore_C");
static_assert(offsetof(UResults_TeamTotalScore_C, UberGraphFrame) == 0x000238, "Member 'UResults_TeamTotalScore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Anim_SkipToConvertScoreFinalState) == 0x000240, "Member 'UResults_TeamTotalScore_C::Anim_SkipToConvertScoreFinalState' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Anim_TeleportPadIntro) == 0x000248, "Member 'UResults_TeamTotalScore_C::Anim_TeleportPadIntro' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Anim_CommanderXPOutro) == 0x000250, "Member 'UResults_TeamTotalScore_C::Anim_CommanderXPOutro' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Anim_ConvertScore) == 0x000258, "Member 'UResults_TeamTotalScore_C::Anim_ConvertScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Anim_CommanderXPIntro) == 0x000260, "Member 'UResults_TeamTotalScore_C::Anim_CommanderXPIntro' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Anim_SkipToScoreFinalState) == 0x000268, "Member 'UResults_TeamTotalScore_C::Anim_SkipToScoreFinalState' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Anim_CountScore) == 0x000270, "Member 'UResults_TeamTotalScore_C::Anim_CountScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Anim_SubtotalsIntro) == 0x000278, "Member 'UResults_TeamTotalScore_C::Anim_SubtotalsIntro' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Anim_CountScoreIntro) == 0x000280, "Member 'UResults_TeamTotalScore_C::Anim_CountScoreIntro' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, ImageTotalScoreOverlay) == 0x000288, "Member 'UResults_TeamTotalScore_C::ImageTotalScoreOverlay' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, SubtotalBuilding) == 0x000290, "Member 'UResults_TeamTotalScore_C::SubtotalBuilding' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, SubtotalCombat) == 0x000298, "Member 'UResults_TeamTotalScore_C::SubtotalCombat' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, SubtotalMission) == 0x0002A0, "Member 'UResults_TeamTotalScore_C::SubtotalMission' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, SubtotalUtility) == 0x0002A8, "Member 'UResults_TeamTotalScore_C::SubtotalUtility' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, TextTotalScore) == 0x0002B0, "Member 'UResults_TeamTotalScore_C::TextTotalScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, TotalScore) == 0x0002B8, "Member 'UResults_TeamTotalScore_C::TotalScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, CountScoreInterpolationTime) == 0x0002BC, "Member 'UResults_TeamTotalScore_C::CountScoreInterpolationTime' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, ConvertScoreInterpolationTime) == 0x0002C0, "Member 'UResults_TeamTotalScore_C::ConvertScoreInterpolationTime' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, ConvertScoreInterpolationEndEarlyTime) == 0x0002C4, "Member 'UResults_TeamTotalScore_C::ConvertScoreInterpolationEndEarlyTime' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, CountScorePlayRate) == 0x0002C8, "Member 'UResults_TeamTotalScore_C::CountScorePlayRate' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, bSkippedToCountScoreEnd) == 0x0002CC, "Member 'UResults_TeamTotalScore_C::bSkippedToCountScoreEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, bSkippingToCountScoreEnd) == 0x0002CD, "Member 'UResults_TeamTotalScore_C::bSkippingToCountScoreEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, Count_Score_Finished) == 0x0002D0, "Member 'UResults_TeamTotalScore_C::Count_Score_Finished' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, bCountingScore) == 0x0002E0, "Member 'UResults_TeamTotalScore_C::bCountingScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, bSkippedToConvertScoreEnd) == 0x0002E1, "Member 'UResults_TeamTotalScore_C::bSkippedToConvertScoreEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, bSkippingToConvertScoreEnd) == 0x0002E2, "Member 'UResults_TeamTotalScore_C::bSkippingToConvertScoreEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, ConvertScorePlayRate) == 0x0002E4, "Member 'UResults_TeamTotalScore_C::ConvertScorePlayRate' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, CountUpLoop) == 0x0002E8, "Member 'UResults_TeamTotalScore_C::CountUpLoop' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, CountUpEnd) == 0x0002F0, "Member 'UResults_TeamTotalScore_C::CountUpEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamTotalScore_C, loopedCountUpSound) == 0x0002F8, "Member 'UResults_TeamTotalScore_C::loopedCountUpSound' has a wrong offset!");

}

