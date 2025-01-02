#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CombatManager

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CombatManager.CombatManager_C
// 0x0008 (0x0C08 - 0x0C00)
class ACombatManager_C final : public AFortCombatManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0C00(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CombatManager_C">();
	}
	static class ACombatManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACombatManager_C>();
	}
};
static_assert(alignof(ACombatManager_C) == 0x000008, "Wrong alignment on ACombatManager_C");
static_assert(sizeof(ACombatManager_C) == 0x000C08, "Wrong size on ACombatManager_C");
static_assert(offsetof(ACombatManager_C, DefaultSceneRoot) == 0x000C00, "Member 'ACombatManager_C::DefaultSceneRoot' has a wrong offset!");

}
