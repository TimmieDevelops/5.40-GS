#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSessionId

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaSessionId.AthenaSessionId_C.ExecuteUbergraph_AthenaSessionId
// 0x0004 (0x0004 - 0x0000)
struct AthenaSessionId_C_ExecuteUbergraph_AthenaSessionId final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaSessionId_C_ExecuteUbergraph_AthenaSessionId) == 0x000004, "Wrong alignment on AthenaSessionId_C_ExecuteUbergraph_AthenaSessionId");
static_assert(sizeof(AthenaSessionId_C_ExecuteUbergraph_AthenaSessionId) == 0x000004, "Wrong size on AthenaSessionId_C_ExecuteUbergraph_AthenaSessionId");
static_assert(offsetof(AthenaSessionId_C_ExecuteUbergraph_AthenaSessionId, EntryPoint) == 0x000000, "Member 'AthenaSessionId_C_ExecuteUbergraph_AthenaSessionId::EntryPoint' has a wrong offset!");

// Function AthenaSessionId.AthenaSessionId_C.UpdateSessionId
// 0x0030 (0x0030 - 0x0000)
struct AthenaSessionId_C_UpdateSessionId final
{
public:
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSessionId_ReturnValue;                 // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(AthenaSessionId_C_UpdateSessionId) == 0x000008, "Wrong alignment on AthenaSessionId_C_UpdateSessionId");
static_assert(sizeof(AthenaSessionId_C_UpdateSessionId) == 0x000030, "Wrong size on AthenaSessionId_C_UpdateSessionId");
static_assert(offsetof(AthenaSessionId_C_UpdateSessionId, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'AthenaSessionId_C_UpdateSessionId::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSessionId_C_UpdateSessionId, CallFunc_GetSessionId_ReturnValue) == 0x000008, "Member 'AthenaSessionId_C_UpdateSessionId::CallFunc_GetSessionId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSessionId_C_UpdateSessionId, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'AthenaSessionId_C_UpdateSessionId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
