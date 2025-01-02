#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIManager

#include "Basic.hpp"

#include "UIManager_classes.hpp"
#include "UIManager_parameters.hpp"


namespace SDK
{

// Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::ExecuteUbergraph_UIManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "ExecuteUbergraph_UIManager");

	Params::UIManager_C_ExecuteUbergraph_UIManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.CloseErrorWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::CloseErrorWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "CloseErrorWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.CloseConfirmationWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::CloseConfirmationWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "CloseConfirmationWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.PopActivatablePanelInModalLayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          Panel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::PopActivatablePanelInModalLayer(const class UCommonActivatablePanel* Panel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "PopActivatablePanelInModalLayer");

	Params::UIManager_C_PopActivatablePanelInModalLayer Parms{};

	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.OnStateEnded
// (Event, Public, BlueprintEvent)

void UUIManager_C::OnStateEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "OnStateEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.QueueActivatablePanelIntoModalLayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          Panel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::QueueActivatablePanelIntoModalLayer(const class UCommonActivatablePanel* Panel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "QueueActivatablePanelIntoModalLayer");

	Params::UIManager_C_QueueActivatablePanelIntoModalLayer Parms{};

	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.UpdateStateWidgetContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI*           StateWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::UpdateStateWidgetContent(class UFortUIStateWidget_NUI* StateWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "UpdateStateWidgetContent");

	Params::UIManager_C_UpdateStateWidgetContent Parms{};

	Parms.StateWidget = StateWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.OnShowConfirmation_NUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI       Description                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UUIManager_C::OnShowConfirmation_NUI(const struct FFortDialogDescription_NUI& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "OnShowConfirmation_NUI");

	Params::UIManager_C_OnShowConfirmation_NUI Parms{};

	Parms.Description = std::move(Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIManager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.DebugToggleInvalidationPanel
// (BlueprintCallable, BlueprintEvent)

void UUIManager_C::DebugToggleInvalidationPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "DebugToggleInvalidationPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.DisplayErrorDialog
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo                   Info                                                   (ConstParm, Parm, OutParm, ReferenceParm)

void UUIManager_C::DisplayErrorDialog(const struct FFortErrorInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "DisplayErrorDialog");

	Params::UIManager_C_DisplayErrorDialog Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.KillConfirmation
// (Event, Public, BlueprintEvent)

void UUIManager_C::KillConfirmation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "KillConfirmation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIManager_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.OnStateStarted
// (Event, Public, BlueprintEvent)

void UUIManager_C::OnStateStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "OnStateStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.DisplayStateContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bDisplay                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::DisplayStateContent(bool bDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "DisplayStateContent");

	Params::UIManager_C_DisplayStateContent Parms{};

	Parms.bDisplay = bDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.ClearLayers
// (Private, BlueprintCallable, BlueprintEvent)

void UUIManager_C::ClearLayers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "ClearLayers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.PopCurrentModal
// (Private, BlueprintCallable, BlueprintEvent)

void UUIManager_C::PopCurrentModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "PopCurrentModal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.QueueModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          ActivatablePanel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::QueueModalPanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "QueueModalPanel");

	Params::UIManager_C_QueueModalPanel Parms{};

	Parms.ActivatablePanel = ActivatablePanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.ShowNextModalWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::ShowNextModalWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "ShowNextModalWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::BindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "BindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.IsStateContentChildShowing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIManager_C::IsStateContentChildShowing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "IsStateContentChildShowing");

	Params::UIManager_C_IsStateContentChildShowing Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIManager.UIManager_C.HandleModalContentCleared
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::HandleModalContentCleared()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "HandleModalContentCleared");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.HandleDeactivatedPanelConfirmationLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          DeactivatedPanel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::HandleDeactivatedPanelConfirmationLayer(class UCommonActivatablePanel* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "HandleDeactivatedPanelConfirmationLayer");

	Params::UIManager_C_HandleDeactivatedPanelConfirmationLayer Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.ShowNextConfirmation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIManager_C::ShowNextConfirmation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "ShowNextConfirmation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.QueueConfirmation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI       ConfirmationDescription                                (Parm, ContainsInstancedReference)

void UUIManager_C::QueueConfirmation(const struct FFortDialogDescription_NUI& ConfirmationDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "QueueConfirmation");

	Params::UIManager_C_QueueConfirmation Parms{};

	Parms.ConfirmationDescription = std::move(ConfirmationDescription);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.AddActivatablePanelToModalLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          ActivatablePanel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::AddActivatablePanelToModalLayer(class UCommonActivatablePanel* ActivatablePanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "AddActivatablePanelToModalLayer");

	Params::UIManager_C_AddActivatablePanelToModalLayer Parms{};

	Parms.ActivatablePanel = ActivatablePanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.HandleDeactivatedPanelModalLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          DeactivatedPanel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::HandleDeactivatedPanelModalLayer(class UCommonActivatablePanel* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "HandleDeactivatedPanelModalLayer");

	Params::UIManager_C_HandleDeactivatedPanelModalLayer Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.ShowErrorInErrorWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo                   ErrorInfo                                              (Parm)

void UUIManager_C::ShowErrorInErrorWindow(const struct FFortErrorInfo& ErrorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "ShowErrorInErrorWindow");

	Params::UIManager_C_ShowErrorInErrorWindow Parms{};

	Parms.ErrorInfo = std::move(ErrorInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.HandleDeactivatedErrorWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          DeactivatedPanel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::HandleDeactivatedErrorWindow(class UCommonActivatablePanel* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "HandleDeactivatedErrorWindow");

	Params::UIManager_C_HandleDeactivatedErrorWindow Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.DisplayWebPurchase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          WebWidget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OfferId                                                (Parm, ZeroConstructor, HasGetValueTypeHash)

void UUIManager_C::DisplayWebPurchase(class UWidget* WebWidget, const class FString& OfferId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "DisplayWebPurchase");

	Params::UIManager_C_DisplayWebPurchase Parms{};

	Parms.WebWidget = WebWidget;
	Parms.OfferId = std::move(OfferId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.DismissWebPurchase
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::DismissWebPurchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "DismissWebPurchase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.IsConsole
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIManager_C::IsConsole()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "IsConsole");

	Params::UIManager_C_IsConsole Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIManager.UIManager_C.OnEndLatentWaitForConfirmationDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogExternalLatentActionHandleWaitingDialogHandle                                    (Parm, OutParm, ReferenceParm, NoDestructor)

void UUIManager_C::OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "OnEndLatentWaitForConfirmationDialog");

	Params::UIManager_C_OnEndLatentWaitForConfirmationDialog Parms{};

	Parms.WaitingDialogHandle = std::move(WaitingDialogHandle);

	UObject::ProcessEvent(Func, &Parms);

	WaitingDialogHandle = std::move(Parms.WaitingDialogHandle);
}


// Function UIManager.UIManager_C.HandleControllerConnectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bConnected                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::HandleControllerConnectionChanged(bool bConnected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "HandleControllerConnectionChanged");

	Params::UIManager_C_HandleControllerConnectionChanged Parms{};

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.HandleStateContentUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI*           NewStateWidget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::HandleStateContentUpdated(class UFortUIStateWidget_NUI* NewStateWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "HandleStateContentUpdated");

	Params::UIManager_C_HandleStateContentUpdated Parms{};

	Parms.NewStateWidget = NewStateWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.PopModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          ActivatablePanel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::PopModalPanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "PopModalPanel");

	Params::UIManager_C_PopModalPanel Parms{};

	Parms.ActivatablePanel = ActivatablePanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.RemoveModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          Panel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIManager_C::RemoveModalPanel(class UCommonActivatablePanel* Panel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "RemoveModalPanel");

	Params::UIManager_C_RemoveModalPanel Parms{};

	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIManager.UIManager_C.ClearConfirmationLayer
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::ClearConfirmationLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "ClearConfirmationLayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.IsShowingModalsConfirmationsErrors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShowing                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIManager_C::IsShowingModalsConfirmationsErrors(bool* bShowing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "IsShowingModalsConfirmationsErrors");

	Params::UIManager_C_IsShowingModalsConfirmationsErrors Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bShowing != nullptr)
		*bShowing = Parms.bShowing;
}


// Function UIManager.UIManager_C.SafeTriggerCameraMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::SafeTriggerCameraMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "SafeTriggerCameraMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIManager.UIManager_C.SafeTriggerCursorMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUIManager_C::SafeTriggerCursorMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIManager_C", "SafeTriggerCursorMode");

	UObject::ProcessEvent(Func, nullptr);
}

}

