#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyle_LeftDark

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyle-LeftDark.ButtonStyle-LeftDark_C
// 0x0000 (0x0530 - 0x0530)
class UButtonStyle_LeftDark_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-LeftDark_C">();
	}
	static class UButtonStyle_LeftDark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_LeftDark_C>();
	}
};
static_assert(alignof(UButtonStyle_LeftDark_C) == 0x000008, "Wrong alignment on UButtonStyle_LeftDark_C");
static_assert(sizeof(UButtonStyle_LeftDark_C) == 0x000530, "Wrong size on UButtonStyle_LeftDark_C");

}
