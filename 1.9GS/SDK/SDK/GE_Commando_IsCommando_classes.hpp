#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Commando_IsCommando

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Commando_IsCommando.GE_Commando_IsCommando_C
// 0x0000 (0x0660 - 0x0660)
class UGE_Commando_IsCommando_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Commando_IsCommando_C">();
	}
	static class UGE_Commando_IsCommando_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Commando_IsCommando_C>();
	}
};
static_assert(alignof(UGE_Commando_IsCommando_C) == 0x000010, "Wrong alignment on UGE_Commando_IsCommando_C");
static_assert(sizeof(UGE_Commando_IsCommando_C) == 0x000660, "Wrong size on UGE_Commando_IsCommando_C");

}

