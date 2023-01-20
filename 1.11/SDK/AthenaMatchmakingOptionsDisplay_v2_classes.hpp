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

// 0xD1 (0x4B9 - 0x3E8)
// WidgetBlueprintGeneratedClass AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C
class UAthenaMatchmakingOptionsDisplay_v2_C : public UFortActivatablePanel
{
public:
	uint8                                        Pad_2665[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn_Details;                                    // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  B_GM_Duo;                                          // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  B_GM_LTM;                                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  B_GM_Solo;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  B_GM_Squad;                                        // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_0;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ClickBlocker;                                      // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_HoveredGameMode;                                // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_HoveredModeDescription;                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GameModeContainer;                              // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_Cancel;                                      // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthenaMatchmakingPlay_C*              Parent;                                            // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          DebugList_StandardModes;                           // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAthena_Matchmaking_GameModeButton_C*> MyStandardGameModeButtons;                         // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAthena_Matchmaking_SpecialEventButton_C* MyLTM;                                             // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastHoveredStandardModeIndex;                      // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2666[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAthena_Matchmaking_GameModeButton_C*> MyActiveStandardGameModeButtons;                   // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        SM_Button_IndexMax;                                // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SM_Button_IndexCurrent;                            // 0x4B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortAthenaPlaylist               LTMPlaylist;                                       // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingOptionsDisplay_v2_C");
		return Clss;
	}

	struct FEventReply On_ClickBlocker_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void InitializeGameModeButtons();
	void NoLTMAvailable();
	void UpdateLTM(int32 Temp_int_Array_Index_Variable, TArray<enum class EFortAthenaPlaylist>& CallFunc_GetActivePlaylists_ReturnValue, int32 Temp_int_Loop_Counter_Variable, enum class EFortAthenaPlaylist CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue2, bool CallFunc_NotEqual_ByteByte_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue);
	void HandleStandardModeButtonIndex(bool Increment, int32* NewIndex, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	class UWidget* Handle_Navigate_StandardModes_Down(enum class EUINavigation Navigation, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, class UWidget* Temp_object_Variable5, int32 CallFunc_HandleStandardModeButtonIndex_NewIndex, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, class UWidget* K2Node_Select_Default);
	class UWidget* Handle_Navigate_StandardModes_Up(enum class EUINavigation Navigation, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, class UWidget* Temp_object_Variable5, int32 CallFunc_HandleStandardModeButtonIndex_NewIndex, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, class UWidget* K2Node_Select_Default);
	void UpdateStandardGameModeButtonAvailibilty(int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue3, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item2, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue3);
	void SetupButtonBindings(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* Handle_Navigate_Left(enum class EUINavigation Navigation, bool Temp_bool_Variable, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, class UWidget* Temp_object_Variable5, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select2_Default);
	class UWidget* Handle_Navigate_Right(enum class EUINavigation Navigation, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, class UWidget* Temp_object_Variable5, class UWidget* Temp_object_Variable6, class UWidget* K2Node_Select_Default);
	void ClearLTM();
	void AddLTM(enum class EFortAthenaPlaylist LTMPlaylist, bool AddSpecialStyle, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void ClearStandardGameModes();
	void AddStandardGameModes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Create_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CloseMatchmakingOptions(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Handle_InputAction_Cancel(bool* Passthrough);
	void SetupInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnActivated();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnGameModeButtonSelected(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton);
	void OnModeButtonHovered(class UAthena_Matchmaking_GameModeButton_C* HoveredButton);
	void PlaylistsUpdated();
	void ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2(int32 EntryPoint, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, TArray<class UAthena_Matchmaking_GameModeButton_C*>& K2Node_MakeArray_Array, class UAthena_Matchmaking_GameModeButton_C* K2Node_CustomEvent_SelectedGameModeButton, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_SetCurrentPlaylist_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UAthena_Matchmaking_GameModeButton_C* K2Node_CustomEvent_HoveredButton, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue3, TArray<enum class EFortAthenaPlaylist>& CallFunc_GetActivePlaylists_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
