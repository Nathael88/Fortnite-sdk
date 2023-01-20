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

// 0x48 (0x48 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ConfigButtonWithMissionGen
struct UAthena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen_Params
{
public:
	class UClass*                                InMission;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E07[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x30(0x18)()
};

// 0x11 (0x11 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetMissionGenData
struct UAthena_Matchmaking_GameModeButton_C_SetMissionGenData_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortAthenaPlaylist               Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E09[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetOwningDisplayWidget
struct UAthena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget_Params
{
public:
	class UAthenaMatchmakingOptionsDisplay_v2_C* OwningDisplay;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.UpdateGameModeAvailibilty
struct UAthena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty_Params
{
public:
	bool                                         CallFunc_SetMissionGenData_Success;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsGameModeAvailable_Available;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ShowDisabledMessage
struct UAthena_Matchmaking_GameModeButton_C_ShowDisabledMessage_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.DisableGameModeButton
struct UAthena_Matchmaking_GameModeButton_C_DisableGameModeButton_Params
{
public:
};

// 0x29 (0x29 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.IsGameModeAvailable
struct UAthena_Matchmaking_GameModeButton_C_IsGameModeAvailable_Params
{
public:
	enum class EFortAthenaPlaylist               InMode;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Available;                                         // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E0A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortAthenaPlaylist>       Debug;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<enum class EFortAthenaPlaylist>       CallFunc_GetActivePlaylists_ReturnValue;           // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x268 (0x268 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnFocusReceived
struct UAthena_Matchmaking_GameModeButton_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)()
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B0(0xB8)()
};

// 0x38 (0x38 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetupGameModeButton
struct UAthena_Matchmaking_GameModeButton_C_SetupGameModeButton_Params
{
public:
	class FText                                  ModeDisplayName;                                   // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bHasExtraInfo;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsEnabled;                                        // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E0B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ExtraInfoText;                                     // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.PreConstruct
struct UAthena_Matchmaking_GameModeButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature
struct UAthena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnModeButtonHovered
struct UAthena_Matchmaking_GameModeButton_C_OnModeButtonHovered_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.Construct
struct UAthena_Matchmaking_GameModeButton_C_Construct_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ExecuteUbergraph_Athena_Matchmaking_GameModeButton
struct UAthena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ButtonHovered__DelegateSignature
struct UAthena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature_Params
{
public:
	class UAthena_Matchmaking_GameModeButton_C*  HoveredButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.GameModeSelected__DelegateSignature
struct UAthena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature_Params
{
public:
	class UAthena_Matchmaking_GameModeButton_C*  SelectedGameModeButton;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
