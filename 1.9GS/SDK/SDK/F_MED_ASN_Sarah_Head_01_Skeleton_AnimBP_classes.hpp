#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP.F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C
// 0x1858 (0x1C68 - 0x0410)
class UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_B2D640E04368BB3AFF2ABD8482F20712; // 0x0418(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7; // 0x0460(0x0098)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_AF97E05446D515DB720FD6AEFA524081; // 0x04F8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_A9B81D6D419409628B8B1A9CE51487EA; // 0x0540(0x0060)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_76F67A4C40E3FA184AC7A8A51B83C299; // 0x05A0(0x00B0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_E8C6639148055D384AD2469FE4F8B9C3; // 0x0650(0x00B0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4; // 0x0700(0x00D0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F; // 0x07D0(0x0098)(ContainsInstancedReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_ED136C744F041E5EAE8AC190BBEBDC0B; // 0x0868(0x0048)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621; // 0x08B0(0x0268)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B; // 0x0B18(0x0268)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378; // 0x0D80(0x0268)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3EEAEF3D48EDB7FDEBD4709BAE5F6676; // 0x0FE8(0x0268)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97; // 0x1250(0x0268)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_310B32CE4F1CA1D8E32A4AB96A9F13FC; // 0x14B8(0x0268)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_6589B9834A2A8E87F6F00AB2E506957F; // 0x1720(0x0268)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_FAE2CFD3472EB9947B79D1B37B594444; // 0x1988(0x0268)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_DA85215A4F9C03E4623785A8AA328C9B; // 0x1BF0(0x0070)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x1C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C">();
	}
	static class UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C) == 0x000008, "Wrong alignment on UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C");
static_assert(sizeof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C) == 0x001C68, "Wrong size on UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, UberGraphFrame) == 0x000410, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Root_B2D640E04368BB3AFF2ABD8482F20712) == 0x000418, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Root_B2D640E04368BB3AFF2ABD8482F20712' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7) == 0x000460, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_5C7DD26F49546D1EBB268C82B88D92A7' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LocalToComponentSpace_AF97E05446D515DB720FD6AEFA524081) == 0x0004F8, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LocalToComponentSpace_AF97E05446D515DB720FD6AEFA524081' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Slot_A9B81D6D419409628B8B1A9CE51487EA) == 0x000540, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Slot_A9B81D6D419409628B8B1A9CE51487EA' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_76F67A4C40E3FA184AC7A8A51B83C299) == 0x0005A0, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_76F67A4C40E3FA184AC7A8A51B83C299' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_E8C6639148055D384AD2469FE4F8B9C3) == 0x000650, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_E8C6639148055D384AD2469FE4F8B9C3' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4) == 0x000700, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool_BB7F577143F6B8AE880680A99DE774D4' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F) == 0x0007D0, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_2617FA7A478129EDBC41F0B60D02F14F' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_ED136C744F041E5EAE8AC190BBEBDC0B) == 0x000868, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_ED136C744F041E5EAE8AC190BBEBDC0B' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621) == 0x0008B0, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_56A3F42B45DF5217E7FED9B251917621' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B) == 0x000B18, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_B829034A42830E2555D025B70457A40B' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378) == 0x000D80, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_4F124726418173899D090583DF3F7378' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_3EEAEF3D48EDB7FDEBD4709BAE5F6676) == 0x000FE8, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_3EEAEF3D48EDB7FDEBD4709BAE5F6676' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97) == 0x001250, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_DBDE10B04D48F481FB253A8BA44ACC97' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_310B32CE4F1CA1D8E32A4AB96A9F13FC) == 0x0014B8, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_310B32CE4F1CA1D8E32A4AB96A9F13FC' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_6589B9834A2A8E87F6F00AB2E506957F) == 0x001720, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_6589B9834A2A8E87F6F00AB2E506957F' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_FAE2CFD3472EB9947B79D1B37B594444) == 0x001988, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_FAE2CFD3472EB9947B79D1B37B594444' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, AnimGraphNode_SequencePlayer_DA85215A4F9C03E4623785A8AA328C9B) == 0x001BF0, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::AnimGraphNode_SequencePlayer_DA85215A4F9C03E4623785A8AA328C9B' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C, MeshToCopy) == 0x001C60, "Member 'UF_MED_ASN_Sarah_Head_01_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}
