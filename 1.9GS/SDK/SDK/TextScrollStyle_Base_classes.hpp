#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextScrollStyle_Base

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TextScrollStyle-Base.TextScrollStyle-Base_C
// 0x0000 (0x0040 - 0x0040)
class UTextScrollStyle_Base_C final : public UCommonTextScrollStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextScrollStyle-Base_C">();
	}
	static class UTextScrollStyle_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextScrollStyle_Base_C>();
	}
};
static_assert(alignof(UTextScrollStyle_Base_C) == 0x000008, "Wrong alignment on UTextScrollStyle_Base_C");
static_assert(sizeof(UTextScrollStyle_Base_C) == 0x000040, "Wrong size on UTextScrollStyle_Base_C");

}
