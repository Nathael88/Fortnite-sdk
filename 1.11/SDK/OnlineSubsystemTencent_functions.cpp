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


// Function OnlineSubsystemTencent.TssAntiComponent.ServerHandleDataFromClient
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTssAntiComponent::ServerHandleDataFromClient(TArray<uint8>& Data)
{
	static auto Func = Class->GetFunction("TssAntiComponent", "ServerHandleDataFromClient");

	Params::UTssAntiComponent_ServerHandleDataFromClient_Params Parms;
	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemTencent.TssAntiComponent.ClientPlayerLogin
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void UTssAntiComponent::ClientPlayerLogin()
{
	static auto Func = Class->GetFunction("TssAntiComponent", "ClientPlayerLogin");

	Params::UTssAntiComponent_ClientPlayerLogin_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemTencent.TssAntiComponent.ClientHandleDataFromServer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTssAntiComponent::ClientHandleDataFromServer(TArray<uint8>& Data)
{
	static auto Func = Class->GetFunction("TssAntiComponent", "ClientHandleDataFromServer");

	Params::UTssAntiComponent_ClientHandleDataFromServer_Params Parms;
	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
