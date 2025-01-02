#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompendiumProgressWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CompendiumProgressWidget.CompendiumProgressWidget_C
// 0x0038 (0x0270 - 0x0238)
class UCompendiumProgressWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          BorderXPBar;                                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Check;                                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        CompletionSwitcher;                                // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ProgressValue;                                     // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XpBar;                                             // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowText;                                          // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowBar;                                           // 0x0269(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CompendiumProgressWidget(int32 EntryPoint);
	void Construct();
	void Update(int32 Required, int32 Achieved);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CompendiumProgressWidget_C">();
	}
	static class UCompendiumProgressWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompendiumProgressWidget_C>();
	}
};
static_assert(alignof(UCompendiumProgressWidget_C) == 0x000008, "Wrong alignment on UCompendiumProgressWidget_C");
static_assert(sizeof(UCompendiumProgressWidget_C) == 0x000270, "Wrong size on UCompendiumProgressWidget_C");
static_assert(offsetof(UCompendiumProgressWidget_C, UberGraphFrame) == 0x000238, "Member 'UCompendiumProgressWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCompendiumProgressWidget_C, BorderXPBar) == 0x000240, "Member 'UCompendiumProgressWidget_C::BorderXPBar' has a wrong offset!");
static_assert(offsetof(UCompendiumProgressWidget_C, Check) == 0x000248, "Member 'UCompendiumProgressWidget_C::Check' has a wrong offset!");
static_assert(offsetof(UCompendiumProgressWidget_C, CompletionSwitcher) == 0x000250, "Member 'UCompendiumProgressWidget_C::CompletionSwitcher' has a wrong offset!");
static_assert(offsetof(UCompendiumProgressWidget_C, ProgressValue) == 0x000258, "Member 'UCompendiumProgressWidget_C::ProgressValue' has a wrong offset!");
static_assert(offsetof(UCompendiumProgressWidget_C, XpBar) == 0x000260, "Member 'UCompendiumProgressWidget_C::XpBar' has a wrong offset!");
static_assert(offsetof(UCompendiumProgressWidget_C, ShowText) == 0x000268, "Member 'UCompendiumProgressWidget_C::ShowText' has a wrong offset!");
static_assert(offsetof(UCompendiumProgressWidget_C, ShowBar) == 0x000269, "Member 'UCompendiumProgressWidget_C::ShowBar' has a wrong offset!");

}

