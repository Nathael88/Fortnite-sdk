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


// Function BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_Outpost_Theater4_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_Hex_Outpost_Theater4_C", "UserConstructionScript");

	Params::ABP_Hex_Outpost_Theater4_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Hex_Outpost_Theater4_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Hex_Outpost_Theater4_C", "ReceiveBeginPlay");

	Params::ABP_Hex_Outpost_Theater4_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C.ActivateOutpost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_Outpost_Theater4_C::ActivateOutpost()
{
	static auto Func = Class->GetFunction("BP_Hex_Outpost_Theater4_C", "ActivateOutpost");

	Params::ABP_Hex_Outpost_Theater4_C_ActivateOutpost_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C.HandleOnPlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_Hex_Outpost_Theater4_C::HandleOnPlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("BP_Hex_Outpost_Theater4_C", "HandleOnPlayerInfoChanged");

	Params::ABP_Hex_Outpost_Theater4_C_HandleOnPlayerInfoChanged_Params Parms;
	Parms.UniqueId = UniqueId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C.ExecuteUbergraph_BP_Hex_Outpost_Theater4
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UniqueId                                      (ConstParm, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Hex_Outpost_Theater4_C::ExecuteUbergraph_BP_Hex_Outpost_Theater4(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_Hex_Outpost_Theater4_C", "ExecuteUbergraph_BP_Hex_Outpost_Theater4");

	Params::ABP_Hex_Outpost_Theater4_C_ExecuteUbergraph_BP_Hex_Outpost_Theater4_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_UniqueId = K2Node_CustomEvent_UniqueId;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
