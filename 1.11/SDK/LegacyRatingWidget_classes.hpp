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

// 0x1271 (0x19D1 - 0x760)
// WidgetBlueprintGeneratedClass LegacyRatingWidget.LegacyRatingWidget_C
class ULegacyRatingWidget_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x760(0x8)(Transient, DuplicateTransient)
	class UBorder*                               Border_Base;                                       // 0x768(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox;                                     // 0x770(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortNumericTextBlock*                 NumericText_RatingValue;                           // 0x778(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x780(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        RatingValue;                                       // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2771[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x790(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        InterpDuration;                                    // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2772[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   MBrush_Silhouette;                                 // 0x7C0(0x2D0)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                   MBrush_Chamfer;                                    // 0xA90(0x2D0)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                   MBrush_Shadow;                                     // 0xD60(0x2D0)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                   MBrush_Icon;                                       // 0x1030(0x2D0)(Edit, BlueprintVisible)
	bool                                         OverrideDefaultColor;                              // 0x1300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2773[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color_Light;                                       // 0x1304(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_Medium;                                      // 0x1314(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_Dark;                                        // 0x1324(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_Color_Light;                               // 0x1334(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_Color_Medium;                              // 0x1344(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_Color_Dark;                                // 0x1354(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2774[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   MBrush_Icon_Alt;                                   // 0x1368(0x2D0)(Edit, BlueprintVisible)
	bool                                         UseAlternateIcon;                                  // 0x1638(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2775[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   MBrush_Shadow_Alt;                                 // 0x1640(0x2D0)(Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                  MMargin_Alt;                                       // 0x1910(0x60)(Edit, BlueprintVisible, NoDestructor)
	struct FFortMultiSizeMargin                  MMargin;                                           // 0x1970(0x60)(Edit, BlueprintVisible, NoDestructor)
	bool                                         ShowTeamPowerRating;                               // 0x19D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LegacyRatingWidget_C");
		return Clss;
	}

	void SetShouldShowTeamPowerRating(bool ShowTeamRating);
	void Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color);
	void Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, class FName Parameter, const struct FFortMultiSizeBrush& MBrush, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
	void Update_Base_Material(class UMaterialInstanceDynamic* Mid, bool Temp_bool_Variable, const struct FFortMultiSizeBrush& K2Node_Select_Default, bool Temp_bool_Variable2, const struct FFortMultiSizeBrush& K2Node_Select2_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Update_From_Unique_ID(class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetTeamHomebaseRating_Rating, float CallFunc_GetTeamHomebaseRating_ProgressFraction, bool CallFunc_GetTeamHomebaseRating_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue);
	void Set_Unique_ID(const struct FUniqueNetIdRepl& ID);
	void Update();
	void Set_Padding(bool Temp_bool_Variable, const struct FFortMultiSizeMargin& K2Node_Select_Default, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue);
	void Set_Size_Box(const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Update_Rating_Value(int32 Rating, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable2, const struct FVector2D& Temp_struct_Variable3, const struct FVector2D& Temp_struct_Variable4, const struct FVector2D& Temp_struct_Variable5, const struct FVector2D& Temp_struct_Variable6, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateFontInfo& CallFunc_GetCurrentFont_ReturnValue, enum class EFortBrushSize Temp_byte_Variable, const struct FVector2D& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void PlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId);
	void Construct();
	void PlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_LegacyRatingWidget(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
