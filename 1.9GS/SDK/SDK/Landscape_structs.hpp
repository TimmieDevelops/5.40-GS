#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Landscape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Landscape.ELandscapeGizmoType
// NumValues: 0x0004
enum class ELandscapeGizmoType : uint8
{
	LGT_None                                 = 0,
	LGT_Height                               = 1,
	LGT_Weight                               = 2,
	LGT_MAX                                  = 3,
};

// Enum Landscape.EGrassScaling
// NumValues: 0x0004
enum class EGrassScaling : uint8
{
	Uniform                                  = 0,
	Free                                     = 1,
	LockXY                                   = 2,
	EGrassScaling_MAX                        = 3,
};

// Enum Landscape.ELandscapeLODFalloff
// NumValues: 0x0003
enum class ELandscapeLODFalloff : uint8
{
	Linear                                   = 0,
	SquareRoot                               = 1,
	ELandscapeLODFalloff_MAX                 = 2,
};

// Enum Landscape.ELandscapeLayerDisplayMode
// NumValues: 0x0004
enum class ELandscapeLayerDisplayMode : uint8
{
	Default                                  = 0,
	Alphabetical                             = 1,
	UserSpecific                             = 2,
	ELandscapeLayerDisplayMode_MAX           = 3,
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
// NumValues: 0x0005
enum class ELandscapeLayerPaintingRestriction : uint8
{
	None                                     = 0,
	UseMaxLayers                             = 1,
	ExistingOnly                             = 2,
	UseComponentWhitelist                    = 3,
	ELandscapeLayerPaintingRestriction_MAX   = 4,
};

// Enum Landscape.ELandscapeImportAlphamapType
// NumValues: 0x0003
enum class ELandscapeImportAlphamapType : uint8
{
	Additive                                 = 0,
	Layered                                  = 1,
	ELandscapeImportAlphamapType_MAX         = 2,
};

// Enum Landscape.ELandscapeSetupErrors
// NumValues: 0x0005
enum class ELandscapeSetupErrors : uint8
{
	LSE_None                                 = 0,
	LSE_NoLandscapeInfo                      = 1,
	LSE_CollsionXY                           = 2,
	LSE_NoLayerInfo                          = 3,
	LSE_MAX                                  = 4,
};

// Enum Landscape.LandscapeSplineMeshOrientation
// NumValues: 0x0003
enum class ELandscapeSplineMeshOrientation : uint8
{
	LSMO_XUp                                 = 0,
	LSMO_YUp                                 = 1,
	LSMO_MAX                                 = 2,
};

// Enum Landscape.ELandscapeLayerBlendType
// NumValues: 0x0004
enum class ELandscapeLayerBlendType : uint8
{
	LB_WeightBlend                           = 0,
	LB_AlphaBlend                            = 1,
	LB_HeightBlend                           = 2,
	LB_MAX                                   = 3,
};

// Enum Landscape.ELandscapeCustomizedCoordType
// NumValues: 0x0006
enum class ELandscapeCustomizedCoordType : uint8
{
	LCCT_None                                = 0,
	LCCT_CustomUV0                           = 1,
	LCCT_CustomUV1                           = 2,
	LCCT_CustomUV2                           = 3,
	LCCT_WeightMapUV                         = 4,
	LCCT_MAX                                 = 5,
};

// Enum Landscape.ETerrainCoordMappingType
// NumValues: 0x0005
enum class ETerrainCoordMappingType : uint8
{
	TCMT_Auto                                = 0,
	TCMT_XY                                  = 1,
	TCMT_XZ                                  = 2,
	TCMT_YZ                                  = 3,
	TCMT_MAX                                 = 4,
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010 (0x0010 - 0x0000)
struct FWeightmapLayerAllocationInfo final
{
public:
	class ULandscapeLayerInfoObject*              LayerInfo;                                         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         WeightmapTextureIndex;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         WeightmapTextureChannel;                           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWeightmapLayerAllocationInfo) == 0x000008, "Wrong alignment on FWeightmapLayerAllocationInfo");
static_assert(sizeof(FWeightmapLayerAllocationInfo) == 0x000010, "Wrong size on FWeightmapLayerAllocationInfo");
static_assert(offsetof(FWeightmapLayerAllocationInfo, LayerInfo) == 0x000000, "Member 'FWeightmapLayerAllocationInfo::LayerInfo' has a wrong offset!");
static_assert(offsetof(FWeightmapLayerAllocationInfo, WeightmapTextureIndex) == 0x000008, "Member 'FWeightmapLayerAllocationInfo::WeightmapTextureIndex' has a wrong offset!");
static_assert(offsetof(FWeightmapLayerAllocationInfo, WeightmapTextureChannel) == 0x000009, "Member 'FWeightmapLayerAllocationInfo::WeightmapTextureChannel' has a wrong offset!");

// ScriptStruct Landscape.GizmoSelectData
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FGizmoSelectData final
{
public:
	uint8                                         Pad_0[0x50];                                       // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGizmoSelectData) == 0x000008, "Wrong alignment on FGizmoSelectData");
static_assert(sizeof(FGizmoSelectData) == 0x000050, "Wrong size on FGizmoSelectData");

// ScriptStruct Landscape.GrassVariety
// 0x0048 (0x0048 - 0x0000)
struct FGrassVariety final
{
public:
	class UStaticMesh*                            GrassMesh;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GrassDensity;                                      // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGrid;                                          // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlacementJitter;                                   // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         StartCullDistance;                                 // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EndCullDistance;                                   // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinLOD;                                            // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGrassScaling                                 Scaling;                                           // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFloatInterval                         ScaleX;                                            // 0x0024(0x0008)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                         ScaleY;                                            // 0x002C(0x0008)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                         ScaleZ;                                            // 0x0034(0x0008)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RandomRotation;                                    // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AlignToSurface;                                    // 0x003D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseLandscapeLightmap;                             // 0x003E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                      LightingChannels;                                  // 0x003F(0x0001)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                          bReceivesDecals;                                   // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGrassVariety) == 0x000008, "Wrong alignment on FGrassVariety");
static_assert(sizeof(FGrassVariety) == 0x000048, "Wrong size on FGrassVariety");
static_assert(offsetof(FGrassVariety, GrassMesh) == 0x000000, "Member 'FGrassVariety::GrassMesh' has a wrong offset!");
static_assert(offsetof(FGrassVariety, GrassDensity) == 0x000008, "Member 'FGrassVariety::GrassDensity' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bUseGrid) == 0x00000C, "Member 'FGrassVariety::bUseGrid' has a wrong offset!");
static_assert(offsetof(FGrassVariety, PlacementJitter) == 0x000010, "Member 'FGrassVariety::PlacementJitter' has a wrong offset!");
static_assert(offsetof(FGrassVariety, StartCullDistance) == 0x000014, "Member 'FGrassVariety::StartCullDistance' has a wrong offset!");
static_assert(offsetof(FGrassVariety, EndCullDistance) == 0x000018, "Member 'FGrassVariety::EndCullDistance' has a wrong offset!");
static_assert(offsetof(FGrassVariety, MinLOD) == 0x00001C, "Member 'FGrassVariety::MinLOD' has a wrong offset!");
static_assert(offsetof(FGrassVariety, Scaling) == 0x000020, "Member 'FGrassVariety::Scaling' has a wrong offset!");
static_assert(offsetof(FGrassVariety, ScaleX) == 0x000024, "Member 'FGrassVariety::ScaleX' has a wrong offset!");
static_assert(offsetof(FGrassVariety, ScaleY) == 0x00002C, "Member 'FGrassVariety::ScaleY' has a wrong offset!");
static_assert(offsetof(FGrassVariety, ScaleZ) == 0x000034, "Member 'FGrassVariety::ScaleZ' has a wrong offset!");
static_assert(offsetof(FGrassVariety, RandomRotation) == 0x00003C, "Member 'FGrassVariety::RandomRotation' has a wrong offset!");
static_assert(offsetof(FGrassVariety, AlignToSurface) == 0x00003D, "Member 'FGrassVariety::AlignToSurface' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bUseLandscapeLightmap) == 0x00003E, "Member 'FGrassVariety::bUseLandscapeLightmap' has a wrong offset!");
static_assert(offsetof(FGrassVariety, LightingChannels) == 0x00003F, "Member 'FGrassVariety::LightingChannels' has a wrong offset!");
static_assert(offsetof(FGrassVariety, bReceivesDecals) == 0x000040, "Member 'FGrassVariety::bReceivesDecals' has a wrong offset!");

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010 (0x0010 - 0x0000)
struct FLandscapeInfoLayerSettings final
{
public:
	class ULandscapeLayerInfoObject*              LayerInfoObj;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   LayerName;                                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLandscapeInfoLayerSettings) == 0x000008, "Wrong alignment on FLandscapeInfoLayerSettings");
static_assert(sizeof(FLandscapeInfoLayerSettings) == 0x000010, "Wrong size on FLandscapeInfoLayerSettings");
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerInfoObj) == 0x000000, "Member 'FLandscapeInfoLayerSettings::LayerInfoObj' has a wrong offset!");
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerName) == 0x000008, "Member 'FLandscapeInfoLayerSettings::LayerName' has a wrong offset!");

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001 (0x0001 - 0x0000)
struct FLandscapeImportLayerInfo final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLandscapeImportLayerInfo) == 0x000001, "Wrong alignment on FLandscapeImportLayerInfo");
static_assert(sizeof(FLandscapeImportLayerInfo) == 0x000001, "Wrong size on FLandscapeImportLayerInfo");

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008 (0x0008 - 0x0000)
struct FLandscapeLayerStruct final
{
public:
	class ULandscapeLayerInfoObject*              LayerInfoObj;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLandscapeLayerStruct) == 0x000008, "Wrong alignment on FLandscapeLayerStruct");
static_assert(sizeof(FLandscapeLayerStruct) == 0x000008, "Wrong size on FLandscapeLayerStruct");
static_assert(offsetof(FLandscapeLayerStruct, LayerInfoObj) == 0x000000, "Member 'FLandscapeLayerStruct::LayerInfoObj' has a wrong offset!");

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001 (0x0001 - 0x0000)
struct FLandscapeEditorLayerSettings final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLandscapeEditorLayerSettings) == 0x000001, "Wrong alignment on FLandscapeEditorLayerSettings");
static_assert(sizeof(FLandscapeEditorLayerSettings) == 0x000001, "Wrong size on FLandscapeEditorLayerSettings");

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0020 (0x0020 - 0x0000)
struct FLandscapeWeightmapUsage final
{
public:
	class ULandscapeComponent*                    ChannelUsage[0x4];                                 // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLandscapeWeightmapUsage) == 0x000008, "Wrong alignment on FLandscapeWeightmapUsage");
static_assert(sizeof(FLandscapeWeightmapUsage) == 0x000020, "Wrong size on FLandscapeWeightmapUsage");
static_assert(offsetof(FLandscapeWeightmapUsage, ChannelUsage) == 0x000000, "Member 'FLandscapeWeightmapUsage::ChannelUsage' has a wrong offset!");

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038 (0x0038 - 0x0000)
struct FLandscapeSplineMeshEntry final
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             MaterialOverrides;                                 // 0x0008(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         bCenterH : 1;                                      // 0x0018(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CenterAdjust;                                      // 0x001C(0x0008)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bScaleToWidth : 1;                                 // 0x0024(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Scale;                                             // 0x0028(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELandscapeSplineMeshOrientation               Orientation;                                       // 0x0034(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESplineMeshAxis                               ForwardAxis;                                       // 0x0035(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESplineMeshAxis                               UpAxis;                                            // 0x0036(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLandscapeSplineMeshEntry) == 0x000008, "Wrong alignment on FLandscapeSplineMeshEntry");
static_assert(sizeof(FLandscapeSplineMeshEntry) == 0x000038, "Wrong size on FLandscapeSplineMeshEntry");
static_assert(offsetof(FLandscapeSplineMeshEntry, Mesh) == 0x000000, "Member 'FLandscapeSplineMeshEntry::Mesh' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, MaterialOverrides) == 0x000008, "Member 'FLandscapeSplineMeshEntry::MaterialOverrides' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, CenterAdjust) == 0x00001C, "Member 'FLandscapeSplineMeshEntry::CenterAdjust' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, Scale) == 0x000028, "Member 'FLandscapeSplineMeshEntry::Scale' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, Orientation) == 0x000034, "Member 'FLandscapeSplineMeshEntry::Orientation' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, ForwardAxis) == 0x000035, "Member 'FLandscapeSplineMeshEntry::ForwardAxis' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineMeshEntry, UpAxis) == 0x000036, "Member 'FLandscapeSplineMeshEntry::UpAxis' has a wrong offset!");

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010 (0x0010 - 0x0000)
struct FLandscapeSplineConnection final
{
public:
	class ULandscapeSplineSegment*                Segment;                                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         End : 1;                                           // 0x0008(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLandscapeSplineConnection) == 0x000008, "Wrong alignment on FLandscapeSplineConnection");
static_assert(sizeof(FLandscapeSplineConnection) == 0x000010, "Wrong size on FLandscapeSplineConnection");
static_assert(offsetof(FLandscapeSplineConnection, Segment) == 0x000000, "Member 'FLandscapeSplineConnection::Segment' has a wrong offset!");

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018 (0x0018 - 0x0000)
struct FLandscapeSplineSegmentConnection final
{
public:
	class ULandscapeSplineControlPoint*           ControlPoint;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TangentLen;                                        // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SocketName;                                        // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLandscapeSplineSegmentConnection) == 0x000008, "Wrong alignment on FLandscapeSplineSegmentConnection");
static_assert(sizeof(FLandscapeSplineSegmentConnection) == 0x000018, "Wrong size on FLandscapeSplineSegmentConnection");
static_assert(offsetof(FLandscapeSplineSegmentConnection, ControlPoint) == 0x000000, "Member 'FLandscapeSplineSegmentConnection::ControlPoint' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineSegmentConnection, TangentLen) == 0x000008, "Member 'FLandscapeSplineSegmentConnection::TangentLen' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineSegmentConnection, SocketName) == 0x000010, "Member 'FLandscapeSplineSegmentConnection::SocketName' has a wrong offset!");

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040 (0x0040 - 0x0000)
struct FLandscapeSplineInterpPoint final
{
public:
	struct FVector                                Center;                                            // 0x0000(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Left;                                              // 0x000C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Right;                                             // 0x0018(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FalloffLeft;                                       // 0x0024(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FalloffRight;                                      // 0x0030(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartEndFalloff;                                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLandscapeSplineInterpPoint) == 0x000004, "Wrong alignment on FLandscapeSplineInterpPoint");
static_assert(sizeof(FLandscapeSplineInterpPoint) == 0x000040, "Wrong size on FLandscapeSplineInterpPoint");
static_assert(offsetof(FLandscapeSplineInterpPoint, Center) == 0x000000, "Member 'FLandscapeSplineInterpPoint::Center' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, Left) == 0x00000C, "Member 'FLandscapeSplineInterpPoint::Left' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, Right) == 0x000018, "Member 'FLandscapeSplineInterpPoint::Right' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffLeft) == 0x000024, "Member 'FLandscapeSplineInterpPoint::FalloffLeft' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffRight) == 0x000030, "Member 'FLandscapeSplineInterpPoint::FalloffRight' has a wrong offset!");
static_assert(offsetof(FLandscapeSplineInterpPoint, StartEndFalloff) == 0x00003C, "Member 'FLandscapeSplineInterpPoint::StartEndFalloff' has a wrong offset!");

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001 (0x0001 - 0x0000)
struct FForeignWorldSplineData final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FForeignWorldSplineData) == 0x000001, "Wrong alignment on FForeignWorldSplineData");
static_assert(sizeof(FForeignWorldSplineData) == 0x000001, "Wrong size on FForeignWorldSplineData");

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001 (0x0001 - 0x0000)
struct FForeignSplineSegmentData final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FForeignSplineSegmentData) == 0x000001, "Wrong alignment on FForeignSplineSegmentData");
static_assert(sizeof(FForeignSplineSegmentData) == 0x000001, "Wrong size on FForeignSplineSegmentData");

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001 (0x0001 - 0x0000)
struct FForeignControlPointData final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FForeignControlPointData) == 0x000001, "Wrong alignment on FForeignControlPointData");
static_assert(sizeof(FForeignControlPointData) == 0x000001, "Wrong size on FForeignControlPointData");

// ScriptStruct Landscape.GrassInput
// 0x0048 (0x0048 - 0x0000)
struct FGrassInput final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeGrassType*                    GrassType;                                         // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                       Input;                                             // 0x0010(0x0038)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FGrassInput) == 0x000008, "Wrong alignment on FGrassInput");
static_assert(sizeof(FGrassInput) == 0x000048, "Wrong size on FGrassInput");
static_assert(offsetof(FGrassInput, Name) == 0x000000, "Member 'FGrassInput::Name' has a wrong offset!");
static_assert(offsetof(FGrassInput, GrassType) == 0x000008, "Member 'FGrassInput::GrassType' has a wrong offset!");
static_assert(offsetof(FGrassInput, Input) == 0x000010, "Member 'FGrassInput::Input' has a wrong offset!");

// ScriptStruct Landscape.LayerBlendInput
// 0x0098 (0x0098 - 0x0000)
struct FLayerBlendInput final
{
public:
	class FName                                   LayerName;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELandscapeLayerBlendType                      BlendType;                                         // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       LayerInput;                                        // 0x0010(0x0038)(NativeAccessSpecifierPublic)
	struct FExpressionInput                       HeightInput;                                       // 0x0048(0x0038)(NativeAccessSpecifierPublic)
	float                                         PreviewWeight;                                     // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ConstLayerInput;                                   // 0x0084(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstHeightInput;                                  // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLayerBlendInput) == 0x000008, "Wrong alignment on FLayerBlendInput");
static_assert(sizeof(FLayerBlendInput) == 0x000098, "Wrong size on FLayerBlendInput");
static_assert(offsetof(FLayerBlendInput, LayerName) == 0x000000, "Member 'FLayerBlendInput::LayerName' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, BlendType) == 0x000008, "Member 'FLayerBlendInput::BlendType' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, LayerInput) == 0x000010, "Member 'FLayerBlendInput::LayerInput' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, HeightInput) == 0x000048, "Member 'FLayerBlendInput::HeightInput' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, PreviewWeight) == 0x000080, "Member 'FLayerBlendInput::PreviewWeight' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, ConstLayerInput) == 0x000084, "Member 'FLayerBlendInput::ConstLayerInput' has a wrong offset!");
static_assert(offsetof(FLayerBlendInput, ConstHeightInput) == 0x000090, "Member 'FLayerBlendInput::ConstHeightInput' has a wrong offset!");

}

