#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextStyle_BaseParent

#include "Basic.hpp"

#include "TextStyle_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TextStyle-BaseParent.TextStyle-BaseParent_C
// 0x0000 (0x00D0 - 0x00D0)
class UTextStyle_BaseParent_C : public UTextStyle_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-BaseParent_C">();
	}
	static class UTextStyle_BaseParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_BaseParent_C>();
	}
};
static_assert(alignof(UTextStyle_BaseParent_C) == 0x000008, "Wrong alignment on UTextStyle_BaseParent_C");
static_assert(sizeof(UTextStyle_BaseParent_C) == 0x0000D0, "Wrong size on UTextStyle_BaseParent_C");

}

