#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniPartyMember

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniPartyMember.MiniPartyMember_C
// 0x01F0 (0x0450 - 0x0260)
class UMiniPartyMember_C final : public UFortPlayerTrackerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      ButtonPartyFinder;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ConnectedOverlay;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ConnectingSizeBox;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_571;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeaderImage;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MemberStatusSwitcher;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OpenImage;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayOpen;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    MemberInfo;                                        // 0x02B0(0x0190)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UFortUIManagerWidget_NUI*               UIManager;                                         // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyFinder_C*                         PartyFinder;                                       // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MiniPartyMember(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void Destruct();
	void ShowConnecting();
	void ShowConnected();
	void ShowOpen();
	void UpdateMemberInfo(struct FFortTeamMemberInfo& NewMemberInfo);
	ESlateVisibility GetLeaderVisibility();
	void OpenPartyFinder();
	void HandleMouseHoverVisualState(bool Hover);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniPartyMember_C">();
	}
	static class UMiniPartyMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniPartyMember_C>();
	}
};
static_assert(alignof(UMiniPartyMember_C) == 0x000008, "Wrong alignment on UMiniPartyMember_C");
static_assert(sizeof(UMiniPartyMember_C) == 0x000450, "Wrong size on UMiniPartyMember_C");
static_assert(offsetof(UMiniPartyMember_C, UberGraphFrame) == 0x000260, "Member 'UMiniPartyMember_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, ButtonPartyFinder) == 0x000268, "Member 'UMiniPartyMember_C::ButtonPartyFinder' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, ConnectedOverlay) == 0x000270, "Member 'UMiniPartyMember_C::ConnectedOverlay' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, ConnectingSizeBox) == 0x000278, "Member 'UMiniPartyMember_C::ConnectingSizeBox' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, Image_571) == 0x000280, "Member 'UMiniPartyMember_C::Image_571' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, LeaderImage) == 0x000288, "Member 'UMiniPartyMember_C::LeaderImage' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, MemberStatusSwitcher) == 0x000290, "Member 'UMiniPartyMember_C::MemberStatusSwitcher' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, OpenImage) == 0x000298, "Member 'UMiniPartyMember_C::OpenImage' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, OverlayOpen) == 0x0002A0, "Member 'UMiniPartyMember_C::OverlayOpen' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, PlayerBanner) == 0x0002A8, "Member 'UMiniPartyMember_C::PlayerBanner' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, MemberInfo) == 0x0002B0, "Member 'UMiniPartyMember_C::MemberInfo' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, UIManager) == 0x000440, "Member 'UMiniPartyMember_C::UIManager' has a wrong offset!");
static_assert(offsetof(UMiniPartyMember_C, PartyFinder) == 0x000448, "Member 'UMiniPartyMember_C::PartyFinder' has a wrong offset!");

}

