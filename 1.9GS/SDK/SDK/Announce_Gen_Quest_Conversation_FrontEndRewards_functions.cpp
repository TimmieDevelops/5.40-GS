#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_Gen_Quest_Conversation_FrontEndRewards

#include "Basic.hpp"

#include "Announce_Gen_Quest_Conversation_FrontEndRewards_classes.hpp"
#include "Announce_Gen_Quest_Conversation_FrontEndRewards_parameters.hpp"


namespace SDK
{

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards");

	Params::Announce_Gen_Quest_Conversation_FrontEndRewards_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnSentenceStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence        Sentence                                               (ConstParm, Parm, OutParm, ReferenceParm)
// int32                                   SentenceIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnSentenceStarted(const struct FFortConversationSentence& Sentence, int32 SentenceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnSentenceStarted");

	Params::Announce_Gen_Quest_Conversation_FrontEndRewards_C_OnSentenceStarted Parms{};

	Parms.Sentence = std::move(Sentence);
	Parms.SentenceIndex = SentenceIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence        FinishingSentence                                      (Parm)
// int32                                   FinishingSentenceSentenceIndex                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnConversationFinished");

	Params::Announce_Gen_Quest_Conversation_FrontEndRewards_C_OnConversationFinished Parms{};

	Parms.FinishingSentence = std::move(FinishingSentence);
	Parms.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.PlayCurrentConversation
// (Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::PlayCurrentConversation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "PlayCurrentConversation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.StopCurrentConversation
// (Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::StopCurrentConversation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "StopCurrentConversation");

	UObject::ProcessEvent(Func, nullptr);
}

}

