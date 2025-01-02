#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Melee_Generic

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
// 0x00E0 (0x0B68 - 0x0A88)
class AB_Melee_Generic_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A88(0x0008)(Transient, DuplicateTransient)
	bool                                          Has_Idle_Effect;                                   // 0x0A90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A91[0x7];                                      // 0x0A91(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Idle_Effect;                                       // 0x0A98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Effects_Color_Level;                               // 0x0AA0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Swing_Effect;                                  // 0x0AAC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AAD[0x3];                                      // 0x0AAD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Swing_Effect;                                      // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Effect_Color_Override;                         // 0x0AB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AB9[0x3];                                      // 0x0AB9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Main_Effects_Color_Lv;                             // 0x0ABC(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lv2_wpn;                                           // 0x0ACC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Lv3_Wpn;                                           // 0x0ACD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ACE[0x2];                                      // 0x0ACE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Main_Effects_Color2_Lv;                            // 0x0AD0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               AnimTrail_PSC;                                     // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MeleeHeavy_PSC;                                    // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MeleeHeavy_ParticleSystem;                         // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0B08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B09[0x7];                                      // 0x0B09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   IdleFXAttachSocket;                                // 0x0B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               IdleFXComponent;                                   // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        AnimTrailsParticles;                               // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   FirstSocketName;                                   // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Second_Socket_Name;                                // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Width;                                             // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UseAnimTrails;                                     // 0x0B3C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_B3D[0x3];                                      // 0x0B3D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SwingFXSocket;                                     // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                   PokeAnimations;                                    // 0x0B48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               WeaponMID;                                         // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x0B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Melee_Generic(int32 EntryPoint);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void OnEquippedWeaponDestory();
	void OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC);
	void PlayRClickImpacts();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ReceiveBeginPlay();
	void FootStepRight();
	void FootStepLeft();
	void MeleeSwingLeft();
	void MeleeSwingRight();
	void OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded);
	void UserConstructionScript();
	void SetWpnRarity();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Melee_Generic_C">();
	}
	static class AB_Melee_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Melee_Generic_C>();
	}
};
static_assert(alignof(AB_Melee_Generic_C) == 0x000008, "Wrong alignment on AB_Melee_Generic_C");
static_assert(sizeof(AB_Melee_Generic_C) == 0x000B68, "Wrong size on AB_Melee_Generic_C");
static_assert(offsetof(AB_Melee_Generic_C, UberGraphFrame) == 0x000A88, "Member 'AB_Melee_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Has_Idle_Effect) == 0x000A90, "Member 'AB_Melee_Generic_C::Has_Idle_Effect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Idle_Effect) == 0x000A98, "Member 'AB_Melee_Generic_C::Idle_Effect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Effects_Color_Level) == 0x000AA0, "Member 'AB_Melee_Generic_C::Effects_Color_Level' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Has_Swing_Effect) == 0x000AAC, "Member 'AB_Melee_Generic_C::Has_Swing_Effect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Swing_Effect) == 0x000AB0, "Member 'AB_Melee_Generic_C::Swing_Effect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Use_Effect_Color_Override) == 0x000AB8, "Member 'AB_Melee_Generic_C::Use_Effect_Color_Override' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Main_Effects_Color_Lv) == 0x000ABC, "Member 'AB_Melee_Generic_C::Main_Effects_Color_Lv' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Lv2_wpn) == 0x000ACC, "Member 'AB_Melee_Generic_C::Lv2_wpn' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Lv3_Wpn) == 0x000ACD, "Member 'AB_Melee_Generic_C::Lv3_Wpn' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Main_Effects_Color2_Lv) == 0x000AD0, "Member 'AB_Melee_Generic_C::Main_Effects_Color2_Lv' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, AnimTrail_PSC) == 0x000AE0, "Member 'AB_Melee_Generic_C::AnimTrail_PSC' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, MeleeHeavy_PSC) == 0x000AE8, "Member 'AB_Melee_Generic_C::MeleeHeavy_PSC' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, MeleeHeavy_ParticleSystem) == 0x000AF0, "Member 'AB_Melee_Generic_C::MeleeHeavy_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, WeaponDurabilityDestroyEffect) == 0x000AF8, "Member 'AB_Melee_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x000B00, "Member 'AB_Melee_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, UseDestroyEffect) == 0x000B08, "Member 'AB_Melee_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, IdleFXAttachSocket) == 0x000B10, "Member 'AB_Melee_Generic_C::IdleFXAttachSocket' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, IdleFXComponent) == 0x000B18, "Member 'AB_Melee_Generic_C::IdleFXComponent' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, AnimTrailsParticles) == 0x000B20, "Member 'AB_Melee_Generic_C::AnimTrailsParticles' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, FirstSocketName) == 0x000B28, "Member 'AB_Melee_Generic_C::FirstSocketName' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Second_Socket_Name) == 0x000B30, "Member 'AB_Melee_Generic_C::Second_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Width) == 0x000B38, "Member 'AB_Melee_Generic_C::Width' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, UseAnimTrails) == 0x000B3C, "Member 'AB_Melee_Generic_C::UseAnimTrails' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, SwingFXSocket) == 0x000B40, "Member 'AB_Melee_Generic_C::SwingFXSocket' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, PokeAnimations) == 0x000B48, "Member 'AB_Melee_Generic_C::PokeAnimations' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, WeaponMID) == 0x000B58, "Member 'AB_Melee_Generic_C::WeaponMID' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Alteration_Ambient_PS) == 0x000B60, "Member 'AB_Melee_Generic_C::Alteration_Ambient_PS' has a wrong offset!");

}

