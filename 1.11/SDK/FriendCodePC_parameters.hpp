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

// 0x98 (0x98 - 0x0)
// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
struct UFriendCodePC_C_GetFriendCodeUrl_Params
{
public:
	class FText                                  Result;                                            // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x70(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function FriendCodePC.FriendCodePC_C.Construct
struct UFriendCodePC_C_Construct_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
struct UFriendCodePC_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
struct UFriendCodePC_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function FriendCodePC.FriendCodePC_C.OnClicked
struct UFriendCodePC_C_OnClicked_Params
{
public:
};

// 0x248 (0x248 - 0x0)
// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
struct UFriendCodePC_C_ExecuteUbergraph_FriendCodePC_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetFriendCodeUrl_Result;                  // 0x8(0x18)()
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetFriendCodeUrl_Result2;                 // 0x40(0x18)()
	class FText                                  CallFunc_GetFriendCodeDescription_ReturnValue;     // 0x58(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x70(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetFriendCodeDisplayName_ReturnValue;     // 0xB0(0x18)()
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xC8(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0x100(0x70)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x170(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1B0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1C0(0x18)()
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x1D8(0x70)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
