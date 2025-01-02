#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JournalObjectiveEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry
// 0x0040 (0x0040 - 0x0000)
struct JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                K2Node_Event_InData;                               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*                K2Node_DynamicCast_AsFort_Quest_Objective_Info;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry) == 0x000008, "Wrong alignment on JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry");
static_assert(sizeof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry) == 0x000040, "Wrong size on JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry");
static_assert(offsetof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry, EntryPoint) == 0x000000, "Member 'JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry, K2Node_Event_InData) == 0x000018, "Member 'JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry, K2Node_DynamicCast_AsFort_Quest_Objective_Info) == 0x000020, "Member 'JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry::K2Node_DynamicCast_AsFort_Quest_Objective_Info' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry, CallFunc_GetQuestManager_ReturnValue) == 0x000038, "Member 'JournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct JournalObjectiveEntry_C_SetData final
{
public:
	class UObject*                                InData;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JournalObjectiveEntry_C_SetData) == 0x000008, "Wrong alignment on JournalObjectiveEntry_C_SetData");
static_assert(sizeof(JournalObjectiveEntry_C_SetData) == 0x000008, "Wrong size on JournalObjectiveEntry_C_SetData");
static_assert(offsetof(JournalObjectiveEntry_C_SetData, InData) == 0x000000, "Member 'JournalObjectiveEntry_C_SetData::InData' has a wrong offset!");

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress
// 0x0008 (0x0008 - 0x0000)
struct JournalObjectiveEntry_C_UpdateProgress final
{
public:
	class UFortQuestObjectiveInfo*                Objective_0;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JournalObjectiveEntry_C_UpdateProgress) == 0x000008, "Wrong alignment on JournalObjectiveEntry_C_UpdateProgress");
static_assert(sizeof(JournalObjectiveEntry_C_UpdateProgress) == 0x000008, "Wrong size on JournalObjectiveEntry_C_UpdateProgress");
static_assert(offsetof(JournalObjectiveEntry_C_UpdateProgress, Objective_0) == 0x000000, "Member 'JournalObjectiveEntry_C_UpdateProgress::Objective_0' has a wrong offset!");

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update
// 0x0038 (0x0038 - 0x0000)
struct JournalObjectiveEntry_C_Update final
{
public:
	class UFortQuestObjectiveInfo*                Objective_0;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContext_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCombinedDescription_OutDescription;    // 0x0018(0x0018)()
	bool                                          CallFunc_GetCombinedDescription_ReturnValue;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(JournalObjectiveEntry_C_Update) == 0x000008, "Wrong alignment on JournalObjectiveEntry_C_Update");
static_assert(sizeof(JournalObjectiveEntry_C_Update) == 0x000038, "Wrong size on JournalObjectiveEntry_C_Update");
static_assert(offsetof(JournalObjectiveEntry_C_Update, Objective_0) == 0x000000, "Member 'JournalObjectiveEntry_C_Update::Objective_0' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_Update, CallFunc_SpawnTooltipContext_ReturnValue) == 0x000008, "Member 'JournalObjectiveEntry_C_Update::CallFunc_SpawnTooltipContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_Update, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'JournalObjectiveEntry_C_Update::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_Update, CallFunc_GetCombinedDescription_OutDescription) == 0x000018, "Member 'JournalObjectiveEntry_C_Update::CallFunc_GetCombinedDescription_OutDescription' has a wrong offset!");
static_assert(offsetof(JournalObjectiveEntry_C_Update, CallFunc_GetCombinedDescription_ReturnValue) == 0x000030, "Member 'JournalObjectiveEntry_C_Update::CallFunc_GetCombinedDescription_ReturnValue' has a wrong offset!");

}
