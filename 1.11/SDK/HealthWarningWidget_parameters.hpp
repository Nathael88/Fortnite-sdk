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

// 0x20 (0x20 - 0x0)
// Function HealthWarningWidget.HealthWarningWidget_C.SetupShowTimer
struct UHealthWarningWidget_C_SetupShowTimer_Params
{
public:
	struct FTimerHandle                          NewLocalVar_0;                                     // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HealthWarningWidget.HealthWarningWidget_C.OnActivated
struct UHealthWarningWidget_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HealthWarningWidget.HealthWarningWidget_C.HandleShowTimerComplete
struct UHealthWarningWidget_C_HandleShowTimerComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HealthWarningWidget.HealthWarningWidget_C.Destruct
struct UHealthWarningWidget_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HealthWarningWidget.HealthWarningWidget_C.Construct
struct UHealthWarningWidget_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HealthWarningWidget.HealthWarningWidget_C.AddIconToScreen
struct UHealthWarningWidget_C_AddIconToScreen_Params
{
public:
	class UCommonLazyImage*                      Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget
struct UHealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_282C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetHealthWarningText_ReturnValue;         // 0x8(0x18)()
	class UCommonLazyImage*                      K2Node_Event_Image;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HealthWarningWidget.HealthWarningWidget_C.HealthWarningCompleted__DelegateSignature
struct UHealthWarningWidget_C_HealthWarningCompleted__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
