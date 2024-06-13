/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class IUMediaTableCell, UIView, IUTableCellConfiguration;

@interface IUMediaActionRow : XXUnknownSuperclass {
	SEL _action;	// 4 = 0x4
	IUMediaTableCell *_cell;	// 8 = 0x8
	IUTableCellConfiguration *_configuration;	// 12 = 0xc
	BOOL _includeInDisplayedRowCount;	// 16 = 0x10
	BOOL _selectable;	// 17 = 0x11
	BOOL _showCheckmark;	// 18 = 0x12
	BOOL _showDisclosure;	// 19 = 0x13
	BOOL _showPlusButton;	// 20 = 0x14
	int _tag;	// 24 = 0x18
}
@property(assign, nonatomic) int tag;	// G=0xa0cf9; S=0xa0d09; @synthesize=_tag
@property(assign, nonatomic) BOOL showPlusButton;	// G=0xa0cd9; S=0xa0ce9; @synthesize=_showPlusButton
@property(assign, nonatomic) BOOL showDisclosure;	// G=0xa0ba1; S=0xa0cc9; @synthesize=_showDisclosure
@property(assign, nonatomic) BOOL showCheckmark;	// G=0xa0ca9; S=0xa0cb9; @synthesize=_showCheckmark
@property(assign, nonatomic) BOOL selectable;	// G=0xa0c89; S=0xa0c99; @synthesize=_selectable
@property(assign, nonatomic) BOOL includeInDisplayedRowCount;	// G=0xa0c69; S=0xa0c79; @synthesize=_includeInDisplayedRowCount
@property(readonly, assign, nonatomic) int mediaDisclosureStyle;	// G=0xa0a71; 
@property(retain, nonatomic) IUTableCellConfiguration *configuration;	// G=0xa0c35; S=0xa0c45; @synthesize=_configuration
@property(retain, nonatomic) IUMediaTableCell *cell;	// G=0xa0c01; S=0xa0c11; @synthesize=_cell
@property(assign, nonatomic) SEL action;	// G=0xa0be1; S=0xa0bf1; @synthesize=_action
@property(readonly, assign, nonatomic) UIView *accessoryView;	// G=0xa0a6d; 
+ (id)hyperlinkActionRowWithTitle:(id)title;	// 0xa0941
+ (id)actionRowWithPreset:(int)preset action:(SEL)action;	// 0xa08dd
// declared property setter: - (void)setTag:(int)tag;	// 0xa0d09
// declared property getter: - (int)tag;	// 0xa0cf9
// declared property setter: - (void)setShowPlusButton:(BOOL)button;	// 0xa0ce9
// declared property getter: - (BOOL)showPlusButton;	// 0xa0cd9
// declared property setter: - (void)setShowDisclosure:(BOOL)disclosure;	// 0xa0cc9
// declared property setter: - (void)setShowCheckmark:(BOOL)checkmark;	// 0xa0cb9
// declared property getter: - (BOOL)showCheckmark;	// 0xa0ca9
// declared property setter: - (void)setSelectable:(BOOL)selectable;	// 0xa0c99
// declared property getter: - (BOOL)selectable;	// 0xa0c89
// declared property setter: - (void)setIncludeInDisplayedRowCount:(BOOL)displayedRowCount;	// 0xa0c79
// declared property getter: - (BOOL)includeInDisplayedRowCount;	// 0xa0c69
// declared property setter: - (void)setConfiguration:(id)configuration;	// 0xa0c45
// declared property getter: - (id)configuration;	// 0xa0c35
// declared property setter: - (void)setCell:(id)cell;	// 0xa0c11
// declared property getter: - (id)cell;	// 0xa0c01
// declared property setter: - (void)setAction:(SEL)action;	// 0xa0bf1
// declared property getter: - (SEL)action;	// 0xa0be1
// declared property getter: - (BOOL)showDisclosure;	// 0xa0ba1
- (void)setSimpleConfigurationWithTitle:(id)title;	// 0xa0b2d
- (void)setSimpleConfigurationPreset:(int)preset;	// 0xa0ab1
// declared property getter: - (int)mediaDisclosureStyle;	// 0xa0a71
// declared property getter: - (id)accessoryView;	// 0xa0a6d
- (void)dealloc;	// 0xa09f5
- (id)description;	// 0xa0849
- (id)initWithTag:(int)tag action:(SEL)action;	// 0xa07ed
@end
