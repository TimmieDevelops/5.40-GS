#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSessionId

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSessionId.AthenaSessionId_C
// 0x0010 (0x0270 - 0x0260)
class UAthenaSessionId_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             Text;                                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaSessionId(int32 EntryPoint);
	void Construct();
	void UpdateSessionId();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSessionId_C">();
	}
	static class UAthenaSessionId_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSessionId_C>();
	}
};
static_assert(alignof(UAthenaSessionId_C) == 0x000008, "Wrong alignment on UAthenaSessionId_C");
static_assert(sizeof(UAthenaSessionId_C) == 0x000270, "Wrong size on UAthenaSessionId_C");
static_assert(offsetof(UAthenaSessionId_C, UberGraphFrame) == 0x000260, "Member 'UAthenaSessionId_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSessionId_C, Text) == 0x000268, "Member 'UAthenaSessionId_C::Text' has a wrong offset!");

}

