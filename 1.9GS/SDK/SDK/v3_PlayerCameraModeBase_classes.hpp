#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: v3_PlayerCameraModeBase

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass v3_PlayerCameraModeBase.v3_PlayerCameraModeBase_C
// 0x0000 (0x0110 - 0x0110)
class Uv3_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"v3_PlayerCameraModeBase_C">();
	}
	static class Uv3_PlayerCameraModeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Uv3_PlayerCameraModeBase_C>();
	}
};
static_assert(alignof(Uv3_PlayerCameraModeBase_C) == 0x000008, "Wrong alignment on Uv3_PlayerCameraModeBase_C");
static_assert(sizeof(Uv3_PlayerCameraModeBase_C) == 0x000110, "Wrong size on Uv3_PlayerCameraModeBase_C");

}

