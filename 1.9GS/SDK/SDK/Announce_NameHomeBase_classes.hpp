#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_NameHomeBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Announce_TutorialConversation_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_NameHomeBase.Announce_NameHomeBase_C
// 0x0008 (0x05D0 - 0x05C8)
class AAnnounce_NameHomeBase_C final : public AAnnounce_TutorialConversation_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Announce_NameHomeBase_C;            // 0x05C8(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Announce_NameHomeBase(int32 EntryPoint);
	void HandleSentenceStop_UI(int32 SentenceIdx);
	void HandleSentenceStart_UI(int32 SentenceIdx);
	void InitAnnouncement();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_NameHomeBase_C">();
	}
	static class AAnnounce_NameHomeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_NameHomeBase_C>();
	}
};
static_assert(alignof(AAnnounce_NameHomeBase_C) == 0x000008, "Wrong alignment on AAnnounce_NameHomeBase_C");
static_assert(sizeof(AAnnounce_NameHomeBase_C) == 0x0005D0, "Wrong size on AAnnounce_NameHomeBase_C");
static_assert(offsetof(AAnnounce_NameHomeBase_C, UberGraphFrame_Announce_NameHomeBase_C) == 0x0005C8, "Member 'AAnnounce_NameHomeBase_C::UberGraphFrame_Announce_NameHomeBase_C' has a wrong offset!");

}

