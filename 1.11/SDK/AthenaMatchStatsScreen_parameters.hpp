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
// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputRefresh
struct UAthenaMatchStatsScreen_C_InputRefresh_Params
{
public:
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x0(0x10)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputSetup
struct UAthenaMatchStatsScreen_C_InputSetup_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.HandleBack
struct UAthenaMatchStatsScreen_C_HandleBack_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.RegisterBack
struct UAthenaMatchStatsScreen_C_RegisterBack_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.OnActivated
struct UAthenaMatchStatsScreen_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.Construct
struct UAthenaMatchStatsScreen_C_Construct_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.ExecuteUbergraph_AthenaMatchStatsScreen
struct UAthenaMatchStatsScreen_C_ExecuteUbergraph_AthenaMatchStatsScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_PlayerController_C*            K2Node_DynamicCast_AsAthena_Player_Controller;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaPlayerMatchReport*              CallFunc_GetMatchReport_ReturnValue;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
