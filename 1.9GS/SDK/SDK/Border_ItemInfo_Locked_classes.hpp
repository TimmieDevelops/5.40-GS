#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Border_ItemInfo_Locked

#include "Basic.hpp"

#include "Border_ItemInfo_Unlocked_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Border-ItemInfo-Locked.Border-ItemInfo-Locked_C
// 0x0000 (0x00B8 - 0x00B8)
class UBorder_ItemInfo_Locked_C final : public UBorder_ItemInfo_Unlocked_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-ItemInfo-Locked_C">();
	}
	static class UBorder_ItemInfo_Locked_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_ItemInfo_Locked_C>();
	}
};
static_assert(alignof(UBorder_ItemInfo_Locked_C) == 0x000008, "Wrong alignment on UBorder_ItemInfo_Locked_C");
static_assert(sizeof(UBorder_ItemInfo_Locked_C) == 0x0000B8, "Wrong size on UBorder_ItemInfo_Locked_C");

}

