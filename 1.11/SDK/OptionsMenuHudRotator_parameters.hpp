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

// 0x4 (0x4 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.DoesItemHaveChildren
struct UOptionsMenuHudRotator_C_DoesItemHaveChildren_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetIndentLevel
struct UOptionsMenuHudRotator_C_GetIndentLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.IsItemExpanded
struct UOptionsMenuHudRotator_C_IsItemExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetData
struct UOptionsMenuHudRotator_C_GetData_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnFocusReceived
struct UOptionsMenuHudRotator_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)()
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Options
struct UOptionsMenuHudRotator_C_Update_Options_Params
{
public:
	TArray<class FText>                          NewParam;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Center on Widget
struct UOptionsMenuHudRotator_C_Center_on_Widget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Row Selector
struct UOptionsMenuHudRotator_C_Update_Row_Selector_Params
{
public:
	int32                                        Currently_Selected;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnAcquireFromPool
struct UOptionsMenuHudRotator_C_OnAcquireFromPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnReleaseToPool
struct UOptionsMenuHudRotator_C_OnReleaseToPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Private_OnExpanderArrowShiftClicked
struct UOptionsMenuHudRotator_C_Private_OnExpanderArrowShiftClicked_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.RegisterOnClicked
struct UOptionsMenuHudRotator_C_RegisterOnClicked_Params
{
public:
	UDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetExpanded
struct UOptionsMenuHudRotator_C_SetExpanded_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetIndexInList
struct UOptionsMenuHudRotator_C_SetIndexInList_Params
{
public:
	int32                                        InIndexInList;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetSelected
struct UOptionsMenuHudRotator_C_SetSelected_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ToggleExpansion
struct UOptionsMenuHudRotator_C_ToggleExpansion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Reset
struct UOptionsMenuHudRotator_C_Reset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Construct
struct UOptionsMenuHudRotator_C_Construct_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseLeave
struct UOptionsMenuHudRotator_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseEnter
struct UOptionsMenuHudRotator_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
struct UOptionsMenuHudRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetData
struct UOptionsMenuHudRotator_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       OwningList;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ExecuteUbergraph_OptionsMenuHudRotator
struct UOptionsMenuHudRotator_C_ExecuteUbergraph_OptionsMenuHudRotator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_Event_Callback;                             // 0x8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bExpanded;                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InIndexInList;                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSelected;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0x28(0x70)()
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x98(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xD0(0x70)()
	int32                                        K2Node_ComponentBoundEvent_Value;                  // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_InData;                               // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       K2Node_Event_OwningList;                           // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDVisibilityData*                K2Node_DynamicCast_AsFort_HUDVisibility_Data;      // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x168(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Selection Changed__DelegateSignature
struct UOptionsMenuHudRotator_C_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Gameplay_Tag;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
