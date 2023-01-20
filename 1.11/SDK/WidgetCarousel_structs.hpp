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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x720 (0x728 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HighlightBrush;                                    // 0x8(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          LeftButtonStyle;                                   // 0x80(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CenterButtonStyle;                                 // 0x2B8(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          RightButtonStyle;                                  // 0x4F0(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x328 (0x330 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          InnerButtonStyle;                                  // 0x8(0x238)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonLeftImage;                         // 0x240(0x78)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonRightImage;                        // 0x2B8(0x78)(NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
