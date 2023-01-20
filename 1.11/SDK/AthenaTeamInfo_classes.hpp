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

// 0x31 (0x269 - 0x238)
// WidgetBlueprintGeneratedClass AthenaTeamInfo.AthenaTeamInfo_C
class UAthenaTeamInfo_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBoxSquadMembers;                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UAthenaTeamMemberInfo_C*>       SquadMembers;                                      // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAthenaTeamMemberInfo_C*>       DisconnectedSquadMembers;                          // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bAddFriendOptionsDisplayed;                        // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamInfo_C");
		return Clss;
	}

	void ClearSquadMembers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleSquadMutedChanged(TArray<bool>& TeamMuted, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleSquadTalkingChanged(TArray<bool>& TeamTalking, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleSquadMemberRemoved(bool FoundTeamMember, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable2, bool Temp_bool_True_if_break_was_hit_Variable2, bool CallFunc_Not_PreBool_ReturnValue2, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable3, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue3, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, TArray<float>& CallFunc_GetSquadHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetSquadHitPointFractions_ShieldFractions, class AFortPlayerStateAthena* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, class AFortPlayerStateAthena* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2);
	void HandleSquadRevivingChanged(TArray<bool>& TeamReviving, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleSquadMemberPlayerNamesChanged(int32 Temp_int_Variable, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleSquadDeadChanged(TArray<bool>& TeamDead, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleSquadDBNOChanged(TArray<bool>& TeamDBNO, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleSquadMemberAdded(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, TArray<float>& CallFunc_GetSquadHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetSquadHitPointFractions_ShieldFractions, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleSquadHitInfoChanged(TArray<float>& HealthFractions, TArray<float>& ShieldFractions, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, float CallFunc_Array_Get_Item, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item2, float CallFunc_Array_Get_Item3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ClearContents();
	void AppendSquadMember(class AFortPlayerStateAthena* PlayerState, int32 PlayerIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UAthenaTeamMemberInfo_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Construct();
	void HandlePartyLeft();
	void PreConstruct(bool IsDesignTime);
	void RolloutAddFriend();
	void ExecuteUbergraph_AthenaTeamInfo(int32 EntryPoint, class UAthenaTeamMemberInfo_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, bool K2Node_Event_IsDesignTime, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, TArray<bool>& CallFunc_GetSquadMuted_MutedStates, TArray<bool>& CallFunc_GetSquadTalking_TalkingStates, TArray<bool>& CallFunc_GetSquadReviving_RevivingStates, TArray<bool>& CallFunc_GetSquadDBNO_DBNOStates, TArray<bool>& CallFunc_GetSquadDead_DeadStates, TArray<float>& CallFunc_GetSquadHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetSquadHitPointFractions_ShieldFractions, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 Temp_int_Array_Index_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable3, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item, class AFortPlayerStateAthena* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue3, bool CallFunc_IsValid_ReturnValue2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
