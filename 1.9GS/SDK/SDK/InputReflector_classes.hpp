#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputReflector

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InputReflector.InputReflector_C
// 0x0020 (0x0288 - 0x0268)
class UInputReflector_C final : public UCommonInputReflector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         ButtonBox;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                DefaultButtonMargin;                               // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_InputReflector(int32 EntryPoint);
	void Construct();
	void ClearButtons();
	void OnButtonAdded(class UCommonButton* AddedButton, const struct FCommonInputActionHandlerData& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InputReflector_C">();
	}
	static class UInputReflector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputReflector_C>();
	}
};
static_assert(alignof(UInputReflector_C) == 0x000008, "Wrong alignment on UInputReflector_C");
static_assert(sizeof(UInputReflector_C) == 0x000288, "Wrong size on UInputReflector_C");
static_assert(offsetof(UInputReflector_C, UberGraphFrame) == 0x000268, "Member 'UInputReflector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInputReflector_C, ButtonBox) == 0x000270, "Member 'UInputReflector_C::ButtonBox' has a wrong offset!");
static_assert(offsetof(UInputReflector_C, DefaultButtonMargin) == 0x000278, "Member 'UInputReflector_C::DefaultButtonMargin' has a wrong offset!");

}
