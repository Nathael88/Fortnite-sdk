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


// Function HealthWarningWidget.HealthWarningWidget_C.SetupShowTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UHealthWarningWidget_C::SetupShowTimer(const struct FTimerHandle& NewLocalVar_0, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "SetupShowTimer");

	Params::UHealthWarningWidget_C_SetupShowTimer_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHealthWarningWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "OnActivated");

	Params::UHealthWarningWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.HandleShowTimerComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningWidget_C::HandleShowTimerComplete()
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "HandleShowTimerComplete");

	Params::UHealthWarningWidget_C_HandleShowTimerComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHealthWarningWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "Destruct");

	Params::UHealthWarningWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHealthWarningWidget_C::Construct()
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "Construct");

	Params::UHealthWarningWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.AddIconToScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCommonLazyImage*            Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealthWarningWidget_C::AddIconToScreen(class UCommonLazyImage* Image)
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "AddIconToScreen");

	Params::UHealthWarningWidget_C_AddIconToScreen_Params Parms;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetHealthWarningText_ReturnValue                        ()
// class UCommonLazyImage*            K2Node_Event_Image                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealthWarningWidget_C::ExecuteUbergraph_HealthWarningWidget(int32 EntryPoint, class FText CallFunc_GetHealthWarningText_ReturnValue, class UCommonLazyImage* K2Node_Event_Image, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "ExecuteUbergraph_HealthWarningWidget");

	Params::UHealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHealthWarningText_ReturnValue = CallFunc_GetHealthWarningText_ReturnValue;
	Parms.K2Node_Event_Image = K2Node_Event_Image;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.HealthWarningCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningWidget_C::HealthWarningCompleted__DelegateSignature()
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "HealthWarningCompleted__DelegateSignature");

	Params::UHealthWarningWidget_C_HealthWarningCompleted__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
