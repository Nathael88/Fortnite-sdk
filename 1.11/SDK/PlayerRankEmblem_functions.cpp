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


// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerBannerInfo           Banner                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRankEmblem_C::SetBannerInfo(const struct FPlayerBannerInfo& Banner, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2)
{
	static auto Func = Class->GetFunction("PlayerRankEmblem_C", "SetBannerInfo");

	Params::UPlayerRankEmblem_C_SetBannerInfo_Params Parms;
	Parms.Banner = Banner;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue2 = CallFunc_Conv_StringToName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerSurroundLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Animate                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerRankEmblem_C::SetBannerSurroundLevel(int32 Level, bool Animate)
{
	static auto Func = Class->GetFunction("PlayerRankEmblem_C", "SetBannerSurroundLevel");

	Params::UPlayerRankEmblem_C_SetBannerSurroundLevel_Params Parms;
	Parms.Level = Level;
	Parms.Animate = Animate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)

void UPlayerRankEmblem_C::SetBannerOwner(class AFortPlayerController* Target, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerRankEmblem_C", "SetBannerOwner");

	Params::UPlayerRankEmblem_C_SetBannerOwner_Params Parms;
	Parms.Target = Target;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRankEmblem.PlayerRankEmblem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerRankEmblem_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerRankEmblem_C", "Construct");

	Params::UPlayerRankEmblem_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRankEmblem.PlayerRankEmblem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerRankEmblem_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PlayerRankEmblem_C", "PreConstruct");

	Params::UPlayerRankEmblem_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerRankEmblem_C::ExecuteUbergraph_PlayerRankEmblem(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("PlayerRankEmblem_C", "ExecuteUbergraph_PlayerRankEmblem");

	Params::UPlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
