#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaderboardHeaderRowWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C
// 0x0020 (0x0258 - 0x0238)
class ULeaderboardHeaderRowWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      Rank;                                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      StatName;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      User;                                              // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LeaderboardHeaderRowWidget(int32 EntryPoint);
	void Construct();
	void SetStatNameText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeaderboardHeaderRowWidget_C">();
	}
	static class ULeaderboardHeaderRowWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeaderboardHeaderRowWidget_C>();
	}
};
static_assert(alignof(ULeaderboardHeaderRowWidget_C) == 0x000008, "Wrong alignment on ULeaderboardHeaderRowWidget_C");
static_assert(sizeof(ULeaderboardHeaderRowWidget_C) == 0x000258, "Wrong size on ULeaderboardHeaderRowWidget_C");
static_assert(offsetof(ULeaderboardHeaderRowWidget_C, UberGraphFrame) == 0x000238, "Member 'ULeaderboardHeaderRowWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeaderboardHeaderRowWidget_C, Rank) == 0x000240, "Member 'ULeaderboardHeaderRowWidget_C::Rank' has a wrong offset!");
static_assert(offsetof(ULeaderboardHeaderRowWidget_C, StatName) == 0x000248, "Member 'ULeaderboardHeaderRowWidget_C::StatName' has a wrong offset!");
static_assert(offsetof(ULeaderboardHeaderRowWidget_C, User) == 0x000250, "Member 'ULeaderboardHeaderRowWidget_C::User' has a wrong offset!");

}

