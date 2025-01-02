#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_CAU_Armstrong_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_CAU_Armstrong_01_Skeleton_AnimBP.F_MED_CAU_Armstrong_01_Skeleton_AnimBP_C
// 0x04A8 (0x08B8 - 0x0410)
class UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_0EC26DC347D7E40CA9392680E3F1A752; // 0x0418(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_3725B2F942F2C27E51033D83E5B92764; // 0x0460(0x0098)(ContainsInstancedReference)
	struct FAnimNode_Slot                         AnimGraphNode_Slot_8D1C069949068E49AA68DC8A8B44667E; // 0x04F8(0x0060)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_F1CCD822439E57B485188E9BE6399F53; // 0x0558(0x00B0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_9374D3DC4CFB636084873392DF9E8E45; // 0x0608(0x00B0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2DC87BE74B9504106F3922881CD02361; // 0x06B8(0x00D0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_F638E092488C0DA30AB541ACA63941F9; // 0x0788(0x0098)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_0CABFE4A496CC11CE98E88957AA63F33; // 0x0820(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6AC04744409DE2AEE363C79CDEBDCF53; // 0x0868(0x0048)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_3725B2F942F2C27E51033D83E5B92764();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_2DC87BE74B9504106F3922881CD02361();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_CAU_Armstrong_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F638E092488C0DA30AB541ACA63941F9();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_CAU_Armstrong_01_Skeleton_AnimBP_C">();
	}
	static class UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C) == 0x000008, "Wrong alignment on UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C");
static_assert(sizeof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C) == 0x0008B8, "Wrong size on UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, UberGraphFrame) == 0x000410, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, AnimGraphNode_Root_0EC26DC347D7E40CA9392680E3F1A752) == 0x000418, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::AnimGraphNode_Root_0EC26DC347D7E40CA9392680E3F1A752' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_3725B2F942F2C27E51033D83E5B92764) == 0x000460, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_3725B2F942F2C27E51033D83E5B92764' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, AnimGraphNode_Slot_8D1C069949068E49AA68DC8A8B44667E) == 0x0004F8, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::AnimGraphNode_Slot_8D1C069949068E49AA68DC8A8B44667E' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_F1CCD822439E57B485188E9BE6399F53) == 0x000558, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_F1CCD822439E57B485188E9BE6399F53' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_9374D3DC4CFB636084873392DF9E8E45) == 0x000608, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_9374D3DC4CFB636084873392DF9E8E45' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool_2DC87BE74B9504106F3922881CD02361) == 0x0006B8, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool_2DC87BE74B9504106F3922881CD02361' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_F638E092488C0DA30AB541ACA63941F9) == 0x000788, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_F638E092488C0DA30AB541ACA63941F9' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, AnimGraphNode_LocalToComponentSpace_0CABFE4A496CC11CE98E88957AA63F33) == 0x000820, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::AnimGraphNode_LocalToComponentSpace_0CABFE4A496CC11CE98E88957AA63F33' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_6AC04744409DE2AEE363C79CDEBDCF53) == 0x000868, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_6AC04744409DE2AEE363C79CDEBDCF53' has a wrong offset!");
static_assert(offsetof(UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C, MeshToCopy) == 0x0008B0, "Member 'UF_MED_CAU_Armstrong_01_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}
