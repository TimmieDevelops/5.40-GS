#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Map_Athena_Vitality_Health

#include "Basic.hpp"

#include "GE_Map_Fortitude_To_Health_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Map_Athena_Vitality_Health.GE_Map_Athena_Vitality_Health_C
// 0x0000 (0x0660 - 0x0660)
class UGE_Map_Athena_Vitality_Health_C final : public UGE_Map_Fortitude_To_Health_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Map_Athena_Vitality_Health_C">();
	}
	static class UGE_Map_Athena_Vitality_Health_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Map_Athena_Vitality_Health_C>();
	}
};
static_assert(alignof(UGE_Map_Athena_Vitality_Health_C) == 0x000010, "Wrong alignment on UGE_Map_Athena_Vitality_Health_C");
static_assert(sizeof(UGE_Map_Athena_Vitality_Health_C) == 0x000660, "Wrong size on UGE_Map_Athena_Vitality_Health_C");

}

