#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieWidget

#include "Basic.hpp"

#include "MovieWidget_classes.hpp"
#include "MovieWidget_parameters.hpp"


namespace SDK
{

// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovieWidget_C::ExecuteUbergraph_MovieWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "ExecuteUbergraph_MovieWidget");

	Params::MovieWidget_C_ExecuteUbergraph_MovieWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieWidget.MovieWidget_C.OnMediaLoaded
// (BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::OnMediaLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "OnMediaLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   NewWidth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewHeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovieWidget_C::MediaDimensionsUpdated(float NewWidth, float NewHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "MediaDimensionsUpdated");

	Params::MovieWidget_C_MediaDimensionsUpdated Parms{};

	Parms.NewWidth = NewWidth;
	Parms.NewHeight = NewHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieWidget.MovieWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMovieWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieWidget.MovieWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*                     InMediaSource                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaSoundWave*                  InMediaSoundWave                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovieWidget_C::Init(class UMediaSource* InMediaSource, class UMediaSoundWave* InMediaSoundWave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "Init");

	Params::MovieWidget_C_Init Parms{};

	Parms.InMediaSource = InMediaSource;
	Parms.InMediaSoundWave = InMediaSoundWave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieWidget.MovieWidget_C.StopPlaying
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::StopPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "StopPlaying");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieWidget.MovieWidget_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldRewind                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMovieWidget_C::Play(bool ShouldRewind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "Play");

	Params::MovieWidget_C_Play Parms{};

	Parms.ShouldRewind = ShouldRewind;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieWidget.MovieWidget_C.SetDelayedContentValues
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::SetDelayedContentValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieWidget_C", "SetDelayedContentValues");

	UObject::ProcessEvent(Func, nullptr);
}

}
