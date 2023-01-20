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

// 0x30 (0x258 - 0x228)
// WidgetBlueprintGeneratedClass AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C
class UAthenaSeasonLevelPaidRewardsWidget_C : public USeasonPassLevelWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         NotPurchasedDarken;                                // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PaidRewardsBorder;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            PaidRewardsGrid;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UAthenaSeasonReward_C*>         RewardWidgets;                                     // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonLevelPaidRewardsWidget_C");
		return Clss;
	}

	void UpdateStyling(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, bool CallFunc_IsFreeUnlocked_ReturnValue, bool CallFunc_IsPaidUnlocked_ReturnValue, class UClass* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default);
	void OnSetup();
	void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
	void OnNavigateTo();
	void ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue2, TArray<class UFortItem*>& CallFunc_GetRewardItems_ReturnValue, bool CallFunc_IsFreeClaimed_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsPaidUnlocked_ReturnValue, bool CallFunc_IsPaidClaimed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_FreeUnlocked, bool K2Node_Event_PaidUnlocked, int32 Temp_int_Array_Index_Variable2, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, class UAthenaSeasonReward_C* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, class UAthenaSeasonReward_C* CallFunc_Array_Get_Item3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonReward_C* CallFunc_Create_ReturnValue, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue3, bool CallFunc_IsFreeClaimed_ReturnValue2, bool CallFunc_IsPaidUnlocked_ReturnValue2, bool CallFunc_IsPaidClaimed_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
