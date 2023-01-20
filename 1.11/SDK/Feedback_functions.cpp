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


// Function Feedback.Feedback_C.SetupAutoFillPlayerFields
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        KillersName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SpectatingName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeedback_C::SetupAutoFillPlayerFields(class FText KillersName, class FText SpectatingName, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2)
{
	static auto Func = Class->GetFunction("Feedback_C", "SetupAutoFillPlayerFields");

	Params::UFeedback_C_SetupAutoFillPlayerFields_Params Parms;
	Parms.KillersName = KillersName;
	Parms.SpectatingName = SpectatingName;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue2 = CallFunc_TextIsEmpty_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.Setup For Reporting Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeedback_C::Setup_For_Reporting_Player(class FText PlayerName, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("Feedback_C", "Setup For Reporting Player");

	Params::UFeedback_C_Setup_For_Reporting_Player_Params Parms;
	Parms.PlayerName = PlayerName;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.InitializeFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeedback_C::InitializeFeedback()
{
	static auto Func = Class->GetFunction("Feedback_C", "InitializeFeedback");

	Params::UFeedback_C_InitializeFeedback_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.IsAllTextNotEmpty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class FText                        CallFunc_GetText_ReturnValue2                                    ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UFeedback_C::IsAllTextNotEmpty(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue2, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("Feedback_C", "IsAllTextNotEmpty");

	Params::UFeedback_C_IsAllTextNotEmpty_Params Parms;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue2 = CallFunc_GetText_ReturnValue2;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue2 = CallFunc_TextIsEmpty_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Feedback.Feedback_C.AddButtonFeedbackTypes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeedback_C::AddButtonFeedbackTypes()
{
	static auto Func = Class->GetFunction("Feedback_C", "AddButtonFeedbackTypes");

	Params::UFeedback_C_AddButtonFeedbackTypes_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UFeedback_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("Feedback_C", "BindDelegates");

	Params::UFeedback_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFeedback_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("Feedback_C", "OnBeginIntro");

	Params::UFeedback_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeedback_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Feedback_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UFeedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeedback_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Feedback_C", "BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UFeedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.HandleTextChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFeedback_C::HandleTextChanged(class FText& Text)
{
	static auto Func = Class->GetFunction("Feedback_C", "HandleTextChanged");

	Params::UFeedback_C_HandleTextChanged_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeedback_C::OnActivated()
{
	static auto Func = Class->GetFunction("Feedback_C", "OnActivated");

	Params::UFeedback_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.ForceSelect_PopulateName_Killer_Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeedback_C::ForceSelect_PopulateName_Killer_Button()
{
	static auto Func = Class->GetFunction("Feedback_C", "ForceSelect_PopulateName_Killer_Button");

	Params::UFeedback_C_ForceSelect_PopulateName_Killer_Button_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.ForceSelect_PopulateName_Spectator_Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeedback_C::ForceSelect_PopulateName_Spectator_Button()
{
	static auto Func = Class->GetFunction("Feedback_C", "ForceSelect_PopulateName_Spectator_Button");

	Params::UFeedback_C_ForceSelect_PopulateName_Spectator_Button_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeedback_C::BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("Feedback_C", "BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature");

	Params::UFeedback_C_BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeedback_C::BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("Feedback_C", "BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature");

	Params::UFeedback_C_BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeedback_C::OnInitiateDebugInfoForFeedbackComplete()
{
	static auto Func = Class->GetFunction("Feedback_C", "OnInitiateDebugInfoForFeedbackComplete");

	Params::UFeedback_C_OnInitiateDebugInfoForFeedbackComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFeedback_C::Construct()
{
	static auto Func = Class->GetFunction("Feedback_C", "Construct");

	Params::UFeedback_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feedback.Feedback_C.ExecuteUbergraph_Feedback
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (ConstParm)
// bool                               CallFunc_IsAllTextNotEmpty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAllTextNotEmpty_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeedback_C::ExecuteUbergraph_Feedback(int32 EntryPoint, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class FText K2Node_CustomEvent_Text, bool CallFunc_IsAllTextNotEmpty_ReturnValue, bool CallFunc_IsAllTextNotEmpty_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_GetSelected_ReturnValue, class UIconTextButton_C* K2Node_Select_Default, bool CallFunc_GetSelected_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool K2Node_ComponentBoundEvent_Selected2, bool CallFunc_GetSelected_ReturnValue3, bool CallFunc_GetSelected_ReturnValue4, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, bool CallFunc_GetSelected_ReturnValue5)
{
	static auto Func = Class->GetFunction("Feedback_C", "ExecuteUbergraph_Feedback");

	Params::UFeedback_C_ExecuteUbergraph_Feedback_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_IsAllTextNotEmpty_ReturnValue = CallFunc_IsAllTextNotEmpty_ReturnValue;
	Parms.CallFunc_IsAllTextNotEmpty_ReturnValue2 = CallFunc_IsAllTextNotEmpty_ReturnValue2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSelected_ReturnValue2 = CallFunc_GetSelected_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Selected2 = K2Node_ComponentBoundEvent_Selected2;
	Parms.CallFunc_GetSelected_ReturnValue3 = CallFunc_GetSelected_ReturnValue3;
	Parms.CallFunc_GetSelected_ReturnValue4 = CallFunc_GetSelected_ReturnValue4;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.CallFunc_GetSelected_ReturnValue5 = CallFunc_GetSelected_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
