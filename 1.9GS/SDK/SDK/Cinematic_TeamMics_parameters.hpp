#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cinematic_TeamMics

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics
// 0x0004 (0x0004 - 0x0000)
struct Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics) == 0x000004, "Wrong alignment on Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics");
static_assert(sizeof(Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics) == 0x000004, "Wrong size on Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics");
static_assert(offsetof(Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics, EntryPoint) == 0x000000, "Member 'Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics::EntryPoint' has a wrong offset!");

// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update
// 0x01E0 (0x01E0 - 0x0000)
struct Cinematic_TeamMics_C_Update final
{
public:
	struct FFortTeamMemberInfo                    UpdatedMemberInfo;                                 // 0x0000(0x0190)(Parm)
	struct FUniqueNetIdRepl                       PlayerNetId;                                       // 0x0190(0x0018)(Edit, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x01AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable3;                               // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1AD[0x3];                                      // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BA[0x2];                                      // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select2_Default;                            // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidNetID_ReturnValue;                 // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       K2Node_Select3_Default;                            // 0x01C8(0x0018)(ConstParm, HasGetValueTypeHash)
};
static_assert(alignof(Cinematic_TeamMics_C_Update) == 0x000008, "Wrong alignment on Cinematic_TeamMics_C_Update");
static_assert(sizeof(Cinematic_TeamMics_C_Update) == 0x0001E0, "Wrong size on Cinematic_TeamMics_C_Update");
static_assert(offsetof(Cinematic_TeamMics_C_Update, UpdatedMemberInfo) == 0x000000, "Member 'Cinematic_TeamMics_C_Update::UpdatedMemberInfo' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, PlayerNetId) == 0x000190, "Member 'Cinematic_TeamMics_C_Update::PlayerNetId' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_bool_Variable) == 0x0001A8, "Member 'Cinematic_TeamMics_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_bool_Variable2) == 0x0001A9, "Member 'Cinematic_TeamMics_C_Update::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_byte_Variable) == 0x0001AA, "Member 'Cinematic_TeamMics_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_byte_Variable2) == 0x0001AB, "Member 'Cinematic_TeamMics_C_Update::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_bool_Variable3) == 0x0001AC, "Member 'Cinematic_TeamMics_C_Update::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_int_Variable) == 0x0001B0, "Member 'Cinematic_TeamMics_C_Update::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_int_Variable2) == 0x0001B4, "Member 'Cinematic_TeamMics_C_Update::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, CallFunc_IsValid_ReturnValue) == 0x0001B8, "Member 'Cinematic_TeamMics_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, K2Node_Select_Default) == 0x0001B9, "Member 'Cinematic_TeamMics_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, K2Node_Select2_Default) == 0x0001BC, "Member 'Cinematic_TeamMics_C_Update::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, CallFunc_IsValidNetID_ReturnValue) == 0x0001C0, "Member 'Cinematic_TeamMics_C_Update::CallFunc_IsValidNetID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, K2Node_Select3_Default) == 0x0001C8, "Member 'Cinematic_TeamMics_C_Update::K2Node_Select3_Default' has a wrong offset!");

}
