#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_PinHard

#include "Basic.hpp"

#include "WM_Pin_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WM_PinHard.WM_PinHard_C
// 0x0000 (0x04B8 - 0x04B8)
class AWM_PinHard_C final : public AWM_Pin_Master_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WM_PinHard_C">();
	}
	static class AWM_PinHard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWM_PinHard_C>();
	}
};
static_assert(alignof(AWM_PinHard_C) == 0x000008, "Wrong alignment on AWM_PinHard_C");
static_assert(sizeof(AWM_PinHard_C) == 0x0004B8, "Wrong size on AWM_PinHard_C");

}

