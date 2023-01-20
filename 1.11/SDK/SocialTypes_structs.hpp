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

// 0x50 (0x50 - 0x0)
// ScriptStruct SocialTypes.ChatChromeColorScheme
struct FChatChromeColorScheme
{
public:
	struct FLinearColor                          ChatEntryBackgroundColor;                          // 0x0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NoneActiveTabColor;                                // 0x10(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TabFontColor;                                      // 0x20(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TabFontColorInverted;                              // 0x30(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ChatBackgroundColor;                               // 0x40(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x64 - 0x0)
// ScriptStruct SocialTypes.ChatChromeMargins
struct FChatChromeMargins
{
public:
	float                                        TabWidth;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TabPadding;                                        // 0x4(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatWindowPadding;                                 // 0x14(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatWindowToEntryMargin;                           // 0x24(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatChannelPadding;                                // 0x34(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               UserListButtonPadding;                             // 0x44(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               UserListIconPadding;                               // 0x54(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x6F8 (0x6F8 - 0x0)
// ScriptStruct SocialTypes.ChatChromeStyle
struct FChatChromeStyle
{
public:
	struct FSlateBrush                           UserListBrush;                                     // 0x0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChatBackgroundBrush;                               // 0x78(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChatEntryBackgroundBrush;                          // 0xF0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChannelBackgroundBrush;                            // 0x168(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TabBackgroundBrush;                                // 0x1E0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          TabSelectorButtonStyle;                            // 0x258(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               TabOptionPadding;                                  // 0x490(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TabContentPadding;                                 // 0x4A0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TabClosePadding;                                   // 0x4B0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FButtonStyle                          UserListButtonStyle;                               // 0x4C0(0x238)(Edit, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct SocialTypes.ChatColorScheme
struct FChatColorScheme
{
public:
	struct FLinearColor                          TimeStampColor;                                    // 0x0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultChatColor;                                  // 0x10(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WhisperChatColor;                                  // 0x20(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlobalChatColor;                                   // 0x30(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FounderChatColor;                                  // 0x40(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameChatColor;                                     // 0x50(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TeamChatColor;                                     // 0x60(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PartyChatColor;                                    // 0x70(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdminChatColor;                                    // 0x80(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameAdminChatColor;                                // 0x90(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WhisperHyperlinkChatColor;                         // 0xA0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlobalHyperlinkChatColor;                          // 0xB0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FounderHyperlinkChatColor;                         // 0xC0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameHyperlinkChatColor;                            // 0xD0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TeamHyperlinkChatColor;                            // 0xE0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PartyHyperlinkChatColor;                           // 0xF0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EnemyColor;                                        // 0x100(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FriendlyColor;                                     // 0x110(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x590 (0x590 - 0x0)
// ScriptStruct SocialTypes.ChatMarkupStyle
struct FChatMarkupStyle
{
public:
	struct FButtonStyle                          MarkupButtonStyle;                                 // 0x0(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       MarkupTextStyle;                                   // 0x238(0x1C8)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MarkupBackground;                                  // 0x400(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonColor;                                       // 0x478(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonHoverColor;                                  // 0x4A0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           TipColor;                                          // 0x4C8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SeperatorBrush;                                    // 0x4F0(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        SeperatorThickness;                                // 0x568(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MarkupPadding;                                     // 0x56C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x57C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2573[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1170 (0x1170 - 0x0)
// ScriptStruct SocialTypes.ChatStyle
struct FChatStyle
{
public:
	struct FEditableTextBoxStyle                 ChatEntryTextStyle;                                // 0x0(0x728)(Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 ChatDisplayTextStyle;                              // 0x728(0x728)(Edit, NativeAccessSpecifierPublic)
	struct FScrollBoxStyle                       ScrollBorderStyle;                                 // 0xE50(0x1E8)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MessageNotificationBrush;                          // 0x1038(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               ChatEntryPadding;                                  // 0x10B0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ChatEntryHeight;                                   // 0x10C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2574[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ChatMenuBackgroundBrush;                           // 0x10C8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionPadding;                               // 0x1140(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionHeaderPadding;                         // 0x1150(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionStatusMargin;                          // 0x1160(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x240 (0x240 - 0x0)
// ScriptStruct SocialTypes.SocialFontStyle
struct FSocialFontStyle
{
public:
	struct FSlateFontInfo                        FontSmall;                                         // 0x0(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontSmallBold;                                     // 0x58(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontNormal;                                        // 0xB0(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontNormalBold;                                    // 0x108(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontLarge;                                         // 0x160(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontLargeBold;                                     // 0x1B8(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultFontColor;                                  // 0x210(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InvertedFontColor;                                 // 0x220(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultDullFontColor;                              // 0x230(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x200 (0x200 - 0x0)
// ScriptStruct SocialTypes.SocialListMargins
struct FSocialListMargins
{
public:
	struct FVector2D                             UserPresenceImageSize;                             // 0x0(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderButtonMargin;                                // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListMargin;                                 // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListNoFriendsMargin;                        // 0x28(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListHeaderMargin;                           // 0x38(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListHeaderCountMargin;                      // 0x48(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderButtonContentMargin;                         // 0x58(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemMargin;                                  // 0x68(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemStatusMargin;                            // 0x78(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipStatusMargin;                             // 0x88(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemPresenceMargin;                          // 0x98(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemPlatformMargin;                          // 0xA8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemTextScrollerMargin;                      // 0xB8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationBorderMargin;                          // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationButtonMargin;                          // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationButtonContentMargin;                   // 0xE8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               NoneFriendContentMargin;                           // 0xF8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        NoneFriendContentHeight;                           // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoneFriendIconWidth;                               // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuBackIconMargin;                             // 0x110(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuPageIconMargin;                             // 0x120(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               RadioSettingTitleMargin;                           // 0x130(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSearchIconMargin;                           // 0x140(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSearchTextMargin;                           // 0x150(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuBackButtonMargin;                           // 0x160(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSettingButtonMargin;                        // 0x170(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuListMargin;                                 // 0x180(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SubMenuSeperatorThickness;                         // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PresenceSeperatorThickness;                        // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipMargin;                                   // 0x198(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipPresenceMargin;                           // 0x1A8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipSeperatorMargin;                          // 0x1B8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ToolTipMargin;                                     // 0x1C8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TipStatusMargin;                                   // 0x1D8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               AddButtonMargin;                                   // 0x1E8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AddButtonSpacing;                                  // 0x1F8(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x21F0 (0x21F0 - 0x0)
// ScriptStruct SocialTypes.SocialListStyle
struct FSocialListStyle
{
public:
	struct FButtonStyle                          GlobalChatButtonStyle;                             // 0x0(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlobalChatIcon;                                    // 0x238(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          FriendItemButtonStyle;                             // 0x2B0(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ConfirmButtonStyle;                                // 0x4E8(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CancelButtonStyle;                                 // 0x720(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonContentColor;                                // 0x958(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonHoverContentColor;                           // 0x980(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActionMenuArrowBrush;                              // 0x9A8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActionMenuArrowRightBrush;                         // 0xA20(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ActionMenuBackgroundColor;                         // 0xA98(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ToolTipArrowBrush;                                 // 0xAC0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          BackButtonStyle;                                   // 0xB38(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          HeaderButtonStyle;                                 // 0xD70(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          FriendListActionButtonStyle;                       // 0xFA8(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AddFriendButtonContentBrush;                       // 0x11E0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StatusIconBrush;                                   // 0x1258(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PCIconBrush;                                       // 0x12D0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ConsoleIconBrush;                                  // 0x1348(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EpicIconBrush;                                     // 0x13C0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendImageBrush;                                  // 0x1438(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OfflineBrush;                                      // 0x14B0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OnlineBrush;                                       // 0x1528(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AwayBrush;                                         // 0x15A0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SpectateBrush;                                     // 0x1618(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendsContainerBackground;                        // 0x1690(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendsListBackground;                             // 0x1708(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 AddFriendEditableTextStyle;                        // 0x1780(0x728)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackBrush;                                         // 0x1EA8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedOptionBrush;                               // 0x1F20(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SettingsBrush;                                     // 0x1F98(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SeperatorBrush;                                    // 0x2010(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PresenceSeperatorBrush;                            // 0x2088(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FontSizeBrush;                                     // 0x2100(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SearchBrush;                                       // 0x2178(0x78)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SocialTypes.ProfanityData
struct FProfanityData
{
public:
	class FString                                CountryCode;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfanityList;                                     // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WhiteList;                                         // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAdd;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2575[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SocialTypes.SocialSoundSchema
struct FSocialSoundSchema
{
public:
	struct FSlateSound                           MessageReceivedSound;                              // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PartyInviteReceivedSound;                          // 0x18(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           FriendInviteReceivedSound;                         // 0x30(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x5D60 (0x5D60 - 0x0)
// ScriptStruct SocialTypes.SocialStyle
struct FSocialStyle
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x0(0x440)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ActionButtonStyle;                                 // 0x440(0x238)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      SmallFontStyle;                                    // 0x678(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      NormalFontStyle;                                   // 0x8B8(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      LargeFontStyle;                                    // 0xAF8(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      ChatFontStyle;                                     // 0xD38(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0xF78(0x4F0)(Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        RadioBoxStyle;                                     // 0x1468(0x4F0)(Edit, NativeAccessSpecifierPublic)
	struct FSocialListStyle                      SocialListStyle;                                   // 0x1958(0x21F0)(Edit, NativeAccessSpecifierPublic)
	struct FSocialListMargins                    SocialListMargins;                                 // 0x3B48(0x200)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatStyle                            ChatStyle;                                         // 0x3D48(0x1170)(Edit, NativeAccessSpecifierPublic)
	struct FChatColorScheme                      ChatColorScheme;                                   // 0x4EB8(0x120)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatChromeStyle                      ChatChromeStyle;                                   // 0x4FD8(0x6F8)(Edit, NativeAccessSpecifierPublic)
	struct FChatChromeMargins                    ChatChromeMargins;                                 // 0x56D0(0x64)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatChromeColorScheme                ChatChromeColorScheme;                             // 0x5734(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2576[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChatMarkupStyle                      ChatMarkupStyle;                                   // 0x5788(0x590)(Edit, NativeAccessSpecifierPublic)
	struct FSocialSoundSchema                    SoundSchema;                                       // 0x5D18(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
