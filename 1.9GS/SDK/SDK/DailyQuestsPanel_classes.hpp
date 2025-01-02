#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestsPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyQuestsPanel.DailyQuestsPanel_C
// 0x0020 (0x0258 - 0x0238)
class UDailyQuestsPanel_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      ClaimButton;                                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DailyQuestList;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ClaimingQuestsInProgress;                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DailyQuestsPanel(int32 EntryPoint);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BindEventListeners();
	void OnQuestsUpdated();
	void CreateQuestWidget(class UFortQuestItem* Quest);
	void OnQuestsGranted(TArray<class UFortQuestItem*>& NewQuests);
	void OnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void OnNoQuestRewardsToClaim();
	void ClaimNextQuestReward();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyQuestsPanel_C">();
	}
	static class UDailyQuestsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyQuestsPanel_C>();
	}
};
static_assert(alignof(UDailyQuestsPanel_C) == 0x000008, "Wrong alignment on UDailyQuestsPanel_C");
static_assert(sizeof(UDailyQuestsPanel_C) == 0x000258, "Wrong size on UDailyQuestsPanel_C");
static_assert(offsetof(UDailyQuestsPanel_C, UberGraphFrame) == 0x000238, "Member 'UDailyQuestsPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, ClaimButton) == 0x000240, "Member 'UDailyQuestsPanel_C::ClaimButton' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, DailyQuestList) == 0x000248, "Member 'UDailyQuestsPanel_C::DailyQuestList' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, ClaimingQuestsInProgress) == 0x000250, "Member 'UDailyQuestsPanel_C::ClaimingQuestsInProgress' has a wrong offset!");

}
