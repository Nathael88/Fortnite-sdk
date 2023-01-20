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


// Function PresentXmas4.PresentXmas4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APresentXmas4_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PresentXmas4_C", "UserConstructionScript");

	Params::APresentXmas4_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PresentXmas4.PresentXmas4_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void APresentXmas4_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("PresentXmas4_C", "OnLootRepeat");

	Params::APresentXmas4_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PresentXmas4.PresentXmas4_C.OnBeginSearch
// (Event, Public, BlueprintEvent)
// Parameters:

void APresentXmas4_C::OnBeginSearch()
{
	static auto Func = Class->GetFunction("PresentXmas4_C", "OnBeginSearch");

	Params::APresentXmas4_C_OnBeginSearch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PresentXmas4.PresentXmas4_C.ExecuteUbergraph_PresentXmas4
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APresentXmas4_C::ExecuteUbergraph_PresentXmas4(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("PresentXmas4_C", "ExecuteUbergraph_PresentXmas4");

	Params::APresentXmas4_C_ExecuteUbergraph_PresentXmas4_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
