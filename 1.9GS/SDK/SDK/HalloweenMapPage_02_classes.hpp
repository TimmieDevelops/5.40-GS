#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HalloweenMapPage_02

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HalloweenMapPage_02.HalloweenMapPage_02_C
// 0x00A0 (0x02D8 - 0x0238)
class UHalloweenMapPage_02_C final : public UCommonUserWidget
{
public:
	class UWidgetAnimation*                       RewardOut;                                         // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       RewardIn;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasArt;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasQuests;                                      // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChoiceQuestion;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_DownArrow;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_SniperRifle;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         Node_Arrows;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         Node_Arrows_C_1;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         Node_Arrows_C_2;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         Node_Arrows_C_4;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         Node_Arrows_C_5;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         NodeArrows_Left;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNode_Arrows_C*                         NodeArrows_Right;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestMiniTile_C*                       Q1;                                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestMiniTile_C*                       Q2;                                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestMiniTile_C*                       Q3;                                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestMiniTile_C*                       Q4;                                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestMiniTile_C*                       Q5;                                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HalloweenMapPage_02_C">();
	}
	static class UHalloweenMapPage_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHalloweenMapPage_02_C>();
	}
};
static_assert(alignof(UHalloweenMapPage_02_C) == 0x000008, "Wrong alignment on UHalloweenMapPage_02_C");
static_assert(sizeof(UHalloweenMapPage_02_C) == 0x0002D8, "Wrong size on UHalloweenMapPage_02_C");
static_assert(offsetof(UHalloweenMapPage_02_C, RewardOut) == 0x000238, "Member 'UHalloweenMapPage_02_C::RewardOut' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, RewardIn) == 0x000240, "Member 'UHalloweenMapPage_02_C::RewardIn' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Arrow) == 0x000248, "Member 'UHalloweenMapPage_02_C::Arrow' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, CanvasArt) == 0x000250, "Member 'UHalloweenMapPage_02_C::CanvasArt' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, CanvasQuests) == 0x000258, "Member 'UHalloweenMapPage_02_C::CanvasQuests' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, ChoiceQuestion) == 0x000260, "Member 'UHalloweenMapPage_02_C::ChoiceQuestion' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Img_DownArrow) == 0x000268, "Member 'UHalloweenMapPage_02_C::Img_DownArrow' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Img_SniperRifle) == 0x000270, "Member 'UHalloweenMapPage_02_C::Img_SniperRifle' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Node_Arrows) == 0x000278, "Member 'UHalloweenMapPage_02_C::Node_Arrows' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Node_Arrows_C_1) == 0x000280, "Member 'UHalloweenMapPage_02_C::Node_Arrows_C_1' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Node_Arrows_C_2) == 0x000288, "Member 'UHalloweenMapPage_02_C::Node_Arrows_C_2' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Node_Arrows_C_4) == 0x000290, "Member 'UHalloweenMapPage_02_C::Node_Arrows_C_4' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Node_Arrows_C_5) == 0x000298, "Member 'UHalloweenMapPage_02_C::Node_Arrows_C_5' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, NodeArrows_Left) == 0x0002A0, "Member 'UHalloweenMapPage_02_C::NodeArrows_Left' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, NodeArrows_Right) == 0x0002A8, "Member 'UHalloweenMapPage_02_C::NodeArrows_Right' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Q1) == 0x0002B0, "Member 'UHalloweenMapPage_02_C::Q1' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Q2) == 0x0002B8, "Member 'UHalloweenMapPage_02_C::Q2' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Q3) == 0x0002C0, "Member 'UHalloweenMapPage_02_C::Q3' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Q4) == 0x0002C8, "Member 'UHalloweenMapPage_02_C::Q4' has a wrong offset!");
static_assert(offsetof(UHalloweenMapPage_02_C, Q5) == 0x0002D0, "Member 'UHalloweenMapPage_02_C::Q5' has a wrong offset!");

}
