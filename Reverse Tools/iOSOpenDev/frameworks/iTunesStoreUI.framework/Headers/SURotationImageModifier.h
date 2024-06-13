/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>


@interface SURotationImageModifier : SUImageModifier {
	float _degrees;	// 4 = 0x4
	int _orientation;	// 8 = 0x8
}
@property(assign, nonatomic) int orientation;	// G=0x274d9; S=0x274e9; @synthesize=_orientation
@property(assign, nonatomic) float degrees;	// G=0x274b9; S=0x274c9; @synthesize=_degrees
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x274e9
// declared property getter: - (int)orientation;	// 0x274d9
// declared property setter: - (void)setDegrees:(float)degrees;	// 0x274c9
// declared property getter: - (float)degrees;	// 0x274b9
- (CGRect)imageFrameForImage:(id)image currentFrame:(CGRect)frame finalSize:(CGSize)size;	// 0x2740d
- (void)drawBeforeImageForContext:(CGContextRef)context imageFrame:(CGRect)frame finalSize:(CGSize)size;	// 0x2731d
- (BOOL)isEqual:(id)equal;	// 0x27281
@end
