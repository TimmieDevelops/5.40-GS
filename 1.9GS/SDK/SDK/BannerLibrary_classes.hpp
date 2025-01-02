#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BannerLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BannerLibrary.BannerLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBannerLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GenericUpdateMaterial(class UMaterialInstanceDynamic* Target, class UTexture* BannerIcon, const struct FLinearColor& BG_PrimaryColor, const struct FLinearColor& BG_SecondaryColor, class UTexture* ShapeIcon, class UObject* __WorldContext);
	static void UpdateBannerColorOnMaterial(class UMaterialInstanceDynamic* Material, const struct FLinearColor& PrimaryBGColor, const struct FLinearColor& SecondaryBGColor, class UObject* __WorldContext);
	static void UpdateBannerIconOnMaterial(class UMaterialInstanceDynamic* Material, class UTexture* Icon, class UObject* __WorldContext);
	static void UpdateBannerMeshMaterial_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, class AFortPlayerState* InstigatorPlayerState, class UObject* __WorldContext);
	static void UpdateMaterial_New(class UImage* Banner_material, const struct FFortHomeBaseInfo& Image_info, bool Is_Icon, class UObject* __WorldContext);
	static void Get_Icon_Texture_and_Colors(const class FString& BannerIconId, const class FString& BannerColorId, class UObject* __WorldContext, class UTexture2D** Icon, struct FLinearColor* PrimaryColor, struct FLinearColor* Secondary_Color);
	static void UpdateBannerMeshMaterialForUniqueId_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, const struct FUniqueNetIdRepl& UniqueId, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BannerLibrary_C">();
	}
	static class UBannerLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBannerLibrary_C>();
	}
};
static_assert(alignof(UBannerLibrary_C) == 0x000008, "Wrong alignment on UBannerLibrary_C");
static_assert(sizeof(UBannerLibrary_C) == 0x000028, "Wrong size on UBannerLibrary_C");

}

