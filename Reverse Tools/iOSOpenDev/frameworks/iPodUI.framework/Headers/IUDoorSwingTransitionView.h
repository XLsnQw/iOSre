/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class IULiveReflectionView, UIView;
@protocol IUDoorSwingTransitionViewDelegate;

@interface IUDoorSwingTransitionView : XXUnknownSuperclass {
	id<IUDoorSwingTransitionViewDelegate> _delegate;	// 48 = 0x30
	UIView *_doorsView;	// 52 = 0x34
	IULiveReflectionView *_zoomView;	// 56 = 0x38
	int _currentTransition;	// 60 = 0x3c
	BOOL _transitioning;	// 64 = 0x40
}
@property(assign, nonatomic) int currentTransition;	// G=0xaf019; S=0xaf029; @synthesize=_currentTransition
@property(retain, nonatomic) UIView *doorsView;	// G=0xaf059; S=0xaf069; @synthesize=_doorsView
@property(readonly, assign, nonatomic, getter=isTransitioning) BOOL transitioning;	// G=0xaf08d; @synthesize=_transitioning
@property(retain, nonatomic) UIView *zoomView;	// G=0xaf09d; S=0xaf0ad; @synthesize=_zoomView
@property(assign, nonatomic) id<IUDoorSwingTransitionViewDelegate> delegate;	// G=0xaf039; S=0xaf049; @synthesize=_delegate
+ (double)defaultDurationForTransition:(int)transition;	// 0xadc49
// declared property setter: - (void)setZoomView:(id)view;	// 0xaf0ad
// declared property getter: - (id)zoomView;	// 0xaf09d
// declared property getter: - (BOOL)isTransitioning;	// 0xaf08d
// declared property setter: - (void)setDoorsView:(id)view;	// 0xaf069
// declared property getter: - (id)doorsView;	// 0xaf059
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xaf049
// declared property getter: - (id)delegate;	// 0xaf039
// declared property setter: - (void)setCurrentTransition:(int)transition;	// 0xaf029
// declared property getter: - (int)currentTransition;	// 0xaf019
- (void)_informDelegateOfCompletion;	// 0xaefbd
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0xaee09
- (void)dealloc;	// 0xaedb1
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3 usingOrientation:(int)orientation;	// 0xadcd5
- (id)initWithFrame:(CGRect)frame;	// 0xadc55
@end
