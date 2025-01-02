#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lightbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lightbox.Lightbox_C
// 0x0050 (0x0280 - 0x0230)
class ULightbox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Content;                                           // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Dimmer;                                            // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   IntroEnded;                                        // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OutroEnded;                                        // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_Lightbox(int32 EntryPoint);
	void BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Destruct();
	void Intro();
	void Outro();
	void AddContent(class UCommonUserWidget* Content_0);
	void RemoveContent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lightbox_C">();
	}
	static class ULightbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightbox_C>();
	}
};
static_assert(alignof(ULightbox_C) == 0x000008, "Wrong alignment on ULightbox_C");
static_assert(sizeof(ULightbox_C) == 0x000280, "Wrong size on ULightbox_C");
static_assert(offsetof(ULightbox_C, UberGraphFrame) == 0x000230, "Member 'ULightbox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULightbox_C, FadeOut) == 0x000238, "Member 'ULightbox_C::FadeOut' has a wrong offset!");
static_assert(offsetof(ULightbox_C, FadeIn) == 0x000240, "Member 'ULightbox_C::FadeIn' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Content) == 0x000248, "Member 'ULightbox_C::Content' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Dimmer) == 0x000250, "Member 'ULightbox_C::Dimmer' has a wrong offset!");
static_assert(offsetof(ULightbox_C, SafeZone_0) == 0x000258, "Member 'ULightbox_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(ULightbox_C, IntroEnded) == 0x000260, "Member 'ULightbox_C::IntroEnded' has a wrong offset!");
static_assert(offsetof(ULightbox_C, OutroEnded) == 0x000270, "Member 'ULightbox_C::OutroEnded' has a wrong offset!");

}

