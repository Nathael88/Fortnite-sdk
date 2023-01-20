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


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.CheckForLTMBangs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BangAvail                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEvent1QueueEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEvent8QueueEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEvent7QueueEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEvent6QueueEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEvent5QueueEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEvent4QueueEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEvent3QueueEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEvent2QueueEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFiftyFiftyQueueEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::CheckForLTMBangs(bool* BangAvail, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsEvent1QueueEnabled_ReturnValue, bool CallFunc_IsEvent8QueueEnabled_ReturnValue, bool CallFunc_IsEvent7QueueEnabled_ReturnValue, bool CallFunc_IsEvent6QueueEnabled_ReturnValue, bool CallFunc_IsEvent5QueueEnabled_ReturnValue, bool CallFunc_IsEvent4QueueEnabled_ReturnValue, bool CallFunc_IsEvent3QueueEnabled_ReturnValue, bool CallFunc_IsEvent2QueueEnabled_ReturnValue, bool CallFunc_IsFiftyFiftyQueueEnabled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "CheckForLTMBangs");

	Params::UAthenaMatchmakingPlay_C_CheckForLTMBangs_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsEvent1QueueEnabled_ReturnValue = CallFunc_IsEvent1QueueEnabled_ReturnValue;
	Parms.CallFunc_IsEvent8QueueEnabled_ReturnValue = CallFunc_IsEvent8QueueEnabled_ReturnValue;
	Parms.CallFunc_IsEvent7QueueEnabled_ReturnValue = CallFunc_IsEvent7QueueEnabled_ReturnValue;
	Parms.CallFunc_IsEvent6QueueEnabled_ReturnValue = CallFunc_IsEvent6QueueEnabled_ReturnValue;
	Parms.CallFunc_IsEvent5QueueEnabled_ReturnValue = CallFunc_IsEvent5QueueEnabled_ReturnValue;
	Parms.CallFunc_IsEvent4QueueEnabled_ReturnValue = CallFunc_IsEvent4QueueEnabled_ReturnValue;
	Parms.CallFunc_IsEvent3QueueEnabled_ReturnValue = CallFunc_IsEvent3QueueEnabled_ReturnValue;
	Parms.CallFunc_IsEvent2QueueEnabled_ReturnValue = CallFunc_IsEvent2QueueEnabled_ReturnValue;
	Parms.CallFunc_IsFiftyFiftyQueueEnabled_ReturnValue = CallFunc_IsFiftyFiftyQueueEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BangAvail != nullptr)
		*BangAvail = Parms.BangAvail;

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchmakingOptionsDisplay_v2_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::OpenPlayOptions(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UAthenaMatchmakingOptionsDisplay_v2_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OpenPlayOptions");

	Params::UAthenaMatchmakingPlay_C_OpenPlayOptions_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.FillChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDirection                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::FillChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "FillChange");

	Params::UAthenaMatchmakingPlay_C_FillChange_Params Parms;
	Parms.bDirection = bDirection;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDirection                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::PlaylistChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "PlaylistChange");

	Params::UAthenaMatchmakingPlay_C_PlaylistChange_Params Parms;
	Parms.bDirection = bDirection;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetAutoFillOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UAthenaMatchmakingPlay_C::SetAutoFillOptions(TArray<class FText>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "SetAutoFillOptions");

	Params::UAthenaMatchmakingPlay_C_SetAutoFillOptions_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetPlayButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanMatchmake                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::SetPlayButtonState(bool bCanMatchmake)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "SetPlayButtonState");

	Params::UAthenaMatchmakingPlay_C_SetPlayButtonState_Params Parms;
	Parms.bCanMatchmake = bCanMatchmake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "Construct");

	Params::UAthenaMatchmakingPlay_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetCancelButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsMatchmaking                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::SetCancelButtonState(bool bIsMatchmaking)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "SetCancelButtonState");

	Params::UAthenaMatchmakingPlay_C_SetCancelButtonState_Params Parms;
	Parms.bIsMatchmaking = bIsMatchmaking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.NewModeSelected_Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::NewModeSelected_Display()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "NewModeSelected_Display");

	Params::UAthenaMatchmakingPlay_C_NewModeSelected_Display_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.RefreshBang
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::RefreshBang()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "RefreshBang");

	Params::UAthenaMatchmakingPlay_C_RefreshBang_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::OnAvailablePlaylistsUpdated()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnAvailablePlaylistsUpdated");

	Params::UAthenaMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowPlayButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::OnPlayButtonUpdated(bool bShowPlayButton)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnPlayButtonUpdated");

	Params::UAthenaMatchmakingPlay_C_OnPlayButtonUpdated_Params Parms;
	Parms.bShowPlayButton = bShowPlayButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// enum class EFortAthenaPlaylist     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        Temp_text_Variable9                                              ()
// class FText                        Temp_text_Variable10                                             ()
// class FText                        Temp_text_Variable11                                             ()
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable13                                             ()
// enum class EFortAthenaPlaylist     Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable14                                             ()
// class FText                        Temp_text_Variable15                                             ()
// class FText                        Temp_text_Variable16                                             ()
// class FText                        Temp_text_Variable17                                             ()
// class FText                        Temp_text_Variable18                                             ()
// class FText                        Temp_text_Variable19                                             ()
// class FText                        Temp_text_Variable20                                             ()
// class FText                        Temp_text_Variable21                                             ()
// class FText                        Temp_text_Variable22                                             ()
// class FText                        Temp_text_Variable23                                             ()
// class FText                        Temp_text_Variable24                                             ()
// class FText                        Temp_text_Variable25                                             ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable26                                             ()
// enum class EFortAthenaPlaylist     Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable27                                             ()
// class FText                        Temp_text_Variable28                                             ()
// class FText                        Temp_text_Variable29                                             ()
// class FText                        Temp_text_Variable30                                             ()
// class FText                        Temp_text_Variable31                                             ()
// class FText                        Temp_text_Variable32                                             ()
// class FText                        Temp_text_Variable33                                             ()
// class FText                        Temp_text_Variable34                                             ()
// class FText                        Temp_text_Variable35                                             ()
// class FText                        Temp_text_Variable36                                             ()
// class FText                        Temp_text_Variable37                                             ()
// class FText                        Temp_text_Variable38                                             ()
// enum class EFortAthenaPlaylist     Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable20                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCanMatchmake                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsMatchmaking                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        K2Node_Select2_Default                                           ()
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Value2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           ()
// class FText                        K2Node_Select4_Default                                           ()
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select5_Default                                           ()
// bool                               CallFunc_CheckForLTMBangs_BangAvail                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowPlayButton                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::ExecuteUbergraph_AthenaMatchmakingPlay(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, enum class EFortAthenaPlaylist Temp_byte_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, enum class EFortAthenaPlaylist Temp_byte_Variable2, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, bool Temp_bool_Variable2, class FText Temp_text_Variable26, enum class EFortAthenaPlaylist Temp_byte_Variable3, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, enum class EFortAthenaPlaylist Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable13, enum class ESlateVisibility Temp_byte_Variable14, enum class ESlateVisibility Temp_byte_Variable15, enum class ESlateVisibility Temp_byte_Variable16, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable17, enum class ESlateVisibility Temp_byte_Variable18, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable19, enum class ESlateVisibility Temp_byte_Variable20, class UCommonButton* K2Node_ComponentBoundEvent_Button3, bool K2Node_Event_bCanMatchmake, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsMatchmaking, class FText K2Node_Select_Default, class FText K2Node_Select2_Default, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button2, bool K2Node_DynamicCast_bSuccess2, int32 K2Node_ComponentBoundEvent_Value2, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default, int32 K2Node_ComponentBoundEvent_Value, bool CallFunc_Conv_IntToBool_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class FText K2Node_Select5_Default, bool CallFunc_CheckForLTMBangs_BangAvail, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility K2Node_Select6_Default, enum class ESlateVisibility K2Node_Select7_Default, bool K2Node_Event_bShowPlayButton, enum class ESlateVisibility K2Node_Select8_Default)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "ExecuteUbergraph_AthenaMatchmakingPlay");

	Params::UAthenaMatchmakingPlay_C_ExecuteUbergraph_AthenaMatchmakingPlay_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable13 = Temp_byte_Variable13;
	Parms.Temp_byte_Variable14 = Temp_byte_Variable14;
	Parms.Temp_byte_Variable15 = Temp_byte_Variable15;
	Parms.Temp_byte_Variable16 = Temp_byte_Variable16;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable17 = Temp_byte_Variable17;
	Parms.Temp_byte_Variable18 = Temp_byte_Variable18;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable19 = Temp_byte_Variable19;
	Parms.Temp_byte_Variable20 = Temp_byte_Variable20;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_Event_bCanMatchmake = K2Node_Event_bCanMatchmake;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bIsMatchmaking = K2Node_Event_bIsMatchmaking;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button2 = K2Node_DynamicCast_AsIcon_Text_Button2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_ComponentBoundEvent_Value2 = K2Node_ComponentBoundEvent_Value2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_CheckForLTMBangs_BangAvail = CallFunc_CheckForLTMBangs_BangAvail;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.K2Node_Event_bShowPlayButton = K2Node_Event_bShowPlayButton;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::PlaylistsUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "PlaylistsUpdated__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
