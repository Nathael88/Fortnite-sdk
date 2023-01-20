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

// 0xA0 (0x408 - 0x368)
// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
class AHBOnboardingFlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x370(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              OnboardingQuest;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              PlayPeriodicEventMovieQuest;                       // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayedPeriodicEventMovie;                         // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasRecheckedNeedToPlayPeriodicEventMovie;         // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BCC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CompleteZoneObjective;                             // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NameHomebaseObjective;                             // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FMargin                               NotificationPadding;                               // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   PlaySatelliteCineObjective;                        // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortAccountItemDefinition*            ShowNewsToken;                                     // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClientQuestLoginRetryCount;                        // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClientQuestLoginNumRetries;                        // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PlayPeriodicEventCineObjective;                    // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   StormShieldDefenseObjective;                       // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                PeriodicEventMovieAnnouncmentClass;                // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HBOnboardingFlow_C");
		return Clss;
	}

	bool HasCompletedOnboardingObjective(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetCampaignQuestManager(class UFortQuestManager** QuestManager, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void GetOnboardingQuestItem(class UFortQuestItem** Result, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue);
	void CanAccessManagementFeatures(bool* Can_Manage, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState2, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState3, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason3, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3);
	void RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
	bool NeedsToPlayEventMovie(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
	void Handle_Client_Quest_Login_Failed(int32 NewLocalVar_0, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void ShowBannerSelect(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBannerSelectionWidget_C* K2Node_DynamicCast_AsBanner_Selection_Widget, bool K2Node_DynamicCast_bSuccess);
	void HandleMcpFailure();
	void UserConstructionScript();
	void OnCanceled_C2C889344301B8DBF8F046A2A175D133();
	void OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133();
	void OnCanceled_856A325D44ECC73B857CE5B301E90D33();
	void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();
	void OnFailure_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnFailure_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0();
	void OnCanceled_856A325D44ECC73B857CE5B35313D7CD();
	void OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD();
	void OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251();
	void OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6();
	void OnStateEntered_99CD286F4BDD72A81163058464B73990();
	void OnFailure_74930F274B5470B17CF720953FE7E260();
	void OnSuccess_74930F274B5470B17CF720953FE7E260();
	void OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0();
	void OnStateEntered_7FBC276641DD576B7417ED97A4734318();
	void OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2();
	void DialogResult_1D81E4B94CE33A3425130BABD5A7283B(enum class EFortDialogResult Result, class FName ResultName);
	void OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515();
	void OnFailure_50CD26324B96B121A5B49DA66113AE5D();
	void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();
	void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();
	void OnFailure_7D1C261A4BE47E3567B8D2885C9E298B();
	void OnSuccess_7D1C261A4BE47E3567B8D2885C9E298B();
	void StartPlaySatelliteCine();
	void StartNameHomebase();
	void HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void StartOnboardingZone();
	void StartFlow();
	void RejoinCheckCompleted(enum class ERejoinStatus RejoinStatus);
	void HandleCheckExistingSession();
	void HandleCheckOnboardingZoneComplete();
	void HandleSwitchToHomeBase();
	void HandlePlaySatelliteCine();
	void HandleNameHomebase();
	void Handle_Client_Quest_Login_Failed_Retry();
	void Handle_Client_Quest_Login_Retries_Exhausted();
	void HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleSubGameSelection();
	void HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleCompanionAppOnboardingAbort();
	void HandleNoEntitlement();
	void HandleForcedLogout(class FText Reason_Title, class FText Reason);
	void HandlePlayEventCine();
	void HandleMobileManagementRestricted();
	void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint, bool CallFunc_ClassIsChildOf_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_AutoSelectSubGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue2, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_IsMobileApp_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue8, bool CallFunc_IsMobileApp_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue9, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue10, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsMobileApp_ReturnValue3, enum class ESubGame CallFunc_GetSubGame_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue13, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue14, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue15, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue16, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue17, bool CallFunc_IsJoinableGameAvailable_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue18, bool CallFunc_NeedToCheckRejoinStatus_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue5, bool CallFunc_IsValid_ReturnValue7, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue2, bool CallFunc_IsValid_ReturnValue8, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue2, bool CallFunc_IsValid_ReturnValue9, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array2, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource4, class UObject* K2Node_HandleClientEvent_EventFocus4, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent4, bool CallFunc_IsValid_ReturnValue11, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue3, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, bool CallFunc_IsValid_ReturnValue12, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager2, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue2, bool CallFunc_IsValid_ReturnValue13, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue2, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue4, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue19, enum class ERejoinStatus K2Node_CustomEvent_RejoinStatus, class UFortMcpContext* CallFunc_GetContext_ReturnValue20, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result, bool CallFunc_Not_PreBool_ReturnValue5, bool CallFunc_TextIsEmpty_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate21, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue6, class UObject* K2Node_HandleClientEvent_EventSource3, class UObject* K2Node_HandleClientEvent_EventFocus3, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate22, bool CallFunc_ClassIsChildOf_ReturnValue2, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate23, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate24, class FText K2Node_CustomEvent_Reason_Title, class FText K2Node_CustomEvent_Reason, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate25, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue15, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, bool CallFunc_NeedsToPlayEventMovie_ReturnValue, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain2, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, bool CallFunc_CanAccessManagementFeatures_Can_Manage, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate26, bool CallFunc_Not_PreBool_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortAsyncAction_LoadCampaignProfiles* CallFunc_LoadCampaignProfiles_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate27, bool CallFunc_IsValid_ReturnValue16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate28, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate29, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result, bool CallFunc_IsValid_ReturnValue17, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result2, bool CallFunc_HasCompletedQuest_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager3, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager4, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue3, bool CallFunc_IsValid_ReturnValue18, bool CallFunc_IsValid_ReturnValue19, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
