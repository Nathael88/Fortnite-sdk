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

// 0x1FF (0xD79 - 0xB7A)
// BlueprintGeneratedClass GA_SupplyDrop.GA_SupplyDrop_C
class UGA_SupplyDrop_C : public UGAT_GenericActiveAbilityNoCommit_C
{
public:
	uint8                                        Pad_348E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          EventComplete;                                     // 0xB88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventActivation;                                   // 0xB90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortAbilityTargetSelection           T_Explosion;                                       // 0xB98(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            ActivationSound;                                   // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData_0;                                       // 0xC00(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        AbilityMultiplier;                                 // 0xCA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_CoreResourceUpgrade1;                           // 0xCB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_CoreResourceUpgrade2;                           // 0xCD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_RandomItemUpgrade1;                             // 0xCF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_RandomItemUpgrade2;                             // 0xD10(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_RandomItemUpgrade3;                             // 0xD30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSupplyDropUnlocks                    UnlockTiers;                                       // 0xD50(0x5)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_3490[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WoodCount;                                         // 0xD58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExtraCraftingCount;                                // 0xD5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MetalCount;                                        // 0xD60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StoneCount;                                        // 0xD64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WoodItems;                                         // 0xD68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StoneItems;                                        // 0xD6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MetalItems;                                        // 0xD70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CraftingItems;                                     // 0xD74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTraps;                                            // 0xD78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_SupplyDrop_C");
		return Clss;
	}

	void SetTierFiveData(bool Condition, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3);
	void SetTierFourData(bool Condition, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2);
	void SetTierThreeData(bool Condition, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2);
	void SetTierTwoData(bool Conditions, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2);
	void SetTierOneData(bool Condition, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2);
	void Setup_Ability(class UAbilitySystemComponent* AbilitySystemComponentRef, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue3, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue4, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue5, const struct FSupplyDropUnlocks& K2Node_MakeStruct_SupplyDropUnlocks);
	void GetAttributeValue(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FAttributeInfo& CallFunc_FindAttributeInformation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetAttributeMagnitude_ReturnValue, int32 CallFunc_FFloor_ReturnValue);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_SupplyDrop(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortAbilityDecoTool* K2Node_DynamicCast_AsFort_Ability_Deco_Tool, bool K2Node_DynamicCast_bSuccess2, const struct FAbilityToolSpawnParameters& CallFunc_GetSpawnParameters_OutSpawnParamters, class ABuildingActor* CallFunc_AbilitySpawnDeco_ReturnValue, class AB_SupplyDropPlacement_C* K2Node_DynamicCast_AsB_Supply_Drop_Placement, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_HasAuthority_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
