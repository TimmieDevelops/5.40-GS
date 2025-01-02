#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_M_MED_Head_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_M_MED_Head_01_Skeleton_AnimBP.SK_M_MED_Head_01_Skeleton_AnimBP_C
// 0x0488 (0x0898 - 0x0410)
class USK_M_MED_Head_01_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906; // 0x0418(0x0098)(ContainsInstancedReference)
	struct FAnimNode_Slot                         AnimGraphNode_Slot_9DEE8B0B4D1D9FDD54A44ABF56EF65F1; // 0x04B0(0x0060)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_4F3AE6E84F7148E8472FBEBF5A0A6FDD; // 0x0510(0x00B0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_E75482C745B090EF7CF656A41BAFD3BF; // 0x05C0(0x00B0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73; // 0x0670(0x00D0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7; // 0x0740(0x0098)(ContainsInstancedReference)
	struct FAnimNode_Root                         AnimGraphNode_Root_47CAB4DD44EBA0B3E1A25CA219D87178; // 0x07D8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_E4DBDBBA432A0619D5767194AA782C41; // 0x0820(0x0070)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_M_MED_Head_01_Skeleton_AnimBP_C">();
	}
	static class USK_M_MED_Head_01_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_M_MED_Head_01_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(USK_M_MED_Head_01_Skeleton_AnimBP_C) == 0x000008, "Wrong alignment on USK_M_MED_Head_01_Skeleton_AnimBP_C");
static_assert(sizeof(USK_M_MED_Head_01_Skeleton_AnimBP_C) == 0x000898, "Wrong size on USK_M_MED_Head_01_Skeleton_AnimBP_C");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, UberGraphFrame) == 0x000410, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906) == 0x000418, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Slot_9DEE8B0B4D1D9FDD54A44ABF56EF65F1) == 0x0004B0, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Slot_9DEE8B0B4D1D9FDD54A44ABF56EF65F1' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_4F3AE6E84F7148E8472FBEBF5A0A6FDD) == 0x000510, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_4F3AE6E84F7148E8472FBEBF5A0A6FDD' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_E75482C745B090EF7CF656A41BAFD3BF) == 0x0005C0, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_E75482C745B090EF7CF656A41BAFD3BF' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73) == 0x000670, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7) == 0x000740, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Root_47CAB4DD44EBA0B3E1A25CA219D87178) == 0x0007D8, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Root_47CAB4DD44EBA0B3E1A25CA219D87178' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_SequencePlayer_E4DBDBBA432A0619D5767194AA782C41) == 0x000820, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_SequencePlayer_E4DBDBBA432A0619D5767194AA782C41' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, MeshToCopy) == 0x000890, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}
