#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Bullet_Sniper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ExecuteUbergraph_B_Prj_Bullet_Sniper
// 0x0150 (0x0150 - 0x0000)
struct B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0020(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_Event_bIsOverlap;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AB[0x1];                                       // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00B0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00BC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00C8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00D4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0108(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0114(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0130(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable2;                             // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default;                             // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper) == 0x000008, "Wrong alignment on B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper");
static_assert(sizeof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper) == 0x000150, "Wrong size on B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, EntryPoint) == 0x000000, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, Temp_bool_Variable) == 0x000004, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, Temp_object_Variable) == 0x000008, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, K2Node_Event_OtherActor) == 0x000010, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, K2Node_Event_OtherComp) == 0x000018, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, K2Node_Event_HitResult) == 0x000020, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, K2Node_Event_bIsOverlap) == 0x0000A8, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::K2Node_Event_bIsOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_bBlockingHit) == 0x0000A9, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000AA, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_Time) == 0x0000AC, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_Location) == 0x0000B0, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_ImpactPoint) == 0x0000BC, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_Normal) == 0x0000C8, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_ImpactNormal) == 0x0000D4, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_PhysMat) == 0x0000E0, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_HitActor) == 0x0000E8, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_HitComponent) == 0x0000F0, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_HitBoneName) == 0x0000F8, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_HitItem) == 0x000100, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_FaceIndex) == 0x000104, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_TraceStart) == 0x000108, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_BreakHitResult_TraceEnd) == 0x000114, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000120, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, K2Node_Event_DeltaSeconds) == 0x00012C, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000130, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, Temp_object_Variable2) == 0x000140, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::Temp_object_Variable2' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper, K2Node_Select_Default) == 0x000148, "Member 'B_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper::K2Node_Select_Default' has a wrong offset!");

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Prj_Bullet_Sniper_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Bullet_Sniper_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Prj_Bullet_Sniper_C_ReceiveTick");
static_assert(sizeof(B_Prj_Bullet_Sniper_C_ReceiveTick) == 0x000004, "Wrong size on B_Prj_Bullet_Sniper_C_ReceiveTick");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Prj_Bullet_Sniper_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnTouched
// 0x00A0 (0x00A0 - 0x0000)
struct B_Prj_Bullet_Sniper_C_OnTouched final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitResult;                                         // 0x0010(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          bIsOverlap;                                        // 0x0098(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_Bullet_Sniper_C_OnTouched) == 0x000008, "Wrong alignment on B_Prj_Bullet_Sniper_C_OnTouched");
static_assert(sizeof(B_Prj_Bullet_Sniper_C_OnTouched) == 0x0000A0, "Wrong size on B_Prj_Bullet_Sniper_C_OnTouched");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_OnTouched, OtherActor) == 0x000000, "Member 'B_Prj_Bullet_Sniper_C_OnTouched::OtherActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_OnTouched, OtherComp) == 0x000008, "Member 'B_Prj_Bullet_Sniper_C_OnTouched::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_OnTouched, HitResult) == 0x000010, "Member 'B_Prj_Bullet_Sniper_C_OnTouched::HitResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_C_OnTouched, bIsOverlap) == 0x000098, "Member 'B_Prj_Bullet_Sniper_C_OnTouched::bIsOverlap' has a wrong offset!");

}

