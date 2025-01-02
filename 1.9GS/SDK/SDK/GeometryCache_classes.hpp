#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class GeometryCache.GeometryCache
// 0x0038 (0x0060 - 0x0028)
class UGeometryCache final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>            Tracks;                                            // 0x0040(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCache">();
	}
	static class UGeometryCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCache>();
	}
};
static_assert(alignof(UGeometryCache) == 0x000008, "Wrong alignment on UGeometryCache");
static_assert(sizeof(UGeometryCache) == 0x000060, "Wrong size on UGeometryCache");
static_assert(offsetof(UGeometryCache, Materials) == 0x000030, "Member 'UGeometryCache::Materials' has a wrong offset!");
static_assert(offsetof(UGeometryCache, Tracks) == 0x000040, "Member 'UGeometryCache::Tracks' has a wrong offset!");

// Class GeometryCache.GeometryCacheActor
// 0x0008 (0x0390 - 0x0388)
class AGeometryCacheActor final : public AActor
{
public:
	class UGeometryCacheComponent*                GeometryCacheComponent;                            // 0x0388(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class UGeometryCacheComponent* GetGeometryCacheComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheActor">();
	}
	static class AGeometryCacheActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCacheActor>();
	}
};
static_assert(alignof(AGeometryCacheActor) == 0x000008, "Wrong alignment on AGeometryCacheActor");
static_assert(sizeof(AGeometryCacheActor) == 0x000390, "Wrong size on AGeometryCacheActor");
static_assert(offsetof(AGeometryCacheActor, GeometryCacheComponent) == 0x000388, "Member 'AGeometryCacheActor::GeometryCacheComponent' has a wrong offset!");

// Class GeometryCache.GeometryCacheComponent
// 0x0070 (0x07F0 - 0x0780)
class UGeometryCacheComponent final : public UMeshComponent
{
public:
	class UGeometryCache*                         GeometryCache;                                     // 0x0778(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRunning;                                          // 0x0780(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bLooping;                                          // 0x0781(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_782[0x2];                                      // 0x0782(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTimeOffset;                                   // 0x0784(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PlaybackSpeed;                                     // 0x0788(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         NumTracks;                                         // 0x078C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ElapsedTime;                                       // 0x0790(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_794[0x5C];                                     // 0x0794(0x005C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Pause();
	void Play();
	void PlayFromStart();
	void PlayReversed();
	void PlayReversedFromEnd();
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void SetLooping(const bool bNewLooping);
	void SetPlaybackSpeed(const float NewPlaybackSpeed);
	void Stop();

	float GetPlaybackSpeed() const;
	bool IsLooping() const;
	bool IsPlaying() const;
	bool IsPlayingReversed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheComponent">();
	}
	static class UGeometryCacheComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheComponent>();
	}
};
static_assert(alignof(UGeometryCacheComponent) == 0x000010, "Wrong alignment on UGeometryCacheComponent");
static_assert(sizeof(UGeometryCacheComponent) == 0x0007F0, "Wrong size on UGeometryCacheComponent");
static_assert(offsetof(UGeometryCacheComponent, GeometryCache) == 0x000778, "Member 'UGeometryCacheComponent::GeometryCache' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bRunning) == 0x000780, "Member 'UGeometryCacheComponent::bRunning' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bLooping) == 0x000781, "Member 'UGeometryCacheComponent::bLooping' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, StartTimeOffset) == 0x000784, "Member 'UGeometryCacheComponent::StartTimeOffset' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, PlaybackSpeed) == 0x000788, "Member 'UGeometryCacheComponent::PlaybackSpeed' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, NumTracks) == 0x00078C, "Member 'UGeometryCacheComponent::NumTracks' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, ElapsedTime) == 0x000790, "Member 'UGeometryCacheComponent::ElapsedTime' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrack
// 0x0028 (0x0050 - 0x0028)
class UGeometryCacheTrack : public UObject
{
public:
	uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack">();
	}
	static class UGeometryCacheTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack>();
	}
};
static_assert(alignof(UGeometryCacheTrack) == 0x000008, "Wrong alignment on UGeometryCacheTrack");
static_assert(sizeof(UGeometryCacheTrack) == 0x000050, "Wrong size on UGeometryCacheTrack");

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (0x0078 - 0x0050)
class UGeometryCacheTrack_FlipbookAnimation final : public UGeometryCacheTrack
{
public:
	uint32                                        NumMeshSamples;                                    // 0x0050(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_54[0x24];                                      // 0x0054(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, const float SampleTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_FlipbookAnimation">();
	}
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_FlipbookAnimation>();
	}
};
static_assert(alignof(UGeometryCacheTrack_FlipbookAnimation) == 0x000008, "Wrong alignment on UGeometryCacheTrack_FlipbookAnimation");
static_assert(sizeof(UGeometryCacheTrack_FlipbookAnimation) == 0x000078, "Wrong size on UGeometryCacheTrack_FlipbookAnimation");
static_assert(offsetof(UGeometryCacheTrack_FlipbookAnimation, NumMeshSamples) == 0x000050, "Member 'UGeometryCacheTrack_FlipbookAnimation::NumMeshSamples' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x0050 (0x00A0 - 0x0050)
class UGeometryCacheTrack_TransformAnimation final : public UGeometryCacheTrack
{
public:
	uint8                                         Pad_50[0x50];                                      // 0x0050(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_TransformAnimation">();
	}
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_TransformAnimation>();
	}
};
static_assert(alignof(UGeometryCacheTrack_TransformAnimation) == 0x000008, "Wrong alignment on UGeometryCacheTrack_TransformAnimation");
static_assert(sizeof(UGeometryCacheTrack_TransformAnimation) == 0x0000A0, "Wrong size on UGeometryCacheTrack_TransformAnimation");

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x0050 (0x00A0 - 0x0050)
class UGeometryCacheTrack_TransformGroupAnimation final : public UGeometryCacheTrack
{
public:
	uint8                                         Pad_50[0x50];                                      // 0x0050(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_TransformGroupAnimation">();
	}
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_TransformGroupAnimation>();
	}
};
static_assert(alignof(UGeometryCacheTrack_TransformGroupAnimation) == 0x000008, "Wrong alignment on UGeometryCacheTrack_TransformGroupAnimation");
static_assert(sizeof(UGeometryCacheTrack_TransformGroupAnimation) == 0x0000A0, "Wrong size on UGeometryCacheTrack_TransformGroupAnimation");

}

