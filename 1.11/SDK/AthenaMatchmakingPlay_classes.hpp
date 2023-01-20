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

// 0x50 (0x348 - 0x2F8)
// WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C
class UAthenaMatchmakingPlay_C : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewModeSelected;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     B_ChangeGameMode;                                  // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CB_LTM_Bang;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_CurGameMode;                                    // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      GameModeDescription;                               // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MatchmakingSpinner;                                // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SelectModeOverlay;                                 // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  PlaylistsUpdated;                                  // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingPlay_C");
		return Clss;
	}

	void CheckForLTMBangs(bool* BangAvail, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsEvent1QueueEnabled_ReturnValue, bool CallFunc_IsEvent8QueueEnabled_ReturnValue, bool CallFunc_IsEvent7QueueEnabled_ReturnValue, bool CallFunc_IsEvent6QueueEnabled_ReturnValue, bool CallFunc_IsEvent5QueueEnabled_ReturnValue, bool CallFunc_IsEvent4QueueEnabled_ReturnValue, bool CallFunc_IsEvent3QueueEnabled_ReturnValue, bool CallFunc_IsEvent2QueueEnabled_ReturnValue, bool CallFunc_IsFiftyFiftyQueueEnabled_ReturnValue);
	void OpenPlayOptions(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UAthenaMatchmakingOptionsDisplay_v2_C* CallFunc_Create_ReturnValue);
	void FillChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void PlaylistChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void SetAutoFillOptions(TArray<class FText>& K2Node_MakeArray_Array);
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetPlayButtonState(bool bCanMatchmake);
	void Construct();
	void SetCancelButtonState(bool bIsMatchmaking);
	void BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void NewModeSelected_Display();
	void RefreshBang();
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnAvailablePlaylistsUpdated();
	void OnPlayButtonUpdated(bool bShowPlayButton);
	void ExecuteUbergraph_AthenaMatchmakingPlay(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, enum class EFortAthenaPlaylist Temp_byte_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, enum class EFortAthenaPlaylist Temp_byte_Variable2, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, bool Temp_bool_Variable2, class FText Temp_text_Variable26, enum class EFortAthenaPlaylist Temp_byte_Variable3, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, enum class EFortAthenaPlaylist Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable13, enum class ESlateVisibility Temp_byte_Variable14, enum class ESlateVisibility Temp_byte_Variable15, enum class ESlateVisibility Temp_byte_Variable16, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable17, enum class ESlateVisibility Temp_byte_Variable18, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable19, enum class ESlateVisibility Temp_byte_Variable20, class UCommonButton* K2Node_ComponentBoundEvent_Button3, bool K2Node_Event_bCanMatchmake, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsMatchmaking, class FText K2Node_Select_Default, class FText K2Node_Select2_Default, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button2, bool K2Node_DynamicCast_bSuccess2, int32 K2Node_ComponentBoundEvent_Value2, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default, int32 K2Node_ComponentBoundEvent_Value, bool CallFunc_Conv_IntToBool_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class FText K2Node_Select5_Default, bool CallFunc_CheckForLTMBangs_BangAvail, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility K2Node_Select6_Default, enum class ESlateVisibility K2Node_Select7_Default, bool K2Node_Event_bShowPlayButton, enum class ESlateVisibility K2Node_Select8_Default);
	void PlaylistsUpdated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
