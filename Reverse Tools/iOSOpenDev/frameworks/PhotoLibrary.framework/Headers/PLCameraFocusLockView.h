/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLCameraFocusView.h>

@class CAKeyframeAnimation;

@interface PLCameraFocusLockView : PLCameraFocusView {
	CAKeyframeAnimation *_lockBoundsAnimation;	// 72 = 0x48
	BOOL _scalingDown;	// 76 = 0x4c
	BOOL _shouldEndFocus;	// 77 = 0x4d
	CGAffineTransform _defaultTransform;	// 80 = 0x50
}
- (void)focusDidEnd;	// 0xd5791
- (void)startAnimating;	// 0xd55e1
- (void)animateScaleDown;	// 0xd5479
- (void)finishedScalingDown;	// 0xd5435
- (void)animateLock;	// 0xd5315
- (id)_createLockBoundsAnimation;	// 0xd50b1
- (void)dealloc;	// 0xd5065
- (id)init;	// 0xd5011
@end
