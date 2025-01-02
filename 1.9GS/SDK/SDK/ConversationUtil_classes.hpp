#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConversationUtil

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConversationUtil.ConversationUtil_C
// 0x0008 (0x0248 - 0x0240)
class UConversationUtil_C final : public UFortJournalQuestDetails
{
public:
	class UFortConversation*                      Conversation;                                      // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void StartConversation(class UFortConversation* Conversation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConversationUtil_C">();
	}
	static class UConversationUtil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationUtil_C>();
	}
};
static_assert(alignof(UConversationUtil_C) == 0x000008, "Wrong alignment on UConversationUtil_C");
static_assert(sizeof(UConversationUtil_C) == 0x000248, "Wrong size on UConversationUtil_C");
static_assert(offsetof(UConversationUtil_C, Conversation) == 0x000240, "Member 'UConversationUtil_C::Conversation' has a wrong offset!");

}

