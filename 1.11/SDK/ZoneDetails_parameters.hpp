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

// 0x3F8 (0x3F8 - 0x0)
// Function ZoneDetails.ZoneDetails_C.Update
struct UZoneDetails_C_Update_Params
{
public:
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBasicMissionInfo                 CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo; // 0x8(0x328)()
	bool                                         CallFunc_GetCurrentBasicMissionInfo_ReturnValue;   // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x338(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x378(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x3B8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x3C8(0x18)()
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x3E0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function ZoneDetails.ZoneDetails_C.Construct
struct UZoneDetails_C_Construct_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function ZoneDetails.ZoneDetails_C.ExecuteUbergraph_ZoneDetails
struct UZoneDetails_C_ExecuteUbergraph_ZoneDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x38(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
