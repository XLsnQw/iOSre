/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/XXUnknownSuperclass.h>

@class TPButton, TPWell;

@interface TPWellButtonView : XXUnknownSuperclass {
	TPButton *_button;	// 48 = 0x30
	TPWell *_well;	// 52 = 0x34
}
@property(retain, nonatomic) TPButton *button;	// G=0x102ad; S=0x1031d; @synthesize=_button
- (id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;	// 0x10345
- (void)dealloc;	// 0x102bd
// declared property getter: - (id)button;	// 0x102ad
// declared property setter: - (void)setButton:(id)button;	// 0x1031d
@end
