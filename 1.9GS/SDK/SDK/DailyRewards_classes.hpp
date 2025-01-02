#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyRewards

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyRewards.DailyRewards_C
// 0x0080 (0x0490 - 0x0410)
class UDailyRewards_C final : public UFortDailyRewards
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         ClaimedRewardBox;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CurrentDaysLogged;                                 // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CurrentRewardsBox;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyRewardsCurrent_C*                 DailyRewardsCurrent_C_8;                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MainBorder;                                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SchedulesVerticalBox;                              // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ViewOrClaimSwitcher;                               // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LengthOfWeek;                                      // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C[0x4];                                      // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnDailyRewardsComplete;                            // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NumSchedulesToDisplay;                             // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474[0x4];                                      // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDailyRewardsCurrent_C*>         Rewards_to_Receive;                                // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          Currently_Open;                                    // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Trigger_Update_On_Complete;                        // 0x0489(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DailyRewards(int32 EntryPoint);
	void Destruct();
	void OnDeactivated();
	void ClaimResultReceived(const TArray<struct FFortItemInstanceQuantityPair>& Loot);
	void PreConstruct(bool IsDesignTime);
	void OnActivated();
	void Construct();
	void Setup_Daily_Rewards();
	void PopPanelWhileInGame();
	void Set_Input_Action_Handlers();
	void Handle_Close(bool* PassThrough);
	void Handle_Collect(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyRewards_C">();
	}
	static class UDailyRewards_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyRewards_C>();
	}
};
static_assert(alignof(UDailyRewards_C) == 0x000008, "Wrong alignment on UDailyRewards_C");
static_assert(sizeof(UDailyRewards_C) == 0x000490, "Wrong size on UDailyRewards_C");
static_assert(offsetof(UDailyRewards_C, UberGraphFrame) == 0x000410, "Member 'UDailyRewards_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, ClaimedRewardBox) == 0x000418, "Member 'UDailyRewards_C::ClaimedRewardBox' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, CurrentDaysLogged) == 0x000420, "Member 'UDailyRewards_C::CurrentDaysLogged' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, CurrentRewardsBox) == 0x000428, "Member 'UDailyRewards_C::CurrentRewardsBox' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, DailyRewardsCurrent_C_8) == 0x000430, "Member 'UDailyRewards_C::DailyRewardsCurrent_C_8' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, MainBorder) == 0x000438, "Member 'UDailyRewards_C::MainBorder' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, SafeZone_0) == 0x000440, "Member 'UDailyRewards_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, SchedulesVerticalBox) == 0x000448, "Member 'UDailyRewards_C::SchedulesVerticalBox' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, ViewOrClaimSwitcher) == 0x000450, "Member 'UDailyRewards_C::ViewOrClaimSwitcher' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, LengthOfWeek) == 0x000458, "Member 'UDailyRewards_C::LengthOfWeek' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, OnDailyRewardsComplete) == 0x000460, "Member 'UDailyRewards_C::OnDailyRewardsComplete' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, NumSchedulesToDisplay) == 0x000470, "Member 'UDailyRewards_C::NumSchedulesToDisplay' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, Rewards_to_Receive) == 0x000478, "Member 'UDailyRewards_C::Rewards_to_Receive' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, Currently_Open) == 0x000488, "Member 'UDailyRewards_C::Currently_Open' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, Trigger_Update_On_Complete) == 0x000489, "Member 'UDailyRewards_C::Trigger_Update_On_Complete' has a wrong offset!");

}

