#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadMappingInfo

#include "Basic.hpp"

#include "GamepadMappingInfo_classes.hpp"
#include "GamepadMappingInfo_parameters.hpp"


namespace SDK
{

// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   platform                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Mode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Configuration                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::Update_Displayed_Mapping(int32 platform, int32 Mode, int32 Configuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadMappingInfo_C", "Update Displayed Mapping");

	Params::GamepadMappingInfo_C_Update_Displayed_Mapping Parms{};

	Parms.platform = platform;
	Parms.Mode = Mode;
	Parms.Configuration = Configuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Mode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Config                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::OnConfigChanged(int32 Mode, int32 Config)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadMappingInfo_C", "OnConfigChanged");

	Params::GamepadMappingInfo_C_OnConfigChanged Parms{};

	Parms.Mode = Mode;
	Parms.Config = Config;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Mode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Config                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::HandleConfigChanged_Athena(int32 Mode, int32 Config)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadMappingInfo_C", "HandleConfigChanged_Athena");

	Params::GamepadMappingInfo_C_HandleConfigChanged_Athena Parms{};

	Parms.Mode = Mode;
	Parms.Config = Config;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Mode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Config                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::HandleConfigChanged(int32 Mode, int32 Config)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadMappingInfo_C", "HandleConfigChanged");

	Params::GamepadMappingInfo_C_HandleConfigChanged Parms{};

	Parms.Mode = Mode;
	Parms.Config = Config;

	UObject::ProcessEvent(Func, &Parms);
}

}

