#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IconAndNameWidget

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconAndNameWidget.IconAndNameWidget_C
// 0x00F0 (0x0328 - 0x0238)
class UIconAndNameWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_0;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Matched;                                           // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Name_0;                                            // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            Brush;                                             // 0x0260(0x0090)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Text;                                              // 0x02F0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                 BorderStyle;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bBorderVisible;                                    // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bMatches;                                          // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bBorderColorOverride;                              // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_313[0x1];                                      // 0x0313(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           RGBA0;                                             // 0x0314(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_IconAndNameWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Setup_Border();
	void Setup_Text();
	void Set_Border_Color(const struct FLinearColor& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconAndNameWidget_C">();
	}
	static class UIconAndNameWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconAndNameWidget_C>();
	}
};
static_assert(alignof(UIconAndNameWidget_C) == 0x000008, "Wrong alignment on UIconAndNameWidget_C");
static_assert(sizeof(UIconAndNameWidget_C) == 0x000328, "Wrong size on UIconAndNameWidget_C");
static_assert(offsetof(UIconAndNameWidget_C, UberGraphFrame) == 0x000238, "Member 'UIconAndNameWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, CommonBorder_0) == 0x000240, "Member 'UIconAndNameWidget_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, Icon) == 0x000248, "Member 'UIconAndNameWidget_C::Icon' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, Matched) == 0x000250, "Member 'UIconAndNameWidget_C::Matched' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, Name_0) == 0x000258, "Member 'UIconAndNameWidget_C::Name_0' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, Brush) == 0x000260, "Member 'UIconAndNameWidget_C::Brush' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, Text) == 0x0002F0, "Member 'UIconAndNameWidget_C::Text' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, BorderStyle) == 0x000308, "Member 'UIconAndNameWidget_C::BorderStyle' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, bBorderVisible) == 0x000310, "Member 'UIconAndNameWidget_C::bBorderVisible' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, bMatches) == 0x000311, "Member 'UIconAndNameWidget_C::bMatches' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, bBorderColorOverride) == 0x000312, "Member 'UIconAndNameWidget_C::bBorderColorOverride' has a wrong offset!");
static_assert(offsetof(UIconAndNameWidget_C, RGBA0) == 0x000314, "Member 'UIconAndNameWidget_C::RGBA0' has a wrong offset!");

}

