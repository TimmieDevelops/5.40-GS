#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Border_TabM

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Border-TabM.Border-TabM_C
// 0x0000 (0x00B8 - 0x00B8)
class UBorder_TabM_C : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-TabM_C">();
	}
	static class UBorder_TabM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_TabM_C>();
	}
};
static_assert(alignof(UBorder_TabM_C) == 0x000008, "Wrong alignment on UBorder_TabM_C");
static_assert(sizeof(UBorder_TabM_C) == 0x0000B8, "Wrong size on UBorder_TabM_C");

}
