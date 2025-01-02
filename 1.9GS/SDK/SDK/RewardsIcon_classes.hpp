#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardsIcon

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RewardsIcon.RewardsIcon_C
// 0x0090 (0x02C8 - 0x0238)
class URewardsIcon_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       MaterializeAnimation;                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       DisperseAnimation;                                 // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIcon;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxIconScale;                                 // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnSlideAnimationFinished;                          // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnDisperseAnimationFinished;                       // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnMaterializeAnimationFinished;                    // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortRewardNotificationData*            Reward;                                            // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideAnimStartTime;                                // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideAnimStartTranslation;                         // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideAnimTargetTranslation;                        // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SlideAnimHandle;                                   // 0x02A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UMaterialInstanceDynamic*               IconMaterial;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnImageClicked;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_RewardsIcon(int32 EntryPoint);
	void whiteFadeOut(float Percent);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void PlayHideAnimation();
	void Cleanup();
	void PopulateFromReward(class UFortRewardNotificationData* InRewardItem);
	void HandleHideAnimationFinished();
	void HandleShowAnimationFinished();
	void HandleSlideAnimationFinished();
	void TickSlideAnimation();
	void PlaySlideAnimation(float TargetTranslation);
	void PopulateFromLootLevel(int32 LootLevel, class UTexture2D** Texture);
	void SetScale(float Scale);
	void GetScale(float* Scale);
	void PopulateFromMissionRewards();
	void PopulateFromQuestRewards();
	void PopulateFromNewQuest();
	void PopulateFromExpedition();
	void PopulateFromCollectionBookRewards();
	void PopulateFromRandomLootLevel(class UTexture2D** Texture);
	void RandomizeDesignView();
	struct FEventReply On_ImageIcon_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayShowAnimation();
	void Play_Hide_Animation_Sound();
	void Play_Show_Animation_Sound();
	void PopulateFromMissionAlertRewards();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardsIcon_C">();
	}
	static class URewardsIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardsIcon_C>();
	}
};
static_assert(alignof(URewardsIcon_C) == 0x000008, "Wrong alignment on URewardsIcon_C");
static_assert(sizeof(URewardsIcon_C) == 0x0002C8, "Wrong size on URewardsIcon_C");
static_assert(offsetof(URewardsIcon_C, UberGraphFrame) == 0x000238, "Member 'URewardsIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, MaterializeAnimation) == 0x000240, "Member 'URewardsIcon_C::MaterializeAnimation' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, DisperseAnimation) == 0x000248, "Member 'URewardsIcon_C::DisperseAnimation' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, ImageIcon) == 0x000250, "Member 'URewardsIcon_C::ImageIcon' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, ScaleBoxIconScale) == 0x000258, "Member 'URewardsIcon_C::ScaleBoxIconScale' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, OnSlideAnimationFinished) == 0x000260, "Member 'URewardsIcon_C::OnSlideAnimationFinished' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, OnDisperseAnimationFinished) == 0x000270, "Member 'URewardsIcon_C::OnDisperseAnimationFinished' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, OnMaterializeAnimationFinished) == 0x000280, "Member 'URewardsIcon_C::OnMaterializeAnimationFinished' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, Reward) == 0x000290, "Member 'URewardsIcon_C::Reward' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, SlideAnimStartTime) == 0x000298, "Member 'URewardsIcon_C::SlideAnimStartTime' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, SlideAnimStartTranslation) == 0x00029C, "Member 'URewardsIcon_C::SlideAnimStartTranslation' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, SlideAnimTargetTranslation) == 0x0002A0, "Member 'URewardsIcon_C::SlideAnimTargetTranslation' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, SlideAnimHandle) == 0x0002A8, "Member 'URewardsIcon_C::SlideAnimHandle' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, IconMaterial) == 0x0002B0, "Member 'URewardsIcon_C::IconMaterial' has a wrong offset!");
static_assert(offsetof(URewardsIcon_C, OnImageClicked) == 0x0002B8, "Member 'URewardsIcon_C::OnImageClicked' has a wrong offset!");

}

