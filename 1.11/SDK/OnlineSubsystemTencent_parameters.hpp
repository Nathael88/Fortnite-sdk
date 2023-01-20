#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemTencent.TssAntiComponent.ServerHandleDataFromClient
struct UTssAntiComponent_ServerHandleDataFromClient_Params
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function OnlineSubsystemTencent.TssAntiComponent.ClientPlayerLogin
struct UTssAntiComponent_ClientPlayerLogin_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemTencent.TssAntiComponent.ClientHandleDataFromServer
struct UTssAntiComponent_ClientHandleDataFromServer_Params
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
