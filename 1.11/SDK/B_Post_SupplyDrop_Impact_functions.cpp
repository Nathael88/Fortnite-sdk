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


// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Post_SupplyDrop_Impact_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Post_SupplyDrop_Impact_C", "UserConstructionScript");

	Params::AB_Post_SupplyDrop_Impact_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Post_SupplyDrop_Impact_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Post_SupplyDrop_Impact_C", "Timeline_0__FinishedFunc");

	Params::AB_Post_SupplyDrop_Impact_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Post_SupplyDrop_Impact_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Post_SupplyDrop_Impact_C", "Timeline_0__UpdateFunc");

	Params::AB_Post_SupplyDrop_Impact_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.SpawnPostFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PostFX_BoxScaleDyn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PostFX_CamShakeLoc                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PostFX_UseCamShake                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              PostFX_DeactivateDelay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PostFX_UseForceFeedback                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Post_SupplyDrop_Impact_C::SpawnPostFX(float PostFX_BoxScaleDyn, const struct FVector& PostFX_CamShakeLoc, bool PostFX_UseCamShake, float PostFX_DeactivateDelay, bool PostFX_UseForceFeedback)
{
	static auto Func = Class->GetFunction("B_Post_SupplyDrop_Impact_C", "SpawnPostFX");

	Params::AB_Post_SupplyDrop_Impact_C_SpawnPostFX_Params Parms;
	Parms.PostFX_BoxScaleDyn = PostFX_BoxScaleDyn;
	Parms.PostFX_CamShakeLoc = PostFX_CamShakeLoc;
	Parms.PostFX_UseCamShake = PostFX_UseCamShake;
	Parms.PostFX_DeactivateDelay = PostFX_DeactivateDelay;
	Parms.PostFX_UseForceFeedback = PostFX_UseForceFeedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C.ExecuteUbergraph_B_Post_SupplyDrop_Impact
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PostFX_BoxScaleDyn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_PostFX_CamShakeLoc                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PostFX_UseCamShake                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_PostFX_DeactivateDelay                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PostFX_UseForceFeedback                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Post_SupplyDrop_Impact_C::ExecuteUbergraph_B_Post_SupplyDrop_Impact(int32 EntryPoint, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float K2Node_CustomEvent_PostFX_BoxScaleDyn, const struct FVector& K2Node_CustomEvent_PostFX_CamShakeLoc, bool K2Node_CustomEvent_PostFX_UseCamShake, float K2Node_CustomEvent_PostFX_DeactivateDelay, bool K2Node_CustomEvent_PostFX_UseForceFeedback, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Post_SupplyDrop_Impact_C", "ExecuteUbergraph_B_Post_SupplyDrop_Impact");

	Params::AB_Post_SupplyDrop_Impact_C_ExecuteUbergraph_B_Post_SupplyDrop_Impact_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.K2Node_CustomEvent_PostFX_BoxScaleDyn = K2Node_CustomEvent_PostFX_BoxScaleDyn;
	Parms.K2Node_CustomEvent_PostFX_CamShakeLoc = K2Node_CustomEvent_PostFX_CamShakeLoc;
	Parms.K2Node_CustomEvent_PostFX_UseCamShake = K2Node_CustomEvent_PostFX_UseCamShake;
	Parms.K2Node_CustomEvent_PostFX_DeactivateDelay = K2Node_CustomEvent_PostFX_DeactivateDelay;
	Parms.K2Node_CustomEvent_PostFX_UseForceFeedback = K2Node_CustomEvent_PostFX_UseForceFeedback;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
