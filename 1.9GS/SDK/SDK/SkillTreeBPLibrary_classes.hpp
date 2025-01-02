#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillTreeBPLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SkillTreeBPLibrary.SkillTreeBPLibrary_C
// 0x0000 (0x0028 - 0x0028)
class USkillTreeBPLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void UpdateSkillTreeNodeMaterial_StaticData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNode& NodeData, const struct FFortSkillTreeNodeDisplayData& DisplayData, class UCommonButton* Button, class UObject* __WorldContext);
	static void GetSkillTreeNodeCostTint(const struct FHomebaseNode& HomebaseNode, class UObject* __WorldContext, struct FLinearColor* NodeTintColour);
	static void UpdateSkillTreeNodeMaterial_DynamicData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNodeState& NodeState, class UObject* __WorldContext);
	static void GetSkillTreeNodeSizeByMagnitude(EFortHomebaseNodeMagnitude Node_Magnitude, EFortHomebaseNodeDisplayType Display_Type, class UObject* World_Context, class UObject* __WorldContext, float* Size);
	static void GetSkillTreeNodeShapeByDisplayType(EFortHomebaseNodeDisplayType Display_Type, class UObject* __WorldContext, bool* IsSquare, bool* IsExitNode);
	static void GetSkillTreeNodeIconSizeByMagnitude(EFortHomebaseNodeMagnitude Node_Magnitude, class UObject* __WorldContext, EFortBrushSize* Icon_Size);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillTreeBPLibrary_C">();
	}
	static class USkillTreeBPLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillTreeBPLibrary_C>();
	}
};
static_assert(alignof(USkillTreeBPLibrary_C) == 0x000008, "Wrong alignment on USkillTreeBPLibrary_C");
static_assert(sizeof(USkillTreeBPLibrary_C) == 0x000028, "Wrong size on USkillTreeBPLibrary_C");

}
