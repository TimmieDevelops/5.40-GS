#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionVehicleTileItemWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C
// 0x0038 (0x08E8 - 0x08B0)
class UBP_FortExpeditionVehicleTileItemWidget_C final : public UFortExpeditionVehicleTileItemWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08B0(0x0008)(Transient, DuplicateTransient)
	class UBasicRatingWidget_C*                   BasicRatingWidget;                                 // 0x08B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Name_0;                                            // 0x08C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VehicleIcon;                                       // 0x08C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   SquadIdName;                                       // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnVehicleSelected;                                 // 0x08D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget(int32 EntryPoint);
	void OnClicked();
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Set_Icon(const class FName& SquadId_0);
	void Set_Rating(const class FName& SquadId_0);
	void Set_Name(const class FName SquadId_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionVehicleTileItemWidget_C">();
	}
	static class UBP_FortExpeditionVehicleTileItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionVehicleTileItemWidget_C>();
	}
};
static_assert(alignof(UBP_FortExpeditionVehicleTileItemWidget_C) == 0x000008, "Wrong alignment on UBP_FortExpeditionVehicleTileItemWidget_C");
static_assert(sizeof(UBP_FortExpeditionVehicleTileItemWidget_C) == 0x0008E8, "Wrong size on UBP_FortExpeditionVehicleTileItemWidget_C");
static_assert(offsetof(UBP_FortExpeditionVehicleTileItemWidget_C, UberGraphFrame) == 0x0008B0, "Member 'UBP_FortExpeditionVehicleTileItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionVehicleTileItemWidget_C, BasicRatingWidget) == 0x0008B8, "Member 'UBP_FortExpeditionVehicleTileItemWidget_C::BasicRatingWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionVehicleTileItemWidget_C, Name_0) == 0x0008C0, "Member 'UBP_FortExpeditionVehicleTileItemWidget_C::Name_0' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionVehicleTileItemWidget_C, VehicleIcon) == 0x0008C8, "Member 'UBP_FortExpeditionVehicleTileItemWidget_C::VehicleIcon' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionVehicleTileItemWidget_C, SquadIdName) == 0x0008D0, "Member 'UBP_FortExpeditionVehicleTileItemWidget_C::SquadIdName' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionVehicleTileItemWidget_C, OnVehicleSelected) == 0x0008D8, "Member 'UBP_FortExpeditionVehicleTileItemWidget_C::OnVehicleSelected' has a wrong offset!");

}

