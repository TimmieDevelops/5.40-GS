#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeleportPadPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_TeleportPadPlayer.Results_TeleportPadPlayer_C
// 0x00F8 (0x0330 - 0x0238)
class UResults_TeleportPadPlayer_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Outro;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_InviteCheck;                                  // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ThumbsPulse;                                  // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ThumbsClick;                                  // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_TeleportPadScreenIntro;                       // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonInvite;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonStats;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonThumbs;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayThumbs;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeleportPadPlayerTop_C*        Top;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLocalPlayer;                                    // 0x0291(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_292[0x6];                                      // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ThumbsUp;                                          // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             ThumbsNeutral;                                     // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       UniqueNetID;                                       // 0x02A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnMissionStatsClicked;                             // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnAddFriendClicked;                                // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnUpVoteClicked;                                   // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   PlayerName;                                        // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnTeleportPadIntroFinished;                        // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FUniqueNetIdRepl                       ConsoleUniqueNetId;                                // 0x0318(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Results_TeleportPadPlayer(int32 EntryPoint);
	void BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Outro();
	void Teleport_Pad_Screen_Intro();
	void Team_Score_Screen_Outro();
	void Team_Score_Screen_Intro();
	void Initialize(struct FUniqueNetIdRepl& InUniqueId, class UFortUIScoreReport*& InScoreReport, const struct FUniqueNetIdRepl& InConsoleUniqueId);
	void SetIsValidPad();
	void IsValidPad(bool* bIsValid_0);
	void ThumbsUpPlayer();
	void InvitePlayer();
	void CanInviteParty(bool* bCanInvitePlayer);
	void CanFriend(bool* bCanFriendPlayer);
	void Focus();
	void IsLocalPlayersPad(bool* bIsLocalPlayersPad);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_TeleportPadPlayer_C">();
	}
	static class UResults_TeleportPadPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_TeleportPadPlayer_C>();
	}
};
static_assert(alignof(UResults_TeleportPadPlayer_C) == 0x000008, "Wrong alignment on UResults_TeleportPadPlayer_C");
static_assert(sizeof(UResults_TeleportPadPlayer_C) == 0x000330, "Wrong size on UResults_TeleportPadPlayer_C");
static_assert(offsetof(UResults_TeleportPadPlayer_C, UberGraphFrame) == 0x000238, "Member 'UResults_TeleportPadPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, Anim_Outro) == 0x000240, "Member 'UResults_TeleportPadPlayer_C::Anim_Outro' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, Anim_InviteCheck) == 0x000248, "Member 'UResults_TeleportPadPlayer_C::Anim_InviteCheck' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, Anim_ThumbsPulse) == 0x000250, "Member 'UResults_TeleportPadPlayer_C::Anim_ThumbsPulse' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, Anim_ThumbsClick) == 0x000258, "Member 'UResults_TeleportPadPlayer_C::Anim_ThumbsClick' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, Anim_TeleportPadScreenIntro) == 0x000260, "Member 'UResults_TeleportPadPlayer_C::Anim_TeleportPadScreenIntro' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, ButtonInvite) == 0x000268, "Member 'UResults_TeleportPadPlayer_C::ButtonInvite' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, ButtonStats) == 0x000270, "Member 'UResults_TeleportPadPlayer_C::ButtonStats' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, ButtonThumbs) == 0x000278, "Member 'UResults_TeleportPadPlayer_C::ButtonThumbs' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, OverlayThumbs) == 0x000280, "Member 'UResults_TeleportPadPlayer_C::OverlayThumbs' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, Top) == 0x000288, "Member 'UResults_TeleportPadPlayer_C::Top' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, bIsValid) == 0x000290, "Member 'UResults_TeleportPadPlayer_C::bIsValid' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, bIsLocalPlayer) == 0x000291, "Member 'UResults_TeleportPadPlayer_C::bIsLocalPlayer' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, ThumbsUp) == 0x000298, "Member 'UResults_TeleportPadPlayer_C::ThumbsUp' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, ThumbsNeutral) == 0x0002A0, "Member 'UResults_TeleportPadPlayer_C::ThumbsNeutral' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, UniqueNetID) == 0x0002A8, "Member 'UResults_TeleportPadPlayer_C::UniqueNetID' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, OnMissionStatsClicked) == 0x0002C0, "Member 'UResults_TeleportPadPlayer_C::OnMissionStatsClicked' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, OnAddFriendClicked) == 0x0002D0, "Member 'UResults_TeleportPadPlayer_C::OnAddFriendClicked' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, OnUpVoteClicked) == 0x0002E0, "Member 'UResults_TeleportPadPlayer_C::OnUpVoteClicked' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, PlayerName) == 0x0002F0, "Member 'UResults_TeleportPadPlayer_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, OnTeleportPadIntroFinished) == 0x000308, "Member 'UResults_TeleportPadPlayer_C::OnTeleportPadIntroFinished' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayer_C, ConsoleUniqueNetId) == 0x000318, "Member 'UResults_TeleportPadPlayer_C::ConsoleUniqueNetId' has a wrong offset!");

}

