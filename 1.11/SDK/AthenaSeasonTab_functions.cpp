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


// Function AthenaSeasonTab.AthenaSeasonTab_C.SetupViewedItemName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTokenType*              K2Node_DynamicCast_AsFort_Token_Type                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()

void UAthenaSeasonTab_C::SetupViewedItemName(class UFortItem* Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, class UFortTokenType* K2Node_DynamicCast_AsFort_Token_Type, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "SetupViewedItemName");

	Params::UAthenaSeasonTab_C_SetupViewedItemName_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Token_Type = K2Node_DynamicCast_AsFort_Token_Type;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdatePageCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumWidgets_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()

void UAthenaSeasonTab_C::UpdatePageCount(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "UpdatePageCount");

	Params::UAthenaSeasonTab_C_UpdatePageCount_Params Parms;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetNumWidgets_ReturnValue = CallFunc_GetNumWidgets_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.UpdateSeasonPurchaseState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetName_ReturnValue                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int32                              CallFunc_GetSeasonPassLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OwnsSeasonPass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonTab_C::UpdateSeasonPurchaseState(class FText CallFunc_GetName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetSeasonPassLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, class FText CallFunc_Format_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OwnsSeasonPass_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "UpdateSeasonPurchaseState");

	Params::UAthenaSeasonTab_C_UpdateSeasonPurchaseState_Params Parms;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetSeasonPassLevel_ReturnValue = CallFunc_GetSeasonPassLevel_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_GetLevelInfo_ReturnValue = CallFunc_GetLevelInfo_ReturnValue;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_OwnsSeasonPass_ReturnValue = CallFunc_OwnsSeasonPass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.SetupViewedItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    ()
// class FText                        CallFunc_GetShortDescription_ReturnValue                         ()
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// class FName                        CallFunc_MakeLiteralName_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::SetupViewedItemData(class UFortItem* Item, class FName CallFunc_MakeLiteralName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "SetupViewedItemData");

	Params::UAthenaSeasonTab_C_SetupViewedItemData_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue2 = CallFunc_MakeLiteralName_ReturnValue2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue3 = CallFunc_MakeLiteralName_ReturnValue3;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.SelectPageByLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TargetLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USeasonPassPageWidget*       K2Node_DynamicCast_AsSeason_Pass_Page_Widget                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainsLevel_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::SelectPageByLevel(int32 TargetLevel, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class USeasonPassPageWidget* K2Node_DynamicCast_AsSeason_Pass_Page_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_ContainsLevel_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "SelectPageByLevel");

	Params::UAthenaSeasonTab_C_SelectPageByLevel_Params Parms;
	Parms.TargetLevel = TargetLevel;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsSeason_Pass_Page_Widget = K2Node_DynamicCast_AsSeason_Pass_Page_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_ContainsLevel_ReturnValue = CallFunc_ContainsLevel_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.GenerateLevelWidgets
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSeasonPassLevelInfo*    LevelInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USeasonPassLevelWidget*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class USeasonPassLevelWidget*>CallFunc_AddLevelWidgets_LevelWidgets                            (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonPageWidget_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFull_Full                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<class USeasonPassLevelWidget*> UAthenaSeasonTab_C::GenerateLevelWidgets(class UFortSeasonPassLevelInfo* LevelInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class USeasonPassLevelWidget*>& CallFunc_AddLevelWidgets_LevelWidgets, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonPageWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsFull_Full, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "GenerateLevelWidgets");

	Params::UAthenaSeasonTab_C_GenerateLevelWidgets_Params Parms;
	Parms.LevelInfo = LevelInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddLevelWidgets_LevelWidgets = CallFunc_AddLevelWidgets_LevelWidgets;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsFull_Full = CallFunc_IsFull_Full;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "Construct");

	Params::UAthenaSeasonTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "OnActivated");

	Params::UAthenaSeasonTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "OnDeactivated");

	Params::UAthenaSeasonTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnNavigateToLevel
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::OnNavigateToLevel(int32 Level)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "OnNavigateToLevel");

	Params::UAthenaSeasonTab_C_OnNavigateToLevel_Params Parms;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::OnStartReadingOffers()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "OnStartReadingOffers");

	Params::UAthenaSeasonTab_C_OnStartReadingOffers_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::OnOffersGenerated()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "OnOffersGenerated");

	Params::UAthenaSeasonTab_C_OnOffersGenerated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.GenerateOfferWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortDirectAcquisitionOfferInfo*OfferData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo* OfferData)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "GenerateOfferWidget");

	Params::UAthenaSeasonTab_C_GenerateOfferWidget_Params Parms;
	Parms.OfferData = OfferData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnSeasonPassChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::OnSeasonPassChanged()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "OnSeasonPassChanged");

	Params::UAthenaSeasonTab_C_OnSeasonPassChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonTab_C_BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.OnLevelsGenerated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::OnLevelsGenerated()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "OnLevelsGenerated");

	Params::UAthenaSeasonTab_C_OnLevelsGenerated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonTab_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonTab_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.HandlePageLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::HandlePageLeft()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "HandlePageLeft");

	Params::UAthenaSeasonTab_C_HandlePageLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.HandlePageRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::HandlePageRight()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "HandlePageRight");

	Params::UAthenaSeasonTab_C_HandlePageRight_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature");

	Params::UAthenaSeasonTab_C_BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonTab_C_BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::NoOffersAvailable()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "NoOffersAvailable");

	Params::UAthenaSeasonTab_C_NoOffersAvailable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.ScrollPositive
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::ScrollPositive()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "ScrollPositive");

	Params::UAthenaSeasonTab_C_ScrollPositive_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.ScrollNegative
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonTab_C::ScrollNegative()
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "ScrollNegative");

	Params::UAthenaSeasonTab_C_ScrollNegative_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonTab.AthenaSeasonTab_C.ExecuteUbergraph_AthenaSeasonTab
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*K2Node_Event_OfferData                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentSeasonName_ReturnValue                        ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAthenaDirectAcquisitionMTXDetails_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Level                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonPageWidget_C*   K2Node_DynamicCast_AsAthena_Season_Page_Widget                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSeasonPassLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFirstLevel_FirstLevel                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonLevelConfirmationModal_C*CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeasonPassLevel_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeasonPassLevel_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetSeasonStoreEndDate_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// TMap<int32, class UFortSeasonPassLevelInfo*>CallFunc_GetAllLevelInfos_ReturnValue                            (ZeroConstructor)
// int32                              CallFunc_GetSeasonPassLevelMax_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonTab_C::ExecuteUbergraph_AthenaSeasonTab(int32 EntryPoint, class UFortDirectAcquisitionOfferInfo* K2Node_Event_OfferData, bool CallFunc_IsValid_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class FText CallFunc_GetCurrentSeasonName_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_TextToUpper_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaDirectAcquisitionMTXDetails_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 K2Node_Event_Level, bool CallFunc_IsValid_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UAthenaSeasonPageWidget_C* K2Node_DynamicCast_AsAthena_Season_Page_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSeasonPassLevel_ReturnValue, int32 CallFunc_GetFirstLevel_FirstLevel, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UAthenaSeasonLevelConfirmationModal_C* CallFunc_Create_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetSeasonPassLevel_ReturnValue2, int32 CallFunc_GetSeasonPassLevel_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue4, const struct FDateTime& CallFunc_GetSeasonStoreEndDate_ReturnValue, TMap<int32, class UFortSeasonPassLevelInfo*> CallFunc_GetAllLevelInfos_ReturnValue, int32 CallFunc_GetSeasonPassLevelMax_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonTab_C", "ExecuteUbergraph_AthenaSeasonTab");

	Params::UAthenaSeasonTab_C_ExecuteUbergraph_AthenaSeasonTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OfferData = K2Node_Event_OfferData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.CallFunc_GetCurrentSeasonName_ReturnValue = CallFunc_GetCurrentSeasonName_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_Event_Level = K2Node_Event_Level;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.K2Node_DynamicCast_AsAthena_Season_Page_Widget = K2Node_DynamicCast_AsAthena_Season_Page_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSeasonPassLevel_ReturnValue = CallFunc_GetSeasonPassLevel_ReturnValue;
	Parms.CallFunc_GetFirstLevel_FirstLevel = CallFunc_GetFirstLevel_FirstLevel;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetSeasonPassLevel_ReturnValue2 = CallFunc_GetSeasonPassLevel_ReturnValue2;
	Parms.CallFunc_GetSeasonPassLevel_ReturnValue3 = CallFunc_GetSeasonPassLevel_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLevelInfo_ReturnValue = CallFunc_GetLevelInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_GetSeasonStoreEndDate_ReturnValue = CallFunc_GetSeasonStoreEndDate_ReturnValue;
	Parms.CallFunc_GetAllLevelInfos_ReturnValue = CallFunc_GetAllLevelInfos_ReturnValue;
	Parms.CallFunc_GetSeasonPassLevelMax_ReturnValue = CallFunc_GetSeasonPassLevelMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
