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


// Function RotatorSelector.RotatorSelector_C.Update Options
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URotatorSelector_C::Update_Options(TArray<class FText>& NewParam)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "Update Options");

	Params::URotatorSelector_C_Update_Options_Params Parms;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URotatorSelector_C::Center_on_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "Center on Widget");

	Params::URotatorSelector_C_Center_on_Widget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Display_Text                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                Options                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Hover_Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*            Tab_Tooltip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URotatorSelector_C::Initialize(class FText Display_Text, TArray<class FText>& Options, class FText Hover_Text, class UCommonTextBlock* Tab_Tooltip)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "Initialize");

	Params::URotatorSelector_C_Initialize_Params Parms;
	Parms.Display_Text = Display_Text;
	Parms.Options = Options;
	Parms.Hover_Text = Hover_Text;
	Parms.Tab_Tooltip = Tab_Tooltip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Currently_Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URotatorSelector_C::Update_Row_Selector(int32 Currently_Selected)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "Update Row Selector");

	Params::URotatorSelector_C_Update_Row_Selector_Params Parms;
	Parms.Currently_Selected = Currently_Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URotatorSelector_C::Construct()
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "Construct");

	Params::URotatorSelector_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URotatorSelector_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "OnMouseLeave");

	Params::URotatorSelector_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URotatorSelector_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "OnMouseEnter");

	Params::URotatorSelector_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URotatorSelector_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature");

	Params::URotatorSelector_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URotatorSelector_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "BndEvt__TextRotator_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");

	Params::URotatorSelector_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.ExecuteUbergraph_RotatorSelector
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextRotator_C*              K2Node_DynamicCast_AsText_Rotator                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent2                                         ()
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          ()
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URotatorSelector_C::ExecuteUbergraph_RotatorSelector(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UTextRotator_C* K2Node_DynamicCast_AsText_Rotator, bool K2Node_DynamicCast_bSuccess, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, int32 K2Node_ComponentBoundEvent_Value)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "ExecuteUbergraph_RotatorSelector");

	Params::URotatorSelector_C_ExecuteUbergraph_RotatorSelector_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_DynamicCast_AsText_Rotator = K2Node_DynamicCast_AsText_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MouseEvent2 = K2Node_Event_MouseEvent2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RotatorSelector.RotatorSelector_C.Selection Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URotatorSelector_C::Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("RotatorSelector_C", "Selection Changed__DelegateSignature");

	Params::URotatorSelector_C_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
