#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Commando_IncendiaryRoundsDOT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C
// 0x0008 (0x0470 - 0x0468)
class AGCN_Commando_IncendiaryRoundsDOT_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0468(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT(int32 EntryPoint);
	void ReceiveDestroyed();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Commando_IncendiaryRoundsDOT_C">();
	}
	static class AGCN_Commando_IncendiaryRoundsDOT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Commando_IncendiaryRoundsDOT_C>();
	}
};
static_assert(alignof(AGCN_Commando_IncendiaryRoundsDOT_C) == 0x000008, "Wrong alignment on AGCN_Commando_IncendiaryRoundsDOT_C");
static_assert(sizeof(AGCN_Commando_IncendiaryRoundsDOT_C) == 0x000470, "Wrong size on AGCN_Commando_IncendiaryRoundsDOT_C");
static_assert(offsetof(AGCN_Commando_IncendiaryRoundsDOT_C, UberGraphFrame) == 0x000468, "Member 'AGCN_Commando_IncendiaryRoundsDOT_C::UberGraphFrame' has a wrong offset!");

}

