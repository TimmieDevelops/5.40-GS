#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNS_TestAntiMaterial

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNS_TestAntiMaterial.GCNS_TestAntiMaterial_C
// 0x0000 (0x0070 - 0x0070)
class UGCNS_TestAntiMaterial_C final : public UFortGameplayCueNotify_Simple
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNS_TestAntiMaterial_C">();
	}
	static class UGCNS_TestAntiMaterial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCNS_TestAntiMaterial_C>();
	}
};
static_assert(alignof(UGCNS_TestAntiMaterial_C) == 0x000008, "Wrong alignment on UGCNS_TestAntiMaterial_C");
static_assert(sizeof(UGCNS_TestAntiMaterial_C) == 0x000070, "Wrong size on UGCNS_TestAntiMaterial_C");

}
