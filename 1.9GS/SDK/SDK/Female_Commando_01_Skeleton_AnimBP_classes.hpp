#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Female_Commando_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C
// 0x0058 (0x0468 - 0x0410)
class UFemale_Commando_01_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_3D36AA2D48E736954157ABB046C8C983; // 0x0418(0x0048)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Female_Commando_01_Skeleton_AnimBP_C">();
	}
	static class UFemale_Commando_01_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFemale_Commando_01_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(UFemale_Commando_01_Skeleton_AnimBP_C) == 0x000008, "Wrong alignment on UFemale_Commando_01_Skeleton_AnimBP_C");
static_assert(sizeof(UFemale_Commando_01_Skeleton_AnimBP_C) == 0x000468, "Wrong size on UFemale_Commando_01_Skeleton_AnimBP_C");
static_assert(offsetof(UFemale_Commando_01_Skeleton_AnimBP_C, UberGraphFrame) == 0x000410, "Member 'UFemale_Commando_01_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFemale_Commando_01_Skeleton_AnimBP_C, AnimGraphNode_Root_3D36AA2D48E736954157ABB046C8C983) == 0x000418, "Member 'UFemale_Commando_01_Skeleton_AnimBP_C::AnimGraphNode_Root_3D36AA2D48E736954157ABB046C8C983' has a wrong offset!");
static_assert(offsetof(UFemale_Commando_01_Skeleton_AnimBP_C, MeshToCopy) == 0x000460, "Member 'UFemale_Commando_01_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}

