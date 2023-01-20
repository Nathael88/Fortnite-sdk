#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0xEAC - 0xDF8)
// BlueprintGeneratedClass B_GoinCommandoWeapon.B_GoinCommandoWeapon_C
class AB_GoinCommandoWeapon_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDF8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_GoingCommando_ChargeUp_01;                       // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpinDownSound;                                     // 0xE08(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpinUpSound;                                       // 0xE10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ChargeUp_ChargingTime_46AF3CCF4ABF9B1069FB7989793B0F32; // 0xE18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ChargeUp__Direction_46AF3CCF4ABF9B1069FB7989793B0F32; // 0xE1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FFD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ChargeUp;                                          // 0xE20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Boomstick;                                         // 0xE28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       BulletImpact_Lvl0_4;                               // 0xE30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       BulletImpact_Lvl5;                                 // 0xE38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    DecalMaterialLvl0_4;                               // 0xE40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    DecalMaterialLvl5;                                 // 0xE48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleLvl5;                                        // 0xE50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleLvl0_4;                                      // 0xE58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TracerLvl5;                                        // 0xE60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TracerLvl0_4;                                      // 0xE68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_Boomstick;                                      // 0xE70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*              Effect_GoingCommando_WeaponArcs;                   // 0xE90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ChargeupLvl0_4;                                    // 0xE98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ChargeupLvl5;                                      // 0xEA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentChargeTime;                                 // 0xEA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_GoinCommandoWeapon_C");
		return Clss;
	}

	void UserConstructionScript();
	void ChargeUp__FinishedFunc();
	void ChargeUp__UpdateFunc();
	void SetUpgradeLevel();
	void ReceiveBeginPlay();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC);
	void OnChargeUp();
	void OnChargeDown();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void ExecuteUbergraph_B_GoinCommandoWeapon(int32 EntryPoint, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* K2Node_Event_DynamicMaterialInstance, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTransform& Temp_struct_Variable, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class APlayerPawn_Commando_C* K2Node_DynamicCast_AsPlayer_Pawn_Commando, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UParticleSystemComponent* K2Node_Event_SpawnedPSC);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
