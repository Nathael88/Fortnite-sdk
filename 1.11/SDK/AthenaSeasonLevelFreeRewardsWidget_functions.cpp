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


// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.UpdateStyling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFreeUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonLevelFreeRewardsWidget_C::UpdateStyling(bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, bool CallFunc_IsFreeUnlocked_ReturnValue, class UClass* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSeasonLevelFreeRewardsWidget_C", "UpdateStyling");

	Params::UAthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.CallFunc_GetLevelInfo_ReturnValue = CallFunc_GetLevelInfo_ReturnValue;
	Parms.CallFunc_IsFreeUnlocked_ReturnValue = CallFunc_IsFreeUnlocked_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnSetup
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonLevelFreeRewardsWidget_C::OnSetup()
{
	static auto Func = Class->GetFunction("AthenaSeasonLevelFreeRewardsWidget_C", "OnSetup");

	Params::UAthenaSeasonLevelFreeRewardsWidget_C_OnSetup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnLockedStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               FreeUnlocked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PaidUnlocked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonLevelFreeRewardsWidget_C::OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked)
{
	static auto Func = Class->GetFunction("AthenaSeasonLevelFreeRewardsWidget_C", "OnLockedStatusChanged");

	Params::UAthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged_Params Parms;
	Parms.FreeUnlocked = FreeUnlocked;
	Parms.PaidUnlocked = PaidUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFreeClaimed_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFreeUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFreeClaimed_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetRewardItems_ReturnValue                              (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFreeClaimed_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFreeUnlocked_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFreeClaimed_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_FreeUnlocked                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PaidUnlocked                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaSeasonReward_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonReward_C*       CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonLevelFreeRewardsWidget_C::ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget(int32 EntryPoint, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsFreeClaimed_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsFreeUnlocked_ReturnValue, bool CallFunc_IsFreeClaimed_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue2, int32 Temp_int_Loop_Counter_Variable2, TArray<class UFortItem*>& CallFunc_GetRewardItems_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue3, bool CallFunc_IsFreeClaimed_ReturnValue3, bool CallFunc_IsFreeUnlocked_ReturnValue2, bool CallFunc_IsFreeClaimed_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue2, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable2, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool K2Node_Event_FreeUnlocked, bool K2Node_Event_PaidUnlocked, class UAthenaSeasonReward_C* CallFunc_Create_ReturnValue, class UAthenaSeasonReward_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonLevelFreeRewardsWidget_C", "ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget");

	Params::UAthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLevelInfo_ReturnValue = CallFunc_GetLevelInfo_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsFreeClaimed_ReturnValue = CallFunc_IsFreeClaimed_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsFreeUnlocked_ReturnValue = CallFunc_IsFreeUnlocked_ReturnValue;
	Parms.CallFunc_IsFreeClaimed_ReturnValue2 = CallFunc_IsFreeClaimed_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetLevelInfo_ReturnValue2 = CallFunc_GetLevelInfo_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_GetRewardItems_ReturnValue = CallFunc_GetRewardItems_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetLevelInfo_ReturnValue3 = CallFunc_GetLevelInfo_ReturnValue3;
	Parms.CallFunc_IsFreeClaimed_ReturnValue3 = CallFunc_IsFreeClaimed_ReturnValue3;
	Parms.CallFunc_IsFreeUnlocked_ReturnValue2 = CallFunc_IsFreeUnlocked_ReturnValue2;
	Parms.CallFunc_IsFreeClaimed_ReturnValue4 = CallFunc_IsFreeClaimed_ReturnValue4;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.K2Node_Event_FreeUnlocked = K2Node_Event_FreeUnlocked;
	Parms.K2Node_Event_PaidUnlocked = K2Node_Event_PaidUnlocked;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
