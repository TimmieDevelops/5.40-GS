#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Border_Empty

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Border-Empty.Border-Empty_C
// 0x0000 (0x00B8 - 0x00B8)
class UBorder_Empty_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-Empty_C">();
	}
	static class UBorder_Empty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_Empty_C>();
	}
};
static_assert(alignof(UBorder_Empty_C) == 0x000008, "Wrong alignment on UBorder_Empty_C");
static_assert(sizeof(UBorder_Empty_C) == 0x0000B8, "Wrong size on UBorder_Empty_C");

}

