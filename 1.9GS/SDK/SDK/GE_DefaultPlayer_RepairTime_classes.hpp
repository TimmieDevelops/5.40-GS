#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_DefaultPlayer_RepairTime

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_DefaultPlayer_RepairTime.GE_DefaultPlayer_RepairTime_C
// 0x0000 (0x0660 - 0x0660)
class UGE_DefaultPlayer_RepairTime_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_DefaultPlayer_RepairTime_C">();
	}
	static class UGE_DefaultPlayer_RepairTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_DefaultPlayer_RepairTime_C>();
	}
};
static_assert(alignof(UGE_DefaultPlayer_RepairTime_C) == 0x000010, "Wrong alignment on UGE_DefaultPlayer_RepairTime_C");
static_assert(sizeof(UGE_DefaultPlayer_RepairTime_C) == 0x000660, "Wrong size on UGE_DefaultPlayer_RepairTime_C");

}

