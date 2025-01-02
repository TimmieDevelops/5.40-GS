#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Enemy_Frozen

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GCNL_Enemy_Frozen.GCNL_Enemy_Frozen_C.OnActive
// 0x01E0 (0x01E0 - 0x0000)
struct GCNL_Enemy_Frozen_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00D4(0x000C)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x00E0(0x0080)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ZeroConstructor, ReferenceParm)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0174(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_188[0x8];                                      // 0x0188(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0190(0x0030)(IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CallFunc_SpawnMeshAttachedToCharacter_Static_Mesh_Component_Reference; // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue2;        // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D4[0x4];                                      // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Enemy_Frozen_C_OnActive) == 0x000010, "Wrong alignment on GCNL_Enemy_Frozen_C_OnActive");
static_assert(sizeof(GCNL_Enemy_Frozen_C_OnActive) == 0x0001E0, "Wrong size on GCNL_Enemy_Frozen_C_OnActive");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, MyTarget) == 0x000000, "Member 'GCNL_Enemy_Frozen_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, Parameters) == 0x000008, "Member 'GCNL_Enemy_Frozen_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GCNL_Enemy_Frozen_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000C4, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, K2Node_DynamicCast_AsEnemy_Pawn_Parent) == 0x0000C8, "Member 'GCNL_Enemy_Frozen_C_OnActive::K2Node_DynamicCast_AsEnemy_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GCNL_Enemy_Frozen_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_MakeRotator_ReturnValue) == 0x0000D4, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, K2Node_MakeStruct_ParticleSysParam) == 0x0000E0, "Member 'GCNL_Enemy_Frozen_C_OnActive::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, K2Node_MakeArray_Array) == 0x000160, "Member 'GCNL_Enemy_Frozen_C_OnActive::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000170, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000174, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000180, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_MakeTransform_ReturnValue) == 0x000190, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_SpawnMeshAttachedToCharacter_Static_Mesh_Component_Reference) == 0x0001C0, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_SpawnMeshAttachedToCharacter_Static_Mesh_Component_Reference' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_GetGameTimeInSeconds_ReturnValue2) == 0x0001C8, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_GetGameTimeInSeconds_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_Add_FloatFloat_ReturnValue) == 0x0001CC, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_RandomFloat_ReturnValue) == 0x0001D0, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnActive, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0001D8, "Member 'GCNL_Enemy_Frozen_C_OnActive::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function GCNL_Enemy_Frozen.GCNL_Enemy_Frozen_C.OnRemove
// 0x0100 (0x0100 - 0x0000)
struct GCNL_Enemy_Frozen_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ZeroConstructor, ReferenceParm)
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference; // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_Enemy_Frozen_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_Enemy_Frozen_C_OnRemove");
static_assert(sizeof(GCNL_Enemy_Frozen_C_OnRemove) == 0x000100, "Wrong size on GCNL_Enemy_Frozen_C_OnRemove");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_Enemy_Frozen_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_Enemy_Frozen_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCNL_Enemy_Frozen_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, K2Node_MakeArray_Array) == 0x0000C8, "Member 'GCNL_Enemy_Frozen_C_OnRemove::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, K2Node_DynamicCast_AsEnemy_Pawn_Parent) == 0x0000D8, "Member 'GCNL_Enemy_Frozen_C_OnRemove::K2Node_DynamicCast_AsEnemy_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'GCNL_Enemy_Frozen_C_OnRemove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000E4, "Member 'GCNL_Enemy_Frozen_C_OnRemove::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference) == 0x0000F0, "Member 'GCNL_Enemy_Frozen_C_OnRemove::CallFunc_SpawnParticleSystemOnCharacterMesh_PSComponentReference' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x0000F8, "Member 'GCNL_Enemy_Frozen_C_OnRemove::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000FC, "Member 'GCNL_Enemy_Frozen_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Enemy_Frozen_C_OnRemove, CallFunc_IsValid_ReturnValue2) == 0x0000FD, "Member 'GCNL_Enemy_Frozen_C_OnRemove::CallFunc_IsValid_ReturnValue2' has a wrong offset!");

}

