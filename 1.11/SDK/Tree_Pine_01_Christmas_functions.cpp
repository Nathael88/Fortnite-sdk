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


// Function Tree_Pine_01_Christmas.Tree_Pine_01_Christmas_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATree_Pine_01_Christmas_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Tree_Pine_01_Christmas_C", "UserConstructionScript");

	Params::ATree_Pine_01_Christmas_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
