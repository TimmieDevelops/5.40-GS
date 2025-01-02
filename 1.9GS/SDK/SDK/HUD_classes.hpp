#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD.HUD_C
// 0x0270 (0x0670 - 0x0400)
class UHUD_C final : public UFortUIStateWidget_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UFortActorCanvas*                       _Actor_Canvas__Indicators;                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         _Horizontal_Box__Top_Right_Content;                // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__Camera_Mode_Content;                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__Cursor_Mode_Content;                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               _Overlay__Persistent_HUD_Content;                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               _Size_Box__Bottom_Right_Content;                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             _Slot__CursorModeContent;                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        _Switcher__CursorModeContent;                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Radar;                                             // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        _Switcher__Mode_Content;                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           _Vertical_Box__Bottom_Left_Content;                // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           _Vertical_Box__Top_Left_Content;                   // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           _Vertical_Box__Top_Right_Content;                  // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActiveModifiersHUD_C*                  ActiveModifiersHUD;                                // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnnouncement_Layout_C*                 Announcement_Layout;                               // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBottomBarWidget_C*                     BottomBarWidget;                                   // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortLiveStreamGrantWindowExpires_C* BP_FortLiveStreamGrantWindowExpires;               // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWidget_C*                          ChatWidget;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftingBar_C*                         CraftingBar;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDeathWidget_C*                         DeathWidget;                                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquippedItemWidget_C*                  EquippedItemWidget;                                // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                       FortBangWrapper_0;                                 // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHordeWaveAlertWidget_C*                HordeWaveAlertWidget;                              // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_TeamInfo_C*                        HUD_TeamInfo;                                      // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxBottomLeft;                         // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxBottomRight;                        // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxCameraMode;                         // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxCenterPopup;                        // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxChat;                               // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxCursorMode;                         // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxDeathWidget;                        // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxHordeTierComplete;                  // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxPickupManager;                      // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxPlayerHitpointinfo;                 // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxPlayerInfo;                         // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxTopRight;                           // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBoxZoneComplete;                       // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULocalPlayerHitPointInfo_C*             LocalPlayerHitPointInfo;                           // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                     MainContentStack;                                  // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinimapContainer_C*                    MinimapContainer;                                  // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionTracker_C*                      MissionTracker;                                    // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayIndicatorContent;                           // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPickupManager_C*                       PickupManager;                                     // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPinnedSchematicItemsWidget_C*          PinnedSchematicItemsWidget;                        // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerInfo_C*                          PlayerInfo;                                        // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPopupCenterMessageWidget_C*            PopupCenterMessageWidget;                          // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestUpdatesLog_C*                     QuestUpdatesLog;                                   // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          QuickbarBorder;                                    // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickbarPrimary_C*                     QuickbarPrimary;                                   // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickbarSecondary_C*                   QuickbarSecondary;                                 // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPicker_C*                        RadialPicker;                                      // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResourceAggregationWidget_C*           ResourceAggregationWidget;                         // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReticle_C*                             Reticle;                                           // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReticleStatusWidget_C*                 ReticleStatusWidget;                               // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_1;                                        // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_2;                                        // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_3;                                        // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_4;                                        // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreBarsWidget_C*                     ScoreBarsWidget;                                   // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxPinnedSchematics;                           // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             SlotHordeTierComplete;                             // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             SlotZoneComplete;                                  // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitles_C*                           Subtitles;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherEndOfDayTalkingHead;                       // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTalkingHeadWidget_C*                   TalkingHeadWidget;                                 // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBar_C*                              TopBar;                                            // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxMissionWidgets;                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                      Widget_BuildWatermark;                             // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UZoneScoreWidget_C*                     ZoneScoreWidget;                                   // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortQuickBars                                FocusedQuickbar;                                   // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_641[0x3];                                      // 0x0641(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              UnfocusedQuickbarScale;                            // 0x0644(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CursorModeEnabled;                                 // 0x064C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ZoneCompleted;                                     // 0x064D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64E[0x2];                                      // 0x064E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInterestIndicatorWidget_C*>     AvailableInterestIndicators;                       // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInterestIndicatorWidget_C*>     ActiveInterestIndicators;                          // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_HUD(int32 EntryPoint);
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature();
	void BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature();
	void HandleInputMethodChanged(bool UsingGamepad);
	void Destruct();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void EndOfDayRecapEnded();
	void EndOfDayRecapStarted(const struct FEndOfDayRecap& EndOfDayRecap);
	void LoadingScreenChanged(bool bVisible);
	void Construct();
	void QuestsCompleted(const TArray<class UFortQuestItem*>& Quests);
	void OnEnterState(EFortUIState PreviousUIState);
	void OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A();
	void OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A();
	void HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget);
	void HandleQuickbarSlotFocusSlotChanged(EFortQuickBars Quickbar_Index, int32 Slot_0);
	void SetQuickbarSizes();
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void HandleZoneCompleted();
	void HandleKeybindsChanged();
	void OnPlayerTargetingChanged(bool IsTargeting);
	void SetGameMode();
	void SetCursorModeContent(class UUserWidget* CustomWidget, class FName& ActionName);
	void HandleIndicatorModeChanged(bool InidicatorsEnabled);
	void SetPersistentHUDContentVisibility(bool Visible);
	void ToggleChat(bool Show);
	void ToggleTopLevelMenu(bool Show);
	void HandleFocusChat();
	void HandleHordeTierComplete(EFortCompletionResult Result);
	void OnHordeTierCompleteWidgetFinished();
	void ShowPicker(EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept);
	void HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const class FText& DisplayText, class UTexture2D* DisplayImage);
	void HandleOnPointOfInterestRemoved(class AActor* PointOfInterest);
	void CreateInterestIndicatorWidget();
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	void OnManagementTabSelected(class FName TabName);
	void OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
	void CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_C">();
	}
	static class UHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_C>();
	}
};
static_assert(alignof(UHUD_C) == 0x000008, "Wrong alignment on UHUD_C");
static_assert(sizeof(UHUD_C) == 0x000670, "Wrong size on UHUD_C");
static_assert(offsetof(UHUD_C, UberGraphFrame) == 0x000400, "Member 'UHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Actor_Canvas__Indicators) == 0x000408, "Member 'UHUD_C::_Actor_Canvas__Indicators' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Horizontal_Box__Top_Right_Content) == 0x000410, "Member 'UHUD_C::_Horizontal_Box__Top_Right_Content' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Overlay__Camera_Mode_Content) == 0x000418, "Member 'UHUD_C::_Overlay__Camera_Mode_Content' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Overlay__Cursor_Mode_Content) == 0x000420, "Member 'UHUD_C::_Overlay__Cursor_Mode_Content' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Overlay__Persistent_HUD_Content) == 0x000428, "Member 'UHUD_C::_Overlay__Persistent_HUD_Content' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Size_Box__Bottom_Right_Content) == 0x000430, "Member 'UHUD_C::_Size_Box__Bottom_Right_Content' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Slot__CursorModeContent) == 0x000438, "Member 'UHUD_C::_Slot__CursorModeContent' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Switcher__CursorModeContent) == 0x000440, "Member 'UHUD_C::_Switcher__CursorModeContent' has a wrong offset!");
static_assert(offsetof(UHUD_C, Radar) == 0x000448, "Member 'UHUD_C::Radar' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Switcher__Mode_Content) == 0x000450, "Member 'UHUD_C::_Switcher__Mode_Content' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Vertical_Box__Bottom_Left_Content) == 0x000458, "Member 'UHUD_C::_Vertical_Box__Bottom_Left_Content' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Vertical_Box__Top_Left_Content) == 0x000460, "Member 'UHUD_C::_Vertical_Box__Top_Left_Content' has a wrong offset!");
static_assert(offsetof(UHUD_C, _Vertical_Box__Top_Right_Content) == 0x000468, "Member 'UHUD_C::_Vertical_Box__Top_Right_Content' has a wrong offset!");
static_assert(offsetof(UHUD_C, ActiveModifiersHUD) == 0x000470, "Member 'UHUD_C::ActiveModifiersHUD' has a wrong offset!");
static_assert(offsetof(UHUD_C, Announcement_Layout) == 0x000478, "Member 'UHUD_C::Announcement_Layout' has a wrong offset!");
static_assert(offsetof(UHUD_C, BottomBarWidget) == 0x000480, "Member 'UHUD_C::BottomBarWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, BP_FortLiveStreamGrantWindowExpires) == 0x000488, "Member 'UHUD_C::BP_FortLiveStreamGrantWindowExpires' has a wrong offset!");
static_assert(offsetof(UHUD_C, ChatWidget) == 0x000490, "Member 'UHUD_C::ChatWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, CraftingBar) == 0x000498, "Member 'UHUD_C::CraftingBar' has a wrong offset!");
static_assert(offsetof(UHUD_C, DeathWidget) == 0x0004A0, "Member 'UHUD_C::DeathWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, EquippedItemWidget) == 0x0004A8, "Member 'UHUD_C::EquippedItemWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, FortBangWrapper_0) == 0x0004B0, "Member 'UHUD_C::FortBangWrapper_0' has a wrong offset!");
static_assert(offsetof(UHUD_C, HordeWaveAlertWidget) == 0x0004B8, "Member 'UHUD_C::HordeWaveAlertWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, HUD_TeamInfo) == 0x0004C0, "Member 'UHUD_C::HUD_TeamInfo' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxBottomLeft) == 0x0004C8, "Member 'UHUD_C::InvalidationBoxBottomLeft' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxBottomRight) == 0x0004D0, "Member 'UHUD_C::InvalidationBoxBottomRight' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxCameraMode) == 0x0004D8, "Member 'UHUD_C::InvalidationBoxCameraMode' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxCenterPopup) == 0x0004E0, "Member 'UHUD_C::InvalidationBoxCenterPopup' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxChat) == 0x0004E8, "Member 'UHUD_C::InvalidationBoxChat' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxCursorMode) == 0x0004F0, "Member 'UHUD_C::InvalidationBoxCursorMode' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxDeathWidget) == 0x0004F8, "Member 'UHUD_C::InvalidationBoxDeathWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxHordeTierComplete) == 0x000500, "Member 'UHUD_C::InvalidationBoxHordeTierComplete' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxPickupManager) == 0x000508, "Member 'UHUD_C::InvalidationBoxPickupManager' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxPlayerHitpointinfo) == 0x000510, "Member 'UHUD_C::InvalidationBoxPlayerHitpointinfo' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxPlayerInfo) == 0x000518, "Member 'UHUD_C::InvalidationBoxPlayerInfo' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxTopRight) == 0x000520, "Member 'UHUD_C::InvalidationBoxTopRight' has a wrong offset!");
static_assert(offsetof(UHUD_C, InvalidationBoxZoneComplete) == 0x000528, "Member 'UHUD_C::InvalidationBoxZoneComplete' has a wrong offset!");
static_assert(offsetof(UHUD_C, LocalPlayerHitPointInfo) == 0x000530, "Member 'UHUD_C::LocalPlayerHitPointInfo' has a wrong offset!");
static_assert(offsetof(UHUD_C, MainContentStack) == 0x000538, "Member 'UHUD_C::MainContentStack' has a wrong offset!");
static_assert(offsetof(UHUD_C, MinimapContainer) == 0x000540, "Member 'UHUD_C::MinimapContainer' has a wrong offset!");
static_assert(offsetof(UHUD_C, MissionTracker) == 0x000548, "Member 'UHUD_C::MissionTracker' has a wrong offset!");
static_assert(offsetof(UHUD_C, OverlayIndicatorContent) == 0x000550, "Member 'UHUD_C::OverlayIndicatorContent' has a wrong offset!");
static_assert(offsetof(UHUD_C, PickupManager) == 0x000558, "Member 'UHUD_C::PickupManager' has a wrong offset!");
static_assert(offsetof(UHUD_C, PinnedSchematicItemsWidget) == 0x000560, "Member 'UHUD_C::PinnedSchematicItemsWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, PlayerInfo) == 0x000568, "Member 'UHUD_C::PlayerInfo' has a wrong offset!");
static_assert(offsetof(UHUD_C, PopupCenterMessageWidget) == 0x000570, "Member 'UHUD_C::PopupCenterMessageWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, QuestUpdatesLog) == 0x000578, "Member 'UHUD_C::QuestUpdatesLog' has a wrong offset!");
static_assert(offsetof(UHUD_C, QuickbarBorder) == 0x000580, "Member 'UHUD_C::QuickbarBorder' has a wrong offset!");
static_assert(offsetof(UHUD_C, QuickbarPrimary) == 0x000588, "Member 'UHUD_C::QuickbarPrimary' has a wrong offset!");
static_assert(offsetof(UHUD_C, QuickbarSecondary) == 0x000590, "Member 'UHUD_C::QuickbarSecondary' has a wrong offset!");
static_assert(offsetof(UHUD_C, RadialPicker) == 0x000598, "Member 'UHUD_C::RadialPicker' has a wrong offset!");
static_assert(offsetof(UHUD_C, ResourceAggregationWidget) == 0x0005A0, "Member 'UHUD_C::ResourceAggregationWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, Reticle) == 0x0005A8, "Member 'UHUD_C::Reticle' has a wrong offset!");
static_assert(offsetof(UHUD_C, ReticleStatusWidget) == 0x0005B0, "Member 'UHUD_C::ReticleStatusWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, SafeZone_0) == 0x0005B8, "Member 'UHUD_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UHUD_C, SafeZone_1) == 0x0005C0, "Member 'UHUD_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UHUD_C, SafeZone_2) == 0x0005C8, "Member 'UHUD_C::SafeZone_2' has a wrong offset!");
static_assert(offsetof(UHUD_C, SafeZone_3) == 0x0005D0, "Member 'UHUD_C::SafeZone_3' has a wrong offset!");
static_assert(offsetof(UHUD_C, SafeZone_4) == 0x0005D8, "Member 'UHUD_C::SafeZone_4' has a wrong offset!");
static_assert(offsetof(UHUD_C, ScoreBarsWidget) == 0x0005E0, "Member 'UHUD_C::ScoreBarsWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, SizeBox_1) == 0x0005E8, "Member 'UHUD_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UHUD_C, SizeBoxPinnedSchematics) == 0x0005F0, "Member 'UHUD_C::SizeBoxPinnedSchematics' has a wrong offset!");
static_assert(offsetof(UHUD_C, SlotHordeTierComplete) == 0x0005F8, "Member 'UHUD_C::SlotHordeTierComplete' has a wrong offset!");
static_assert(offsetof(UHUD_C, SlotZoneComplete) == 0x000600, "Member 'UHUD_C::SlotZoneComplete' has a wrong offset!");
static_assert(offsetof(UHUD_C, Subtitles) == 0x000608, "Member 'UHUD_C::Subtitles' has a wrong offset!");
static_assert(offsetof(UHUD_C, SwitcherEndOfDayTalkingHead) == 0x000610, "Member 'UHUD_C::SwitcherEndOfDayTalkingHead' has a wrong offset!");
static_assert(offsetof(UHUD_C, TalkingHeadWidget) == 0x000618, "Member 'UHUD_C::TalkingHeadWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, TopBar) == 0x000620, "Member 'UHUD_C::TopBar' has a wrong offset!");
static_assert(offsetof(UHUD_C, VerticalBoxMissionWidgets) == 0x000628, "Member 'UHUD_C::VerticalBoxMissionWidgets' has a wrong offset!");
static_assert(offsetof(UHUD_C, Widget_BuildWatermark) == 0x000630, "Member 'UHUD_C::Widget_BuildWatermark' has a wrong offset!");
static_assert(offsetof(UHUD_C, ZoneScoreWidget) == 0x000638, "Member 'UHUD_C::ZoneScoreWidget' has a wrong offset!");
static_assert(offsetof(UHUD_C, FocusedQuickbar) == 0x000640, "Member 'UHUD_C::FocusedQuickbar' has a wrong offset!");
static_assert(offsetof(UHUD_C, UnfocusedQuickbarScale) == 0x000644, "Member 'UHUD_C::UnfocusedQuickbarScale' has a wrong offset!");
static_assert(offsetof(UHUD_C, CursorModeEnabled) == 0x00064C, "Member 'UHUD_C::CursorModeEnabled' has a wrong offset!");
static_assert(offsetof(UHUD_C, ZoneCompleted) == 0x00064D, "Member 'UHUD_C::ZoneCompleted' has a wrong offset!");
static_assert(offsetof(UHUD_C, AvailableInterestIndicators) == 0x000650, "Member 'UHUD_C::AvailableInterestIndicators' has a wrong offset!");
static_assert(offsetof(UHUD_C, ActiveInterestIndicators) == 0x000660, "Member 'UHUD_C::ActiveInterestIndicators' has a wrong offset!");

}

