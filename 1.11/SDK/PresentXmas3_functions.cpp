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


// Function PresentXmas3.PresentXmas3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APresentXmas3_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PresentXmas3_C", "UserConstructionScript");

	Params::APresentXmas3_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PresentXmas3.PresentXmas3_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void APresentXmas3_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("PresentXmas3_C", "OnLootRepeat");

	Params::APresentXmas3_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PresentXmas3.PresentXmas3_C.OnBeginSearch
// (Event, Public, BlueprintEvent)
// Parameters:

void APresentXmas3_C::OnBeginSearch()
{
	static auto Func = Class->GetFunction("PresentXmas3_C", "OnBeginSearch");

	Params::APresentXmas3_C_OnBeginSearch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PresentXmas3.PresentXmas3_C.ExecuteUbergraph_PresentXmas3
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APresentXmas3_C::ExecuteUbergraph_PresentXmas3(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("PresentXmas3_C", "ExecuteUbergraph_PresentXmas3");

	Params::APresentXmas3_C_ExecuteUbergraph_PresentXmas3_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
