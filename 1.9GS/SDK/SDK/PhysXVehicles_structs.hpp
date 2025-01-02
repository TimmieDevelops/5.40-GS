#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysXVehicles

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum PhysXVehicles.EVehicleDifferential4W
// NumValues: 0x0007
enum class EVehicleDifferential4W : uint8
{
	LimitedSlip_4W                           = 0,
	LimitedSlip_FrontDrive                   = 1,
	LimitedSlip_RearDrive                    = 2,
	Open_4W                                  = 3,
	Open_FrontDrive                          = 4,
	Open_RearDrive                           = 5,
	EVehicleDifferential4W_MAX               = 6,
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// 0x0010 (0x0470 - 0x0460)
struct FVehicleAnimInstanceProxy final : public FAnimInstanceProxy
{
public:
	uint8                                         Pad_460[0x10];                                     // 0x0460(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FVehicleAnimInstanceProxy) == 0x000010, "Wrong alignment on FVehicleAnimInstanceProxy");
static_assert(sizeof(FVehicleAnimInstanceProxy) == 0x000470, "Wrong size on FVehicleAnimInstanceProxy");

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// 0x0010 (0x0010 - 0x0000)
struct FTireConfigMaterialFriction final
{
public:
	class UPhysicalMaterial*                      PhysicalMaterial;                                  // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrictionScale;                                     // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTireConfigMaterialFriction) == 0x000008, "Wrong alignment on FTireConfigMaterialFriction");
static_assert(sizeof(FTireConfigMaterialFriction) == 0x000010, "Wrong size on FTireConfigMaterialFriction");
static_assert(offsetof(FTireConfigMaterialFriction, PhysicalMaterial) == 0x000000, "Member 'FTireConfigMaterialFriction::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(FTireConfigMaterialFriction, FrictionScale) == 0x000008, "Member 'FTireConfigMaterialFriction::FrictionScale' has a wrong offset!");

// ScriptStruct PhysXVehicles.VehicleInputRate
// 0x0008 (0x0008 - 0x0000)
struct FVehicleInputRate final
{
public:
	float                                         RiseRate;                                          // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FallRate;                                          // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVehicleInputRate) == 0x000004, "Wrong alignment on FVehicleInputRate");
static_assert(sizeof(FVehicleInputRate) == 0x000008, "Wrong size on FVehicleInputRate");
static_assert(offsetof(FVehicleInputRate, RiseRate) == 0x000000, "Member 'FVehicleInputRate::RiseRate' has a wrong offset!");
static_assert(offsetof(FVehicleInputRate, FallRate) == 0x000004, "Member 'FVehicleInputRate::FallRate' has a wrong offset!");

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// 0x0014 (0x0014 - 0x0000)
struct FReplicatedVehicleState final
{
public:
	float                                         SteeringInput;                                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ThrottleInput;                                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakeInput;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HandbrakeInput;                                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CurrentGear;                                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FReplicatedVehicleState) == 0x000004, "Wrong alignment on FReplicatedVehicleState");
static_assert(sizeof(FReplicatedVehicleState) == 0x000014, "Wrong size on FReplicatedVehicleState");
static_assert(offsetof(FReplicatedVehicleState, SteeringInput) == 0x000000, "Member 'FReplicatedVehicleState::SteeringInput' has a wrong offset!");
static_assert(offsetof(FReplicatedVehicleState, ThrottleInput) == 0x000004, "Member 'FReplicatedVehicleState::ThrottleInput' has a wrong offset!");
static_assert(offsetof(FReplicatedVehicleState, BrakeInput) == 0x000008, "Member 'FReplicatedVehicleState::BrakeInput' has a wrong offset!");
static_assert(offsetof(FReplicatedVehicleState, HandbrakeInput) == 0x00000C, "Member 'FReplicatedVehicleState::HandbrakeInput' has a wrong offset!");
static_assert(offsetof(FReplicatedVehicleState, CurrentGear) == 0x000010, "Member 'FReplicatedVehicleState::CurrentGear' has a wrong offset!");

// ScriptStruct PhysXVehicles.WheelSetup
// 0x0020 (0x0020 - 0x0000)
struct FWheelSetup final
{
public:
	TSubclassOf<class UVehicleWheel>              WheelClass;                                        // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AdditionalOffset;                                  // 0x0010(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableSteering;                                  // 0x001C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWheelSetup) == 0x000008, "Wrong alignment on FWheelSetup");
static_assert(sizeof(FWheelSetup) == 0x000020, "Wrong size on FWheelSetup");
static_assert(offsetof(FWheelSetup, WheelClass) == 0x000000, "Member 'FWheelSetup::WheelClass' has a wrong offset!");
static_assert(offsetof(FWheelSetup, BoneName) == 0x000008, "Member 'FWheelSetup::BoneName' has a wrong offset!");
static_assert(offsetof(FWheelSetup, AdditionalOffset) == 0x000010, "Member 'FWheelSetup::AdditionalOffset' has a wrong offset!");
static_assert(offsetof(FWheelSetup, bDisableSteering) == 0x00001C, "Member 'FWheelSetup::bDisableSteering' has a wrong offset!");

// ScriptStruct PhysXVehicles.VehicleGearData
// 0x000C (0x000C - 0x0000)
struct FVehicleGearData final
{
public:
	float                                         Ratio;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DownRatio;                                         // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UpRatio;                                           // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVehicleGearData) == 0x000004, "Wrong alignment on FVehicleGearData");
static_assert(sizeof(FVehicleGearData) == 0x00000C, "Wrong size on FVehicleGearData");
static_assert(offsetof(FVehicleGearData, Ratio) == 0x000000, "Member 'FVehicleGearData::Ratio' has a wrong offset!");
static_assert(offsetof(FVehicleGearData, DownRatio) == 0x000004, "Member 'FVehicleGearData::DownRatio' has a wrong offset!");
static_assert(offsetof(FVehicleGearData, UpRatio) == 0x000008, "Member 'FVehicleGearData::UpRatio' has a wrong offset!");

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// 0x0030 (0x0030 - 0x0000)
struct FVehicleTransmissionData final
{
public:
	bool                                          bUseGearAutoBox;                                   // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GearSwitchTime;                                    // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GearAutoBoxLatency;                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FinalRatio;                                        // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVehicleGearData>               ForwardGears;                                      // 0x0010(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                         ReverseGearRatio;                                  // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NeutralGearUpRatio;                                // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClutchStrength;                                    // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FVehicleTransmissionData) == 0x000008, "Wrong alignment on FVehicleTransmissionData");
static_assert(sizeof(FVehicleTransmissionData) == 0x000030, "Wrong size on FVehicleTransmissionData");
static_assert(offsetof(FVehicleTransmissionData, bUseGearAutoBox) == 0x000000, "Member 'FVehicleTransmissionData::bUseGearAutoBox' has a wrong offset!");
static_assert(offsetof(FVehicleTransmissionData, GearSwitchTime) == 0x000004, "Member 'FVehicleTransmissionData::GearSwitchTime' has a wrong offset!");
static_assert(offsetof(FVehicleTransmissionData, GearAutoBoxLatency) == 0x000008, "Member 'FVehicleTransmissionData::GearAutoBoxLatency' has a wrong offset!");
static_assert(offsetof(FVehicleTransmissionData, FinalRatio) == 0x00000C, "Member 'FVehicleTransmissionData::FinalRatio' has a wrong offset!");
static_assert(offsetof(FVehicleTransmissionData, ForwardGears) == 0x000010, "Member 'FVehicleTransmissionData::ForwardGears' has a wrong offset!");
static_assert(offsetof(FVehicleTransmissionData, ReverseGearRatio) == 0x000020, "Member 'FVehicleTransmissionData::ReverseGearRatio' has a wrong offset!");
static_assert(offsetof(FVehicleTransmissionData, NeutralGearUpRatio) == 0x000024, "Member 'FVehicleTransmissionData::NeutralGearUpRatio' has a wrong offset!");
static_assert(offsetof(FVehicleTransmissionData, ClutchStrength) == 0x000028, "Member 'FVehicleTransmissionData::ClutchStrength' has a wrong offset!");

// ScriptStruct PhysXVehicles.VehicleEngineData
// 0x0090 (0x0090 - 0x0000)
struct FVehicleEngineData final
{
public:
	struct FRuntimeFloatCurve                     TorqueCurve;                                       // 0x0000(0x0078)(Edit, NativeAccessSpecifierPublic)
	float                                         MaxRPM;                                            // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MOI;                                               // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingRateFullThrottle;                           // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingRateZeroThrottleClutchEngaged;              // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingRateZeroThrottleClutchDisengaged;           // 0x0088(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FVehicleEngineData) == 0x000008, "Wrong alignment on FVehicleEngineData");
static_assert(sizeof(FVehicleEngineData) == 0x000090, "Wrong size on FVehicleEngineData");
static_assert(offsetof(FVehicleEngineData, TorqueCurve) == 0x000000, "Member 'FVehicleEngineData::TorqueCurve' has a wrong offset!");
static_assert(offsetof(FVehicleEngineData, MaxRPM) == 0x000078, "Member 'FVehicleEngineData::MaxRPM' has a wrong offset!");
static_assert(offsetof(FVehicleEngineData, MOI) == 0x00007C, "Member 'FVehicleEngineData::MOI' has a wrong offset!");
static_assert(offsetof(FVehicleEngineData, DampingRateFullThrottle) == 0x000080, "Member 'FVehicleEngineData::DampingRateFullThrottle' has a wrong offset!");
static_assert(offsetof(FVehicleEngineData, DampingRateZeroThrottleClutchEngaged) == 0x000084, "Member 'FVehicleEngineData::DampingRateZeroThrottleClutchEngaged' has a wrong offset!");
static_assert(offsetof(FVehicleEngineData, DampingRateZeroThrottleClutchDisengaged) == 0x000088, "Member 'FVehicleEngineData::DampingRateZeroThrottleClutchDisengaged' has a wrong offset!");

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// 0x001C (0x001C - 0x0000)
struct FVehicleDifferential4WData final
{
public:
	EVehicleDifferential4W                        DifferentialType;                                  // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FrontRearSplit;                                    // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrontLeftRightSplit;                               // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RearLeftRightSplit;                                // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CentreBias;                                        // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrontBias;                                         // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RearBias;                                          // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVehicleDifferential4WData) == 0x000004, "Wrong alignment on FVehicleDifferential4WData");
static_assert(sizeof(FVehicleDifferential4WData) == 0x00001C, "Wrong size on FVehicleDifferential4WData");
static_assert(offsetof(FVehicleDifferential4WData, DifferentialType) == 0x000000, "Member 'FVehicleDifferential4WData::DifferentialType' has a wrong offset!");
static_assert(offsetof(FVehicleDifferential4WData, FrontRearSplit) == 0x000004, "Member 'FVehicleDifferential4WData::FrontRearSplit' has a wrong offset!");
static_assert(offsetof(FVehicleDifferential4WData, FrontLeftRightSplit) == 0x000008, "Member 'FVehicleDifferential4WData::FrontLeftRightSplit' has a wrong offset!");
static_assert(offsetof(FVehicleDifferential4WData, RearLeftRightSplit) == 0x00000C, "Member 'FVehicleDifferential4WData::RearLeftRightSplit' has a wrong offset!");
static_assert(offsetof(FVehicleDifferential4WData, CentreBias) == 0x000010, "Member 'FVehicleDifferential4WData::CentreBias' has a wrong offset!");
static_assert(offsetof(FVehicleDifferential4WData, FrontBias) == 0x000014, "Member 'FVehicleDifferential4WData::FrontBias' has a wrong offset!");
static_assert(offsetof(FVehicleDifferential4WData, RearBias) == 0x000018, "Member 'FVehicleDifferential4WData::RearBias' has a wrong offset!");

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// 0x0018 (0x0088 - 0x0070)
struct FAnimNode_WheelHandler final : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                         Pad_70[0x18];                                      // 0x0070(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_WheelHandler) == 0x000008, "Wrong alignment on FAnimNode_WheelHandler");
static_assert(sizeof(FAnimNode_WheelHandler) == 0x000088, "Wrong size on FAnimNode_WheelHandler");

}

