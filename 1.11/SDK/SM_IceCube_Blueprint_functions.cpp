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


// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASM_IceCube_Blueprint_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("SM_IceCube_Blueprint_C", "UserConstructionScript");

	Params::ASM_IceCube_Blueprint_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ASM_IceCube_Blueprint_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("SM_IceCube_Blueprint_C", "Timeline_0__FinishedFunc");

	Params::ASM_IceCube_Blueprint_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ASM_IceCube_Blueprint_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("SM_IceCube_Blueprint_C", "Timeline_0__UpdateFunc");

	Params::ASM_IceCube_Blueprint_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASM_IceCube_Blueprint_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("SM_IceCube_Blueprint_C", "ReceiveBeginPlay");

	Params::ASM_IceCube_Blueprint_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SM_IceCube_Blueprint.SM_IceCube_Blueprint_C.ExecuteUbergraph_SM_IceCube_Blueprint
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMoveComponentAction    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMoveComponentAction    Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMoveComponentAction    Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASM_IceCube_Blueprint_C::ExecuteUbergraph_SM_IceCube_Blueprint(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, enum class EMoveComponentAction Temp_byte_Variable, enum class EMoveComponentAction Temp_byte_Variable2, enum class EMoveComponentAction Temp_byte_Variable3, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static auto Func = Class->GetFunction("SM_IceCube_Blueprint_C", "ExecuteUbergraph_SM_IceCube_Blueprint");

	Params::ASM_IceCube_Blueprint_C_ExecuteUbergraph_SM_IceCube_Blueprint_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
