#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThrowingStarTest

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ThrowingStarTest.ThrowingStarTest_C
// 0x0000 (0x0040 - 0x0040)
class UThrowingStarTest_C final : public UGameplayCueNotify_Static
{
public:
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ThrowingStarTest_C">();
	}
	static class UThrowingStarTest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThrowingStarTest_C>();
	}
};
static_assert(alignof(UThrowingStarTest_C) == 0x000008, "Wrong alignment on UThrowingStarTest_C");
static_assert(sizeof(UThrowingStarTest_C) == 0x000040, "Wrong size on UThrowingStarTest_C");

}

