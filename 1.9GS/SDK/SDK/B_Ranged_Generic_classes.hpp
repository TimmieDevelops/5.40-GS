#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Ranged_Generic

#include "Basic.hpp"

#include "En_ShellTypes_01_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// 0x0160 (0x0E00 - 0x0CA0)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0CA0(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               MuzzleWindParticle_Empty_;                         // 0x0CA8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Reload_Empty_;                                     // 0x0CB0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  SecondDownScopePostProcess;                        // 0x0CB8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Shells_empty_;                                     // 0x0CC0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  DownScopePostProcess;                              // 0x0CC8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ScopeMesh1P;                                       // 0x0CD0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Muzzle_Empty_;                                     // 0x0CD8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x0CE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0x0CE4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CE5[0x3];                                      // 0x0CE5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AnimateScopePostProcess;                           // 0x0CE8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MuzzleParticleSystem;                              // 0x0CF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0CF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0D00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0D08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Use_Reload_Particles;                              // 0x0D09(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D0A[0x6];                                      // 0x0D0A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Reload_ParticleSystem;                             // 0x0D10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastPlayFXTime;                                    // 0x0D18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinPlayFXTime;                                     // 0x0D1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseShellsOnFire_;                                  // 0x0D20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnReload_;                                // 0x0D21(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnPump_;                                  // 0x0D22(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D23[0x5];                                      // 0x0D23(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        ShellsParticleSystemTemplate;                      // 0x0D28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ReloadSocketName;                                  // 0x0D30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                    Array_Of_Active_Enemy_AI;                          // 0x0D38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Scope___Render_Enemies_To_Custom_Depth_Buffer;     // 0x0D48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_D49[0x7];                                      // 0x0D49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Shells_Socket_Name;                                // 0x0D50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	En_ShellTypes_01                              ShellTypeSelect;                                   // 0x0D58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D59[0x3];                                      // 0x0D59(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Shells_Spawn_Rate_Scale;                           // 0x0D5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShellsRotationRate;                                // 0x0D60(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Velocity;                                   // 0x0D6C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Gravity;                                    // 0x0D78(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Lifetime;                                   // 0x0D84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Size;                                       // 0x0D88(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Time_Dilation;                              // 0x0D94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Target_Scope_Vignette_Blur_Screen_Percentage;      // 0x0D98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scope_Camera_Offset_Amount;                        // 0x0D9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SmallShells;                                       // 0x0DA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MediumShells;                                      // 0x0DA1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LargeShells;                                       // 0x0DA2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShotgunShells;                                     // 0x0DA3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnergyShells;                                      // 0x0DA4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA5[0x3];                                      // 0x0DA5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Inherit_Parent_Velocity;                           // 0x0DA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Radius;                                // 0x0DAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Height;                                // 0x0DB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugShellsSocket_;                                // 0x0DB4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Use_2_Post_Processes_For_the_Scope;                // 0x0DB5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_DB6[0x2];                                      // 0x0DB6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_ScopeZoomIn;                                 // 0x0DB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_ScopeZoomOut;                                // 0x0DC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x0DC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ReticleHUDElementTags;                             // 0x0DD0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Is_Wind_Enabled;                                   // 0x0DF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF1[0x7];                                      // 0x0DF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MuzzleWindParticleSystem;                          // 0x0DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void OnEquippedWeaponDestory();
	void ShellsON__onPump_();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnWeaponAttached();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue);
	void InitializeScopeVariables();
	void K2_OnUnEquip();
	void OnSetTargeting(bool bNewIsTargeting);
	void OnPlayReloadFX(EFortReloadFXState ReloadStage);
	void OnStopWeaponFireFX();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded);
	void AnimateScopePostProcess__UpdateFunc();
	void AnimateScopePostProcess__FinishedFunc();
	void UserConstructionScript();
	void AddRandomScale();
	void SetWpnRarity();
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void Muzzle_Play_Reload_FX(EFortReloadFXState Selection);
	void UpdateShellEmittersFX();
	void SetupShellFX();
	void DeactivateShellsFX();
	void ActivateShellsFX(bool Bool);
	void ActivateReloadSmokeFX();
	void DeactivateReloadSmokeFX();
	void DeactivateMuzzleFX();
	void ActivateOrDeactivateWindParticle(bool bNewActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Ranged_Generic_C">();
	}
	static class AB_Ranged_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Ranged_Generic_C>();
	}
};
static_assert(alignof(AB_Ranged_Generic_C) == 0x000008, "Wrong alignment on AB_Ranged_Generic_C");
static_assert(sizeof(AB_Ranged_Generic_C) == 0x000E00, "Wrong size on AB_Ranged_Generic_C");
static_assert(offsetof(AB_Ranged_Generic_C, UberGraphFrame) == 0x000CA0, "Member 'AB_Ranged_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleWindParticle_Empty_) == 0x000CA8, "Member 'AB_Ranged_Generic_C::MuzzleWindParticle_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_Empty_) == 0x000CB0, "Member 'AB_Ranged_Generic_C::Reload_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, SecondDownScopePostProcess) == 0x000CB8, "Member 'AB_Ranged_Generic_C::SecondDownScopePostProcess' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_empty_) == 0x000CC0, "Member 'AB_Ranged_Generic_C::Shells_empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, DownScopePostProcess) == 0x000CC8, "Member 'AB_Ranged_Generic_C::DownScopePostProcess' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeMesh1P) == 0x000CD0, "Member 'AB_Ranged_Generic_C::ScopeMesh1P' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_Empty_) == 0x000CD8, "Member 'AB_Ranged_Generic_C::Muzzle_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642) == 0x000CE0, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642) == 0x000CE4, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess) == 0x000CE8, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleParticleSystem) == 0x000CF0, "Member 'AB_Ranged_Generic_C::MuzzleParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, WeaponDurabilityDestroyEffect) == 0x000CF8, "Member 'AB_Ranged_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x000D00, "Member 'AB_Ranged_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseDestroyEffect) == 0x000D08, "Member 'AB_Ranged_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Use_Reload_Particles) == 0x000D09, "Member 'AB_Ranged_Generic_C::Use_Reload_Particles' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_ParticleSystem) == 0x000D10, "Member 'AB_Ranged_Generic_C::Reload_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, LastPlayFXTime) == 0x000D18, "Member 'AB_Ranged_Generic_C::LastPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MinPlayFXTime) == 0x000D1C, "Member 'AB_Ranged_Generic_C::MinPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnFire_) == 0x000D20, "Member 'AB_Ranged_Generic_C::UseShellsOnFire_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnReload_) == 0x000D21, "Member 'AB_Ranged_Generic_C::UseShellsOnReload_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnPump_) == 0x000D22, "Member 'AB_Ranged_Generic_C::UseShellsOnPump_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellsParticleSystemTemplate) == 0x000D28, "Member 'AB_Ranged_Generic_C::ShellsParticleSystemTemplate' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ReloadSocketName) == 0x000D30, "Member 'AB_Ranged_Generic_C::ReloadSocketName' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Array_Of_Active_Enemy_AI) == 0x000D38, "Member 'AB_Ranged_Generic_C::Array_Of_Active_Enemy_AI' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Scope___Render_Enemies_To_Custom_Depth_Buffer) == 0x000D48, "Member 'AB_Ranged_Generic_C::Scope___Render_Enemies_To_Custom_Depth_Buffer' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Socket_Name) == 0x000D50, "Member 'AB_Ranged_Generic_C::Shells_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellTypeSelect) == 0x000D58, "Member 'AB_Ranged_Generic_C::ShellTypeSelect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Spawn_Rate_Scale) == 0x000D5C, "Member 'AB_Ranged_Generic_C::Shells_Spawn_Rate_Scale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellsRotationRate) == 0x000D60, "Member 'AB_Ranged_Generic_C::ShellsRotationRate' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Velocity) == 0x000D6C, "Member 'AB_Ranged_Generic_C::Shells_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Gravity) == 0x000D78, "Member 'AB_Ranged_Generic_C::Shells_Gravity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Lifetime) == 0x000D84, "Member 'AB_Ranged_Generic_C::Shells_Lifetime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Size) == 0x000D88, "Member 'AB_Ranged_Generic_C::Shells_Size' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Time_Dilation) == 0x000D94, "Member 'AB_Ranged_Generic_C::Shells_Time_Dilation' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Target_Scope_Vignette_Blur_Screen_Percentage) == 0x000D98, "Member 'AB_Ranged_Generic_C::Target_Scope_Vignette_Blur_Screen_Percentage' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Scope_Camera_Offset_Amount) == 0x000D9C, "Member 'AB_Ranged_Generic_C::Scope_Camera_Offset_Amount' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, SmallShells) == 0x000DA0, "Member 'AB_Ranged_Generic_C::SmallShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MediumShells) == 0x000DA1, "Member 'AB_Ranged_Generic_C::MediumShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, LargeShells) == 0x000DA2, "Member 'AB_Ranged_Generic_C::LargeShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShotgunShells) == 0x000DA3, "Member 'AB_Ranged_Generic_C::ShotgunShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, EnergyShells) == 0x000DA4, "Member 'AB_Ranged_Generic_C::EnergyShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Inherit_Parent_Velocity) == 0x000DA8, "Member 'AB_Ranged_Generic_C::Inherit_Parent_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Cylindrical_Radius) == 0x000DAC, "Member 'AB_Ranged_Generic_C::Cylindrical_Radius' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Cylindrical_Height) == 0x000DB0, "Member 'AB_Ranged_Generic_C::Cylindrical_Height' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, DebugShellsSocket_) == 0x000DB4, "Member 'AB_Ranged_Generic_C::DebugShellsSocket_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Use_2_Post_Processes_For_the_Scope) == 0x000DB5, "Member 'AB_Ranged_Generic_C::Use_2_Post_Processes_For_the_Scope' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopeZoomIn) == 0x000DB8, "Member 'AB_Ranged_Generic_C::Sound_ScopeZoomIn' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopeZoomOut) == 0x000DC0, "Member 'AB_Ranged_Generic_C::Sound_ScopeZoomOut' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Alteration_Ambient_PS) == 0x000DC8, "Member 'AB_Ranged_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ReticleHUDElementTags) == 0x000DD0, "Member 'AB_Ranged_Generic_C::ReticleHUDElementTags' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Is_Wind_Enabled) == 0x000DF0, "Member 'AB_Ranged_Generic_C::Is_Wind_Enabled' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleWindParticleSystem) == 0x000DF8, "Member 'AB_Ranged_Generic_C::MuzzleWindParticleSystem' has a wrong offset!");

}

