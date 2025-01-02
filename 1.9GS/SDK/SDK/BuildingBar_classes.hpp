#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildingBar

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BuildingBar.BuildingBar_C
// 0x0140 (0x0378 - 0x0238)
class UBuildingBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         _Horizontal_Box__Health_Stat_Text;                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__HP_Baseplate;                              // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__HP_Bar_Artwork;                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           _ProgressBar__HP_Delta;                            // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           _ProgressBar__HP_Fill;                             // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               _Size_Box__HP_Bar;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               _Size_Box__HP_Bevel;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageHPBevel;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherHPText;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBuildModeHPText;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextCurrentHealthStat;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextMaxHealthStat;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 TrapItemCard;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TrapNameTextBlock;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TrapUsesText;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           TrapVerticalBox;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Current_HP_Value;                                  // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_HP_Value;                                      // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Last_HP_Value;                                     // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           HP_FadeTimer;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         HP_FadeUpdateRate;                                 // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuildingInteraction                      DisplayMode;                                       // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Max_Durability_Value;                              // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Current_Durability_Value;                          // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Default_Baseplate_Color;                           // 0x02E8(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Alternate_Baseplate_Color;                         // 0x02F8(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Default_HP_Color_A;                                // 0x0308(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Default_HP_Color_B;                                // 0x0318(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Default_HP_Color_C;                                // 0x0328(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Alternate_HP_Color_A;                              // 0x0338(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Alternate_HP_Color_B;                              // 0x0348(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Alternate_HP_Color_C;                              // 0x0358(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Trap_Durability_Text;                         // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              TemporaryTrapInstance;                             // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BuildingBar(int32 EntryPoint);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void Update_Max_HP_Value(float Max);
	void Update_Current_HP_Value(float Current);
	void Update_HP_Fill_Bar();
	void Update_HP_Delta_Bar();
	void Update();
	void Set_Timer(bool Enabled);
	void Initialize_Bar();
	void Update_Max_Durability_Value(float Max);
	void Update_Current_Durability_Value(float CurrentDurability);
	void Update_Durability_Text();
	void Set_Display_Mode(EFortBuildingInteraction Display_Mode);
	void UpdateBuildingTrap(class ABuildingTrap* BuildingTrap);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuildingBar_C">();
	}
	static class UBuildingBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuildingBar_C>();
	}
};
static_assert(alignof(UBuildingBar_C) == 0x000008, "Wrong alignment on UBuildingBar_C");
static_assert(sizeof(UBuildingBar_C) == 0x000378, "Wrong size on UBuildingBar_C");
static_assert(offsetof(UBuildingBar_C, UberGraphFrame) == 0x000238, "Member 'UBuildingBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, _Horizontal_Box__Health_Stat_Text) == 0x000240, "Member 'UBuildingBar_C::_Horizontal_Box__Health_Stat_Text' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, _Image__HP_Baseplate) == 0x000248, "Member 'UBuildingBar_C::_Image__HP_Baseplate' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, _Overlay__HP_Bar_Artwork) == 0x000250, "Member 'UBuildingBar_C::_Overlay__HP_Bar_Artwork' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, _ProgressBar__HP_Delta) == 0x000258, "Member 'UBuildingBar_C::_ProgressBar__HP_Delta' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, _ProgressBar__HP_Fill) == 0x000260, "Member 'UBuildingBar_C::_ProgressBar__HP_Fill' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, _Size_Box__HP_Bar) == 0x000268, "Member 'UBuildingBar_C::_Size_Box__HP_Bar' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, _Size_Box__HP_Bevel) == 0x000270, "Member 'UBuildingBar_C::_Size_Box__HP_Bevel' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, ImageHPBevel) == 0x000278, "Member 'UBuildingBar_C::ImageHPBevel' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, SwitcherHPText) == 0x000280, "Member 'UBuildingBar_C::SwitcherHPText' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, TextBuildModeHPText) == 0x000288, "Member 'UBuildingBar_C::TextBuildModeHPText' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, TextCurrentHealthStat) == 0x000290, "Member 'UBuildingBar_C::TextCurrentHealthStat' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, TextMaxHealthStat) == 0x000298, "Member 'UBuildingBar_C::TextMaxHealthStat' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, TrapItemCard) == 0x0002A0, "Member 'UBuildingBar_C::TrapItemCard' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, TrapNameTextBlock) == 0x0002A8, "Member 'UBuildingBar_C::TrapNameTextBlock' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, TrapUsesText) == 0x0002B0, "Member 'UBuildingBar_C::TrapUsesText' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, TrapVerticalBox) == 0x0002B8, "Member 'UBuildingBar_C::TrapVerticalBox' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Current_HP_Value) == 0x0002C0, "Member 'UBuildingBar_C::Current_HP_Value' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Max_HP_Value) == 0x0002C4, "Member 'UBuildingBar_C::Max_HP_Value' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Last_HP_Value) == 0x0002C8, "Member 'UBuildingBar_C::Last_HP_Value' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, HP_FadeTimer) == 0x0002D0, "Member 'UBuildingBar_C::HP_FadeTimer' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, HP_FadeUpdateRate) == 0x0002D8, "Member 'UBuildingBar_C::HP_FadeUpdateRate' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, DisplayMode) == 0x0002DC, "Member 'UBuildingBar_C::DisplayMode' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Max_Durability_Value) == 0x0002E0, "Member 'UBuildingBar_C::Max_Durability_Value' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Current_Durability_Value) == 0x0002E4, "Member 'UBuildingBar_C::Current_Durability_Value' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Default_Baseplate_Color) == 0x0002E8, "Member 'UBuildingBar_C::Default_Baseplate_Color' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Alternate_Baseplate_Color) == 0x0002F8, "Member 'UBuildingBar_C::Alternate_Baseplate_Color' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Default_HP_Color_A) == 0x000308, "Member 'UBuildingBar_C::Default_HP_Color_A' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Default_HP_Color_B) == 0x000318, "Member 'UBuildingBar_C::Default_HP_Color_B' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Default_HP_Color_C) == 0x000328, "Member 'UBuildingBar_C::Default_HP_Color_C' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Alternate_HP_Color_A) == 0x000338, "Member 'UBuildingBar_C::Alternate_HP_Color_A' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Alternate_HP_Color_B) == 0x000348, "Member 'UBuildingBar_C::Alternate_HP_Color_B' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Alternate_HP_Color_C) == 0x000358, "Member 'UBuildingBar_C::Alternate_HP_Color_C' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, Show_Trap_Durability_Text) == 0x000368, "Member 'UBuildingBar_C::Show_Trap_Durability_Text' has a wrong offset!");
static_assert(offsetof(UBuildingBar_C, TemporaryTrapInstance) == 0x000370, "Member 'UBuildingBar_C::TemporaryTrapInstance' has a wrong offset!");

}

