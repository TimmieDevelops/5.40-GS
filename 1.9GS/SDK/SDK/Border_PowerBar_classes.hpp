#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Border_PowerBar

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Border-PowerBar.Border-PowerBar_C
// 0x0000 (0x00B8 - 0x00B8)
class UBorder_PowerBar_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-PowerBar_C">();
	}
	static class UBorder_PowerBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_PowerBar_C>();
	}
};
static_assert(alignof(UBorder_PowerBar_C) == 0x000008, "Wrong alignment on UBorder_PowerBar_C");
static_assert(sizeof(UBorder_PowerBar_C) == 0x0000B8, "Wrong size on UBorder_PowerBar_C");

}

