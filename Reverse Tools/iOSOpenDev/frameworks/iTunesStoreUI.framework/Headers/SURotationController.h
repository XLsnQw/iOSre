/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSString, SUViewController;

@interface SURotationController : XXUnknownSuperclass {
@private
	NSString *_rotationStyle;	// 4 = 0x4
	SUViewController *_viewController;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *rotationStyle;	// G=0xd0e49; S=0xd1061; @synthesize=_rotationStyle
@property(assign, nonatomic) SUViewController *viewController;	// G=0xd1085; S=0xd1095; @synthesize=_viewController
// declared property setter: - (void)setViewController:(id)controller;	// 0xd1095
// declared property getter: - (id)viewController;	// 0xd1085
// declared property setter: - (void)setRotationStyle:(id)style;	// 0xd1061
- (BOOL)_orientationAffectsViewFrame;	// 0xd0fdd
- (CGRect)viewFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0xd0e99
- (BOOL)shouldDeferRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0xd0e95
// declared property getter: - (id)rotationStyle;	// 0xd0e49
- (void)prepareToRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0xd0e45
- (void)prepareForDeferredRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0xd0e41
- (void)finishRotationFromInterfaceOrientation:(int)interfaceOrientation;	// 0xd0e3d
- (void)animateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xd0e39
- (void)dealloc;	// 0xd0ded
- (id)initWithViewController:(id)viewController;	// 0xd0d75
- (id)init;	// 0xd0d61
@end
