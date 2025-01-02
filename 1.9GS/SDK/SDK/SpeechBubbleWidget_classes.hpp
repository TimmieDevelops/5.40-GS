#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpeechBubbleWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpeechBubbleWidget.SpeechBubbleWidget_C
// 0x0010 (0x0240 - 0x0230)
class USpeechBubbleWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       BubbleText;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SpeechBubbleWidget(int32 EntryPoint);
	void InitFromObject(class UObject* InitObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpeechBubbleWidget_C">();
	}
	static class USpeechBubbleWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpeechBubbleWidget_C>();
	}
};
static_assert(alignof(USpeechBubbleWidget_C) == 0x000008, "Wrong alignment on USpeechBubbleWidget_C");
static_assert(sizeof(USpeechBubbleWidget_C) == 0x000240, "Wrong size on USpeechBubbleWidget_C");
static_assert(offsetof(USpeechBubbleWidget_C, UberGraphFrame) == 0x000230, "Member 'USpeechBubbleWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpeechBubbleWidget_C, BubbleText) == 0x000238, "Member 'USpeechBubbleWidget_C::BubbleText' has a wrong offset!");

}

