#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LegacyButtonStyle_Base

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LegacyButtonStyle-Base.LegacyButtonStyle-Base_C
// 0x0000 (0x1C08 - 0x1C08)
class ULegacyButtonStyle_Base_C : public UFortButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LegacyButtonStyle-Base_C">();
	}
	static class ULegacyButtonStyle_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyButtonStyle_Base_C>();
	}
};
static_assert(alignof(ULegacyButtonStyle_Base_C) == 0x000008, "Wrong alignment on ULegacyButtonStyle_Base_C");
static_assert(sizeof(ULegacyButtonStyle_Base_C) == 0x001C08, "Wrong size on ULegacyButtonStyle_Base_C");

}
