/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class UIView;
@protocol SUScalingFlipViewDelegate;

@interface SUScalingFlipView : XXUnknownSuperclass {
	UIView *_backView;	// 48 = 0x30
	id<SUScalingFlipViewDelegate> _delegate;	// 52 = 0x34
	int _direction;	// 56 = 0x38
	double _duration;	// 60 = 0x3c
	CGRect _fromFrame;	// 68 = 0x44
	UIView *_frontView;	// 84 = 0x54
	CGRect _toFrame;	// 88 = 0x58
}
@property(assign, nonatomic) double duration;	// G=0x5a9b9; S=0x5a9d1; @synthesize=_duration
@property(assign, nonatomic) int direction;	// G=0x5a999; S=0x5a9a9; @synthesize=_direction
@property(assign, nonatomic) id<SUScalingFlipViewDelegate> delegate;	// G=0x5a979; S=0x5a989; @synthesize=_delegate
// declared property setter: - (void)setDuration:(double)duration;	// 0x5a9d1
// declared property getter: - (double)duration;	// 0x5a9b9
// declared property setter: - (void)setDirection:(int)direction;	// 0x5a9a9
// declared property getter: - (int)direction;	// 0x5a999
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x5a989
// declared property getter: - (id)delegate;	// 0x5a979
- (id)_transformAnimationWithStart:(CATransform3D)start middle:(CATransform3D)middle end:(CATransform3D)end;	// 0x5a731
- (id)_positionAnimation;	// 0x5a61d
- (id)_inputColorAnimation;	// 0x5a4b9
- (id)_frontLayerAnimation;	// 0x5a039
- (id)_fixedAnimationForAnimation:(id)animation;	// 0x59f7d
- (id)_backLayerAnimation;	// 0x59a59
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x597c5
- (void)performFlip;	// 0x59609
- (void)dealloc;	// 0x59591
- (id)initWithFrontView:(id)frontView backView:(id)view;	// 0x592f5
@end
