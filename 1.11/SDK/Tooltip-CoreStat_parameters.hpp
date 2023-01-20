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

// 0x460 (0x460 - 0x0)
// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update
struct UTooltip_CoreStat_C_Update_Params
{
public:
	struct FHeroCoreStat                         Data;                                              // 0x0(0x320)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                        Value;                                             // 0x320(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x328(0x78)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x3A0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x3E0(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x3F8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x438(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x448(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Construct
struct UTooltip_CoreStat_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat
struct UTooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
