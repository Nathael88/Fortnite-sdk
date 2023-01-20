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

// 0x370 (0x10D0 - 0xD60)
// BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C
class AB_Fragment_Container_C : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD60(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_LightOn;                                         // 0xD68(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Orb_Mesh;                                          // 0xD70(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_ResOut;                                          // 0xD78(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Orb_PickupEffect;                                // 0xD80(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     BlockingCollision;                                 // 0xD88(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Container_SK;                                      // 0xD90(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       RotationRoot;                                      // 0xD98(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       VerticalMovement;                                  // 0xDA0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Awaken_Collision;                                  // 0xDA8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      MiniMapCollision;                                  // 0xDB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 MiniMapLoc;                                        // 0xDB8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4; // 0xDC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4; // 0xDC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    VerticalMovementTimeline;                          // 0xDC8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_HasFragmentAbility;                             // 0xDD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_LlamaFragment;                                  // 0xDF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FGameplayTagContainer                 TC_ChargeFragmentTag;                              // 0xE10(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_LlamaFragmentTag;                               // 0xE30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          Event_FragmentCollected;                           // 0xE50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    SentFragment;                                      // 0xE58(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class E_OutlanderFragmentTypes          FragmentType;                                      // 0xF00(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ChargeFragmentColor;                               // 0xF04(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LlamaFragmentColor;                                // 0xF14(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAmmoItemDefinition*               FragmentAmmoData;                                  // 0xF28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Current_Outlander;                                 // 0xF30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       InteractingPlayerPawn;                             // 0xF38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Outlander_LlamaFragment;                        // 0xF40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_ClearFragmentCooldown;                          // 0xF48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Outlander_FragmentTeamSpeedBost;                // 0xF50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                FortPawnFilter;                                    // 0xF58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LlamaFragmentPercent;                              // 0xF60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotateToPlayerSpeed;                               // 0xF64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastInteractStartTime;                             // 0xF68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayedDestroyTime;                                // 0xF6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfTimeToPingMap;                             // 0xF70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfMapPings;                                  // 0xF74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAnyOutlanderStillAround;                         // 0xF78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanInteract;                                       // 0xF79(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         IsAwake;                                           // 0xF7A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasLoot;                                           // 0xF7B(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsOpen;                                            // 0xF7C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         bIsUP;                                             // 0xF7D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsOn;                                              // 0xF7E(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1FDC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Container_Base_Mat;                                // 0xF80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Container_Screen_mat;                              // 0xF88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Container_Light_mat;                               // 0xF90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Orb_Mat;                                           // 0xF98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Orb_Turn_On_Sound;                                 // 0xFA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Orb_Hello_Sound;                                   // 0xFA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Orb_Hover_Sound;                                   // 0xFB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Orb_Goodbye_Sound;                                 // 0xFB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Orb_Thanks_Sound;                                  // 0xFC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  InteractLlamaFragment;                             // 0xFC8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  InteractChargeFragment;                            // 0xFE0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  InteractNonOutlander;                              // 0xFF8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PickupLlamaFragment;                               // 0x1010(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PickupChargeFragment;                              // 0x1028(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                       OrbAudioComponent;                                 // 0x1040(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOrbTaken;                                        // 0x1048(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1FDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FailedOutlanderOnlyOneLlama;                       // 0x1050(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  FailedOutlanderMaxFragHeldDefault;                 // 0x1068(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility; // 0x1080(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  FailedNonOutlanderActivated;                       // 0x1098(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                  FF_Interact;                                       // 0x10B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  FFInteractSoft;                                    // 0x10B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         DeployAnim;                                        // 0x10C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         UndeployAnim;                                      // 0x10C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Fragment_Container_C");
		return Clss;
	}

	void IsOutlander(class AFortPawn* Pawn, bool* IsOutlander, bool CallFunc_IsValid_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void ForceFeedbackInteract(bool Soft, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void OnRep_IsOrbTaken();
	void OnRep_IsOn(const struct FTransform& Temp_struct_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_AddComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2);
	void SetOutlander(class AActor* NewOutlander);
	void SetAwake(bool NewAwake);
	void UpdateShouldTick(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, bool CallFunc_IsOutlander_IsOutlander, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
	void OnRep_IsOpen(bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default);
	void DelayedDestroy();
	void OnRep_BuffType(const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData2, bool K2Node_SwitchEnum_CmpSuccess);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, bool CallFunc_IsOutlander_IsOutlander, bool K2Node_SwitchEnum_CmpSuccess, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, bool LocalExecuteOk, bool LocalIsOutlander, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, UInterfaceProperty_ CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class AController* CallFunc_GetController_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutlander_IsOutlander, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess2, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_FTrunc_ReturnValue2, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue2);
	void UserConstructionScript(bool CallFunc_K2_AttachTo_ReturnValue);
	void VerticalMovementTimeline__FinishedFunc();
	void VerticalMovementTimeline__UpdateFunc();
	void VerticalMovementTimeline__Up__EventFunc();
	void VerticalMovementTimeline__down__EventFunc();
	void ReceiveBeginPlay();
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void ActivateFX();
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveTick(float DeltaSeconds);
	void MoveUp();
	void PowerDown();
	void MoveDown();
	void ShowOnMiniMap();
	void StartHide();
	void Reset_Activation();
	void BlueprintOnBeginInteract();
	void MultiFeedback();
	void SoftFeedback();
	void PlayAnimation(class UAnimSequence* AnimToPlay);
	void AnimationComplete();
	void ExecuteUbergraph_B_Fragment_Container(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue2, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, class AFortPawn* K2Node_Event_InteractingPawn, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent2, class AActor* K2Node_ComponentBoundEvent_OtherActor2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex2, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn3, bool K2Node_DynamicCast_bSuccess3, float K2Node_Event_DeltaSeconds, bool CallFunc_IsOutlander_IsOutlander, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, enum class E_OutlanderFragmentTypes Temp_byte_Variable, bool Temp_bool_IsClosed_Variable2, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsOutlander_IsOutlander2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_HasAuthority_ReturnValue4, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsOutlander_IsOutlander3, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_HasAuthority_ReturnValue5, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess5, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_BooleanAND_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue4, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, bool CallFunc_IsDedicatedServer_ReturnValue5, bool K2Node_SwitchEnum2_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2, TArray<class AFortPlayerPawn*>& CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue2, const struct FRotator& CallFunc_RLerp_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult3, bool Temp_bool_Has_Been_Initd_Variable3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AFortGameModeDeployableBase* K2Node_DynamicCast_AsFort_Game_Mode_Deployable_Base, bool K2Node_DynamicCast_bSuccess6, class AFortGameModeOutpost* K2Node_DynamicCast_AsFort_Game_Mode_Outpost, bool K2Node_DynamicCast_bSuccess7, bool K2Node_SwitchEnum3_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue6, class AController* CallFunc_GetController_ReturnValue2, bool Temp_bool_IsClosed_Variable3, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess8, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, class UAnimSequence* K2Node_CustomEvent_AnimToPlay, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable2, class AFortPlayerPawn* CallFunc_Array_Get_Item2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, bool K2Node_SwitchEnum4_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue3, const struct FLinearColor& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif