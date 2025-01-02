#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTeamMemberInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaTeamMemberInfo.AthenaTeamMemberInfo_C
// 0x0458 (0x0690 - 0x0238)
class UAthenaTeamMemberInfo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UAthenaTeamMemberDBNOState_C*           DBNOState;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DeadIndicator;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageDBNOBar;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageHealthbar;                                    // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageShieldbar;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Marker;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Speaker;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowingHealth;                                     // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShowingShield;                                     // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_282[0x6];                                      // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateAthena*                 PlayerState;                                       // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PlayerIndex;                                       // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Player0;                                           // 0x0298(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            Player1;                                           // 0x0328(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            Player2;                                           // 0x03B8(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            Player3;                                           // 0x0448(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Talking;                                           // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Muted;                                             // 0x04D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DA[0x6];                                      // 0x04DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            MutedBrush;                                        // 0x04E0(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            TalkingBrush;                                      // 0x0570(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            NotTalkingBrush;                                   // 0x0600(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint);
	void Construct();
	void SetHealth(float Value);
	void SetShield(float Value);
	void UpdatePS(class AFortPlayerStateAthena* InPlayerState);
	void SetDead(bool Dead);
	void SetDBNO(bool DBNO);
	void UpdatePlayerName();
	void SetReviving(bool Reviving);
	void SetMuted(bool NewMuted);
	void UpdateMicIcon();
	void SetTalking(bool NewTalking);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTeamMemberInfo_C">();
	}
	static class UAthenaTeamMemberInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTeamMemberInfo_C>();
	}
};
static_assert(alignof(UAthenaTeamMemberInfo_C) == 0x000008, "Wrong alignment on UAthenaTeamMemberInfo_C");
static_assert(sizeof(UAthenaTeamMemberInfo_C) == 0x000690, "Wrong size on UAthenaTeamMemberInfo_C");
static_assert(offsetof(UAthenaTeamMemberInfo_C, UberGraphFrame) == 0x000238, "Member 'UAthenaTeamMemberInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, DBNOState) == 0x000240, "Member 'UAthenaTeamMemberInfo_C::DBNOState' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, DeadIndicator) == 0x000248, "Member 'UAthenaTeamMemberInfo_C::DeadIndicator' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ImageDBNOBar) == 0x000250, "Member 'UAthenaTeamMemberInfo_C::ImageDBNOBar' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ImageHealthbar) == 0x000258, "Member 'UAthenaTeamMemberInfo_C::ImageHealthbar' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ImageShieldbar) == 0x000260, "Member 'UAthenaTeamMemberInfo_C::ImageShieldbar' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Marker) == 0x000268, "Member 'UAthenaTeamMemberInfo_C::Marker' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Speaker) == 0x000270, "Member 'UAthenaTeamMemberInfo_C::Speaker' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, TextPlayerName) == 0x000278, "Member 'UAthenaTeamMemberInfo_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ShowingHealth) == 0x000280, "Member 'UAthenaTeamMemberInfo_C::ShowingHealth' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ShowingShield) == 0x000281, "Member 'UAthenaTeamMemberInfo_C::ShowingShield' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, PlayerState) == 0x000288, "Member 'UAthenaTeamMemberInfo_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, PlayerIndex) == 0x000290, "Member 'UAthenaTeamMemberInfo_C::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Player0) == 0x000298, "Member 'UAthenaTeamMemberInfo_C::Player0' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Player1) == 0x000328, "Member 'UAthenaTeamMemberInfo_C::Player1' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Player2) == 0x0003B8, "Member 'UAthenaTeamMemberInfo_C::Player2' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Player3) == 0x000448, "Member 'UAthenaTeamMemberInfo_C::Player3' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Talking) == 0x0004D8, "Member 'UAthenaTeamMemberInfo_C::Talking' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Muted) == 0x0004D9, "Member 'UAthenaTeamMemberInfo_C::Muted' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, MutedBrush) == 0x0004E0, "Member 'UAthenaTeamMemberInfo_C::MutedBrush' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, TalkingBrush) == 0x000570, "Member 'UAthenaTeamMemberInfo_C::TalkingBrush' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, NotTalkingBrush) == 0x000600, "Member 'UAthenaTeamMemberInfo_C::NotTalkingBrush' has a wrong offset!");

}

