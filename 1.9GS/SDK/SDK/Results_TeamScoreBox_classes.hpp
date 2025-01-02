#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeamScoreBox

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_TeamScoreBox.Results_TeamScoreBox_C
// 0x00D8 (0x0310 - 0x0238)
class UResults_TeamScoreBox_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_AbsorptionOutro;                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_AbsorptionIntro;                              // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SkipToFinalState;                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_CountOutro;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_CountIntro;                                   // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Intro;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageAbsorb;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCore;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageFlashFX;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageType;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextScore;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextType;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortUIScoreType                              ScoreType;                                         // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Score;                                             // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountInterpolationTime;                            // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   CountUpFinished;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bCountingUp;                                       // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   CountDownFinished;                                 // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   IntroFinished;                                     // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         PlayRate;                                          // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashTextTypeTime;                                 // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextTypeColor;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FlashTextTypeTimer;                                // 0x0300(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         FlashTextTypeTimeStart;                            // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkippedToEnd;                                     // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSkippingToEnd;                                    // 0x030D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Results_TeamScoreBox(int32 EntryPoint);
	void BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
	void Stop_Count_Down_Absorption();
	void Skip_Count_Interpolation();
	void Text_Count_Down_Finished();
	void Text_Count_Up_Finished();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Count_Down_Sequence();
	void Count_Up_Sequence();
	void Intro_Sequence();
	void InitializeScoreType();
	void Initialize(EFortUIScoreType ScoreType_0, int32 Score_0, float PlayRate_0);
	void FlashTextType();
	void UpdateFlashTextType();
	void SetSkippingToEnd();
	void SkipToFinalState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_TeamScoreBox_C">();
	}
	static class UResults_TeamScoreBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_TeamScoreBox_C>();
	}
};
static_assert(alignof(UResults_TeamScoreBox_C) == 0x000008, "Wrong alignment on UResults_TeamScoreBox_C");
static_assert(sizeof(UResults_TeamScoreBox_C) == 0x000310, "Wrong size on UResults_TeamScoreBox_C");
static_assert(offsetof(UResults_TeamScoreBox_C, UberGraphFrame) == 0x000238, "Member 'UResults_TeamScoreBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, Anim_AbsorptionOutro) == 0x000240, "Member 'UResults_TeamScoreBox_C::Anim_AbsorptionOutro' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, Anim_AbsorptionIntro) == 0x000248, "Member 'UResults_TeamScoreBox_C::Anim_AbsorptionIntro' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, Anim_SkipToFinalState) == 0x000250, "Member 'UResults_TeamScoreBox_C::Anim_SkipToFinalState' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, Anim_CountOutro) == 0x000258, "Member 'UResults_TeamScoreBox_C::Anim_CountOutro' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, Anim_CountIntro) == 0x000260, "Member 'UResults_TeamScoreBox_C::Anim_CountIntro' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, Anim_Intro) == 0x000268, "Member 'UResults_TeamScoreBox_C::Anim_Intro' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, ImageAbsorb) == 0x000270, "Member 'UResults_TeamScoreBox_C::ImageAbsorb' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, ImageCore) == 0x000278, "Member 'UResults_TeamScoreBox_C::ImageCore' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, ImageFlashFX) == 0x000280, "Member 'UResults_TeamScoreBox_C::ImageFlashFX' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, ImageType) == 0x000288, "Member 'UResults_TeamScoreBox_C::ImageType' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, TextScore) == 0x000290, "Member 'UResults_TeamScoreBox_C::TextScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, TextType) == 0x000298, "Member 'UResults_TeamScoreBox_C::TextType' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, ScoreType) == 0x0002A0, "Member 'UResults_TeamScoreBox_C::ScoreType' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, Score) == 0x0002A4, "Member 'UResults_TeamScoreBox_C::Score' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, CountInterpolationTime) == 0x0002A8, "Member 'UResults_TeamScoreBox_C::CountInterpolationTime' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, CountUpFinished) == 0x0002B0, "Member 'UResults_TeamScoreBox_C::CountUpFinished' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, bCountingUp) == 0x0002C0, "Member 'UResults_TeamScoreBox_C::bCountingUp' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, CountDownFinished) == 0x0002C8, "Member 'UResults_TeamScoreBox_C::CountDownFinished' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, IntroFinished) == 0x0002D8, "Member 'UResults_TeamScoreBox_C::IntroFinished' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, PlayRate) == 0x0002E8, "Member 'UResults_TeamScoreBox_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, FlashTextTypeTime) == 0x0002EC, "Member 'UResults_TeamScoreBox_C::FlashTextTypeTime' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, TextTypeColor) == 0x0002F0, "Member 'UResults_TeamScoreBox_C::TextTypeColor' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, FlashTextTypeTimer) == 0x000300, "Member 'UResults_TeamScoreBox_C::FlashTextTypeTimer' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, FlashTextTypeTimeStart) == 0x000308, "Member 'UResults_TeamScoreBox_C::FlashTextTypeTimeStart' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, bSkippedToEnd) == 0x00030C, "Member 'UResults_TeamScoreBox_C::bSkippedToEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreBox_C, bSkippingToEnd) == 0x00030D, "Member 'UResults_TeamScoreBox_C::bSkippingToEnd' has a wrong offset!");

}

