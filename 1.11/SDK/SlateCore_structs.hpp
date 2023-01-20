#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESlateBrushImageType : uint8
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	ESlateBrushImageType_MAX       = 3,
};

enum class ESlateBrushMirrorType : uint8
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4,
};

enum class ESlateBrushTileType : uint8
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4,
};

enum class ESlateBrushDrawType : uint8
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	ESlateBrushDrawType_MAX        = 4,
};

enum class ESlateColorStylingMode : uint8
{
	UseColor_Specified             = 0,
	UseColor_Specified_Link        = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_MAX                   = 4,
};

enum class EWidgetClipping : uint8
{
	Inherit                        = 0,
	ClipToBounds                   = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways             = 3,
	OnDemand                       = 4,
	EWidgetClipping_MAX            = 5,
};

enum class EFontLayoutMethod : uint8
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2,
};

enum class EFontLoadingPolicy : uint8
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class EFontHinting : uint8
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5,
};

enum class EFocusCause : uint8
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6,
};

enum class ETextShapingMethod : uint8
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3,
};

enum class EUINavigationRule : uint8
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	CustomBoundary                 = 5,
	Invalid                        = 6,
	EUINavigationRule_MAX          = 7,
};

enum class ESelectInfo : uint8
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4,
};

enum class ETextCommit : uint8
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4,
};

enum class EScrollDirection : uint8
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,
};

enum class EOrientation : uint8
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,
};

enum class EMenuPlacement : uint8
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13,
};

enum class EVerticalAlignment : uint8
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,
};

enum class EHorizontalAlignment : uint8
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,
};

enum class ENavigationGenesis : uint8
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3,
};

enum class ENavigationSource : uint8
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2,
};

enum class EUINavigation : uint8
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8,
};

enum class EButtonPressMethod : uint8
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3,
};

enum class EButtonTouchMethod : uint8
{
	DownAndUp                      = 0,
	PreciseTap                     = 1,
	EButtonTouchMethod_MAX         = 2,
};

enum class EButtonClickMethod : uint8
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4,
};

enum class EFontFallback : uint8
{
	FF_NoFallback                  = 0,
	FF_LocalizedFallback           = 1,
	FF_LastResortFallback          = 2,
	FF_Max                         = 3,
};

enum class ECheckBoxState : uint8
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3,
};

enum class ESlateCheckBoxType : uint8
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2,
};

enum class EConsumeMouseWheel : uint8
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.SlateColor
struct FSlateColor
{
public:
	struct FLinearColor                          SpecifiedColor;                                    // 0x0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateColorStylingMode            ColorUseRule;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD4[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Margin
struct FMargin
{
public:
	float                                        Left;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Top;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Right;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bottom;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct SlateCore.SlateBrush
struct FSlateBrush
{
public:
	uint8                                        Pad_1BD5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ImageSize;                                         // 0x8(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                           TintColor;                                         // 0x20(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                               ResourceObject;                                    // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ResourceName;                                      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox2D                                UVRegion;                                          // 0x58(0x14)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class ESlateBrushDrawType               DrawAs;                                            // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushTileType               Tiling;                                            // 0x6D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushMirrorType             Mirroring;                                         // 0x6E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushImageType              ImageType;                                         // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsDynamicallyLoaded : 1;                          // Mask: 0x1, PropSize: 0x10x70(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasUObject : 1;                                   // Mask: 0x2, PropSize: 0x10x70(0x1)(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BD6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.Geometry
struct FGeometry
{
public:
	uint8                                        Pad_1BD7[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.InputEvent
struct FInputEvent
{
public:
	uint8                                        Pad_1BD8[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x70 - 0x20)
// ScriptStruct SlateCore.PointerEvent
struct FPointerEvent : public FInputEvent
{
public:
	uint8                                        Pad_1BD9[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings
{
public:
	int32                                        OutlineSize;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               OutlineMaterial;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OutlineColor;                                      // 0x10(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSeparateFillAlpha;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SlateCore.SlateFontInfo
struct FSlateFontInfo
{
public:
	class UObject*                               FontObject;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               FontMaterial;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontOutlineSettings                  OutlineSettings;                                   // 0x10(0x28)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TypefaceFontName;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Size;                                              // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.SlateWidgetStyle
struct FSlateWidgetStyle
{
public:
	uint8                                        Pad_1BDE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5F0 (0x5F8 - 0x8)
// ScriptStruct SlateCore.TableRowStyle
struct FTableRowStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           SelectorFocusedBrush;                              // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveHoveredBrush;                                // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveBrush;                                       // 0xF8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveHoveredBrush;                              // 0x170(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveBrush;                                     // 0x1E8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EvenRowBackgroundHoveredBrush;                     // 0x260(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EvenRowBackgroundBrush;                            // 0x2D8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OddRowBackgroundHoveredBrush;                      // 0x350(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OddRowBackgroundBrush;                             // 0x3C8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           TextColor;                                         // 0x440(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           SelectedTextColor;                                 // 0x468(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Above;                               // 0x490(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Onto;                                // 0x508(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Below;                               // 0x580(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.SlateSound
struct FSlateSound
{
public:
	class UObject*                               ResourceObject;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BDF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x230 (0x238 - 0x8)
// ScriptStruct SlateCore.ButtonStyle
struct FButtonStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           Normal;                                            // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Hovered;                                           // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Pressed;                                           // 0xF8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Disabled;                                          // 0x170(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               NormalPadding;                                     // 0x1E8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PressedPadding;                                    // 0x1F8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x208(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x220(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x338 (0x340 - 0x8)
// ScriptStruct SlateCore.ComboButtonStyle
struct FComboButtonStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          ButtonStyle;                                       // 0x8(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DownArrowImage;                                    // 0x240(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuBorderBrush;                                   // 0x2B8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               MenuBorderPadding;                                 // 0x330(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x370 (0x378 - 0x8)
// ScriptStruct SlateCore.ComboBoxStyle
struct FComboBoxStyle : public FSlateWidgetStyle
{
public:
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x8(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x348(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           SelectionChangeSlateSound;                         // 0x360(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x1F0 - 0x8)
// ScriptStruct SlateCore.EditableTextStyle
struct FEditableTextStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x60(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageSelected;                           // 0x88(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageComposing;                          // 0x100(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CaretImage;                                        // 0x178(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x438 (0x440 - 0x8)
// ScriptStruct SlateCore.ScrollBarStyle
struct FScrollBarStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HorizontalBackgroundImage;                         // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalBackgroundImage;                           // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalTopSlotImage;                              // 0xF8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HorizontalTopSlotImage;                            // 0x170(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalBottomSlotImage;                           // 0x1E8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HorizontalBottomSlotImage;                         // 0x260(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x2D8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredThumbImage;                                 // 0x350(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DraggedThumbImage;                                 // 0x3C8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x720 (0x728 - 0x8)
// ScriptStruct SlateCore.EditableTextBoxStyle
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           BackgroundImageNormal;                             // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageHovered;                            // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageFocused;                            // 0xF8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageReadOnly;                           // 0x170(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x1E8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x1F8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x250(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BackgroundColor;                                   // 0x278(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ReadOnlyForegroundColor;                           // 0x2A0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               HScrollBarPadding;                                 // 0x2C8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               VScrollBarPadding;                                 // 0x2D8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x2E8(0x440)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x1C8 - 0x8)
// ScriptStruct SlateCore.TextBlockStyle
struct FTextBlockStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x60(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x88(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x90(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           SelectedBackgroundColor;                           // 0xA0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          HighlightColor;                                    // 0xC8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HighlightShape;                                    // 0xD8(0x78)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UnderlineBrush;                                    // 0x150(0x78)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x290 (0x298 - 0x8)
// ScriptStruct SlateCore.SpinBoxStyle
struct FSpinBoxStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           BackgroundBrush;                                   // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBackgroundBrush;                            // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveFillBrush;                                   // 0xF8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveFillBrush;                                 // 0x170(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ArrowsImage;                                       // 0x1E8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x260(0x28)(NativeAccessSpecifierPublic)
	struct FMargin                               TextPadding;                                       // 0x288(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.FocusEvent
struct FFocusEvent
{
public:
	uint8                                        Pad_1BE0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x40 - 0x20)
// ScriptStruct SlateCore.KeyEvent
struct FKeyEvent : public FInputEvent
{
public:
	uint8                                        Pad_1BE1[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x48 - 0x40)
// ScriptStruct SlateCore.AnalogInputEvent
struct FAnalogInputEvent : public FKeyEvent
{
public:
	uint8                                        Pad_1BE2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.CharacterEvent
struct FCharacterEvent : public FInputEvent
{
public:
	uint8                                        Pad_1BE3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x50 - 0x20)
// ScriptStruct SlateCore.MotionEvent
struct FMotionEvent : public FInputEvent
{
public:
	uint8                                        Pad_1BE4[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.FontData
struct FFontData
{
public:
	class FString                                FontFilename;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFontHinting                      Hinting;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFontLoadingPolicy                LoadingPolicy;                                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BE5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               FontFaceAsset;                                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontData                             Font;                                              // 0x8(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Typeface
struct FTypeface
{
public:
	TArray<struct FTypefaceEntry>                Fonts;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.CompositeSubFont
struct FCompositeSubFont
{
public:
	struct FTypeface                             Typeface;                                          // 0x0(0x10)(NativeAccessSpecifierPublic)
	TArray<struct FInt32Range>                   CharacterRanges;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ScalingFactor;                                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.CompositeFont
struct FCompositeFont
{
public:
	struct FTypeface                             DefaultTypeface;                                   // 0x0(0x10)(NativeAccessSpecifierPublic)
	TArray<struct FCompositeSubFont>             SubTypefaces;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.NavigationEvent
struct FNavigationEvent : public FInputEvent
{
public:
	uint8                                        Pad_1BE7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE40 (0xE48 - 0x8)
// ScriptStruct SlateCore.WindowStyle
struct FWindowStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          MinimizeButtonStyle;                               // 0x8(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          MaximizeButtonStyle;                               // 0x240(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          RestoreButtonStyle;                                // 0x478(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CloseButtonStyle;                                  // 0x6B0(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TitleTextStyle;                                    // 0x8E8(0x1C8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveTitleBrush;                                  // 0xAB0(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveTitleBrush;                                // 0xB28(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FlashTitleBrush;                                   // 0xBA0(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BackgroundColor;                                   // 0xC18(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OutlineBrush;                                      // 0xC40(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           OutlineColor;                                      // 0xCB8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BorderBrush;                                       // 0xCE0(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundBrush;                                   // 0xD58(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChildBackgroundBrush;                              // 0xDD0(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF8 - 0x8)
// ScriptStruct SlateCore.ScrollBorderStyle
struct FScrollBorderStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           TopShadowBrush;                                    // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E8 - 0x8)
// ScriptStruct SlateCore.ScrollBoxStyle
struct FScrollBoxStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           TopShadowBrush;                                    // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LeftShadowBrush;                                   // 0xF8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           RightShadowBrush;                                  // 0x170(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x638 (0x640 - 0x8)
// ScriptStruct SlateCore.DockTabStyle
struct FDockTabStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          CloseButtonStyle;                                  // 0x8(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBrush;                                       // 0x240(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveBrush;                                       // 0x2B8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ColorOverlayTabBrush;                              // 0x330(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ColorOverlayIconBrush;                             // 0x3A8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ForegroundBrush;                                   // 0x420(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBrush;                                      // 0x498(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ContentAreaBrush;                                  // 0x510(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TabWellBrush;                                      // 0x588(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               TabPadding;                                        // 0x600(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        OverlapWidth;                                      // 0x610(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           FlashColor;                                        // 0x618(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x438 (0x440 - 0x8)
// ScriptStruct SlateCore.TableColumnHeaderStyle
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           SortPrimaryAscendingImage;                         // 0x8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortPrimaryDescendingImage;                        // 0x80(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSecondaryAscendingImage;                       // 0xF8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSecondaryDescendingImage;                      // 0x170(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBrush;                                       // 0x1E8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBrush;                                      // 0x260(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownImage;                                 // 0x2D8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownNormalBorderBrush;                     // 0x350(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownHoveredBorderBrush;                    // 0x3C8(0x78)(Edit, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF8 - 0x8)
// ScriptStruct SlateCore.SplitterStyle
struct FSplitterStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HandleNormalBrush;                                 // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HandleHighlightBrush;                              // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA18 (0xA20 - 0x8)
// ScriptStruct SlateCore.HeaderRowStyle
struct FHeaderRowStyle : public FSlateWidgetStyle
{
public:
	struct FTableColumnHeaderStyle               ColumnStyle;                                       // 0x8(0x440)(Edit, NativeAccessSpecifierPublic)
	struct FTableColumnHeaderStyle               LastColumnStyle;                                   // 0x448(0x440)(Edit, NativeAccessSpecifierPublic)
	struct FSplitterStyle                        ColumnSplitterStyle;                               // 0x888(0xF8)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundBrush;                                   // 0x980(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x9F8(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct SlateCore.InlineTextImageStyle
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           Image;                                             // 0x8(0x78)(Edit, NativeAccessSpecifierPublic)
	int16                                        Baseline;                                          // 0x80(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E8 (0x1F0 - 0x8)
// ScriptStruct SlateCore.SliderStyle
struct FSliderStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           NormalBarImage;                                    // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalThumbImage;                                  // 0xF8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledThumbImage;                                // 0x170(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        BarThickness;                                      // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x448 (0x450 - 0x8)
// ScriptStruct SlateCore.VolumeControlStyle
struct FVolumeControlStyle : public FSlateWidgetStyle
{
public:
	struct FSliderStyle                          SliderStyle;                                       // 0x8(0x1F0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HighVolumeImage;                                   // 0x1F8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MidVolumeImage;                                    // 0x270(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LowVolumeImage;                                    // 0x2E8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NoVolumeImage;                                     // 0x360(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MutedImage;                                        // 0x3D8(0x78)(Edit, NativeAccessSpecifierPublic)
};

// 0x978 (0x980 - 0x8)
// ScriptStruct SlateCore.SearchBoxStyle
struct FSearchBoxStyle : public FSlateWidgetStyle
{
public:
	struct FEditableTextBoxStyle                 TextBoxStyle;                                      // 0x8(0x728)(Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        ActiveFontInfo;                                    // 0x730(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UpArrowImage;                                      // 0x788(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DownArrowImage;                                    // 0x800(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlassImage;                                        // 0x878(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ClearImage;                                        // 0x8F0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               ImagePadding;                                      // 0x968(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLeftAlignButtons;                                 // 0x978(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct SlateCore.ExpandableAreaStyle
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           CollapsedImage;                                    // 0x8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ExpandedImage;                                     // 0x80(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        RolloutAnimationSeconds;                           // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x170 - 0x8)
// ScriptStruct SlateCore.ProgressBarStyle
struct FProgressBarStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           BackgroundImage;                                   // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FillImage;                                         // 0x80(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MarqueeImage;                                      // 0xF8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8F0 (0x8F8 - 0x8)
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
public:
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x8(0x728)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x730(0x1C8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x410 (0x418 - 0x8)
// ScriptStruct SlateCore.HyperlinkStyle
struct FHyperlinkStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          UnderlineStyle;                                    // 0x8(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x240(0x1C8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x408(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4E8 (0x4F0 - 0x8)
// ScriptStruct SlateCore.CheckBoxStyle
struct FCheckBoxStyle : public FSlateWidgetStyle
{
public:
	enum class ESlateCheckBoxType                CheckBoxType;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           UncheckedImage;                                    // 0x10(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UncheckedHoveredImage;                             // 0x88(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UncheckedPressedImage;                             // 0x100(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedImage;                                      // 0x178(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedHoveredImage;                               // 0x1F0(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedPressedImage;                               // 0x268(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedImage;                                 // 0x2E0(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedHoveredImage;                          // 0x358(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedPressedImage;                          // 0x3D0(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x448(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x458(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BorderBackgroundColor;                             // 0x480(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           CheckedSlateSound;                                 // 0x4A8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           UncheckedSlateSound;                               // 0x4C0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x4D8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
