#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CampaignMapPage_Stonewood_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CampaignMapPage_Stonewood_01.CampaignMapPage_Stonewood_01_C
// 0x0080 (0x02B8 - 0x0238)
class UCampaignMapPage_Stonewood_01_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       RewardOut;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       RewardIn;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasArt;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasQuests;                                      // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_DownArrow;                                     // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_SniperRifle;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         Node_Arrows;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         Node_Arrows_C_0;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         Node_Arrows_C_1;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         NodeArrows_Left;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         NodeArrows_Right;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestMiniTile_C*                       Q1;                                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestMiniTile_C*                       Q2;                                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestMiniTile_C*                       Q3;                                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestMiniTile_C*                       Q4;                                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CampaignMapPage_Stonewood_01(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CampaignMapPage_Stonewood_01_C">();
	}
	static class UCampaignMapPage_Stonewood_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCampaignMapPage_Stonewood_01_C>();
	}
};
static_assert(alignof(UCampaignMapPage_Stonewood_01_C) == 0x000008, "Wrong alignment on UCampaignMapPage_Stonewood_01_C");
static_assert(sizeof(UCampaignMapPage_Stonewood_01_C) == 0x0002B8, "Wrong size on UCampaignMapPage_Stonewood_01_C");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, UberGraphFrame) == 0x000238, "Member 'UCampaignMapPage_Stonewood_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, RewardOut) == 0x000240, "Member 'UCampaignMapPage_Stonewood_01_C::RewardOut' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, RewardIn) == 0x000248, "Member 'UCampaignMapPage_Stonewood_01_C::RewardIn' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, CanvasArt) == 0x000250, "Member 'UCampaignMapPage_Stonewood_01_C::CanvasArt' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, CanvasQuests) == 0x000258, "Member 'UCampaignMapPage_Stonewood_01_C::CanvasQuests' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, Img_DownArrow) == 0x000260, "Member 'UCampaignMapPage_Stonewood_01_C::Img_DownArrow' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, Img_SniperRifle) == 0x000268, "Member 'UCampaignMapPage_Stonewood_01_C::Img_SniperRifle' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, Node_Arrows) == 0x000270, "Member 'UCampaignMapPage_Stonewood_01_C::Node_Arrows' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, Node_Arrows_C_0) == 0x000278, "Member 'UCampaignMapPage_Stonewood_01_C::Node_Arrows_C_0' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, Node_Arrows_C_1) == 0x000280, "Member 'UCampaignMapPage_Stonewood_01_C::Node_Arrows_C_1' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, NodeArrows_Left) == 0x000288, "Member 'UCampaignMapPage_Stonewood_01_C::NodeArrows_Left' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, NodeArrows_Right) == 0x000290, "Member 'UCampaignMapPage_Stonewood_01_C::NodeArrows_Right' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, Q1) == 0x000298, "Member 'UCampaignMapPage_Stonewood_01_C::Q1' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, Q2) == 0x0002A0, "Member 'UCampaignMapPage_Stonewood_01_C::Q2' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, Q3) == 0x0002A8, "Member 'UCampaignMapPage_Stonewood_01_C::Q3' has a wrong offset!");
static_assert(offsetof(UCampaignMapPage_Stonewood_01_C, Q4) == 0x0002B0, "Member 'UCampaignMapPage_Stonewood_01_C::Q4' has a wrong offset!");

}

