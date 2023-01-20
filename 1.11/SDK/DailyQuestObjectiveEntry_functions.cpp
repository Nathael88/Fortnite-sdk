#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateFromObjectiveInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMcpQuestObjectiveInfo  ObjectiveInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UDailyQuestObjectiveEntry_C::UpdateFromObjectiveInfo(const struct FFortMcpQuestObjectiveInfo& ObjectiveInfo)
{
	static auto Func = Class->GetFunction("DailyQuestObjectiveEntry_C", "UpdateFromObjectiveInfo");

	Params::UDailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo_Params Parms;
	Parms.ObjectiveInfo = ObjectiveInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.PlayAppearAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDailyQuestObjectiveEntry_C::PlayAppearAnimation()
{
	static auto Func = Class->GetFunction("DailyQuestObjectiveEntry_C", "PlayAppearAnimation");

	Params::UDailyQuestObjectiveEntry_C_PlayAppearAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*     Objective                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AchievedCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetOwningQuest_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRewardInfo             CallFunc_GetRewardInfo_BP_ReturnValue                            ()
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyQuestObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("DailyQuestObjectiveEntry_C", "Update");

	Params::UDailyQuestObjectiveEntry_C_Update_Params Parms;
	Parms.Objective = Objective;
	Parms.AchievedCount = AchievedCount;
	Parms.CallFunc_GetOwningQuest_ReturnValue = CallFunc_GetOwningQuest_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue = CallFunc_SpawnTooltipContext_ReturnValue;
	Parms.CallFunc_GetRewardInfo_BP_ReturnValue = CallFunc_GetRewardInfo_BP_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*     Objective                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AchievedCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyQuestObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective, int32 AchievedCount)
{
	static auto Func = Class->GetFunction("DailyQuestObjectiveEntry_C", "UpdateProgress");

	Params::UDailyQuestObjectiveEntry_C_UpdateProgress_Params Parms;
	Parms.Objective = Objective;
	Parms.AchievedCount = AchievedCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyQuestObjectiveEntry_C::SetData(class UObject* InData)
{
	static auto Func = Class->GetFunction("DailyQuestObjectiveEntry_C", "SetData");

	Params::UDailyQuestObjectiveEntry_C_SetData_Params Parms;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.ExecuteUbergraph_DailyQuestObjectiveEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestObjectiveInfo*     K2Node_DynamicCast_AsFort_Quest_Objective_Info                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyQuestObjectiveEntry_C::ExecuteUbergraph_DailyQuestObjectiveEntry(int32 EntryPoint, class UObject* K2Node_Event_InData, class UFortQuestObjectiveInfo* K2Node_DynamicCast_AsFort_Quest_Objective_Info, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("DailyQuestObjectiveEntry_C", "ExecuteUbergraph_DailyQuestObjectiveEntry");

	Params::UDailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_DynamicCast_AsFort_Quest_Objective_Info = K2Node_DynamicCast_AsFort_Quest_Objective_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
