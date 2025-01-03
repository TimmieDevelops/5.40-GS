#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Node

#include "Basic.hpp"


namespace SDK::Params
{

// Function Node.Node_C.ExecuteUbergraph_Node
// 0x0008 (0x0008 - 0x0000)
struct Node_C_ExecuteUbergraph_Node final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Node_C_ExecuteUbergraph_Node) == 0x000004, "Wrong alignment on Node_C_ExecuteUbergraph_Node");
static_assert(sizeof(Node_C_ExecuteUbergraph_Node) == 0x000008, "Wrong size on Node_C_ExecuteUbergraph_Node");
static_assert(offsetof(Node_C_ExecuteUbergraph_Node, EntryPoint) == 0x000000, "Member 'Node_C_ExecuteUbergraph_Node::EntryPoint' has a wrong offset!");
static_assert(offsetof(Node_C_ExecuteUbergraph_Node, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Node_C_ExecuteUbergraph_Node::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function Node.Node_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Node_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Node_C_PreConstruct) == 0x000001, "Wrong alignment on Node_C_PreConstruct");
static_assert(sizeof(Node_C_PreConstruct) == 0x000001, "Wrong size on Node_C_PreConstruct");
static_assert(offsetof(Node_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Node_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Node.Node_C.SetHighContrastMode
// 0x0001 (0x0001 - 0x0000)
struct Node_C_SetHighContrastMode final
{
public:
	bool                                          ActivateHighContrast;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Node_C_SetHighContrastMode) == 0x000001, "Wrong alignment on Node_C_SetHighContrastMode");
static_assert(sizeof(Node_C_SetHighContrastMode) == 0x000001, "Wrong size on Node_C_SetHighContrastMode");
static_assert(offsetof(Node_C_SetHighContrastMode, ActivateHighContrast) == 0x000000, "Member 'Node_C_SetHighContrastMode::ActivateHighContrast' has a wrong offset!");

}

