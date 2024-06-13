/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>


@interface PLCameraRoundedRectView : XXUnknownSuperclass {
@private
	float outlineWidth;	// 48 = 0x30
	float outsideCornerRadius;	// 52 = 0x34
	float insideCornerRadius;	// 56 = 0x38
	float fillAlpha;	// 60 = 0x3c
	float strokeWidth;	// 64 = 0x40
	float strokeAlpha;	// 68 = 0x44
}
@property(assign, nonatomic) float strokeAlpha;	// G=0xde575; S=0xde585; @synthesize
@property(assign, nonatomic) float strokeWidth;	// G=0xde555; S=0xde565; @synthesize
@property(assign, nonatomic) float fillAlpha;	// G=0xde535; S=0xde545; @synthesize
@property(assign, nonatomic) float insideCornerRadius;	// G=0xde515; S=0xde525; @synthesize
@property(assign, nonatomic) float outsideCornerRadius;	// G=0xde4f5; S=0xde505; @synthesize
@property(assign, nonatomic) float outlineWidth;	// G=0xde4d5; S=0xde4e5; @synthesize
// declared property setter: - (void)setStrokeAlpha:(float)alpha;	// 0xde585
// declared property getter: - (float)strokeAlpha;	// 0xde575
// declared property setter: - (void)setStrokeWidth:(float)width;	// 0xde565
// declared property getter: - (float)strokeWidth;	// 0xde555
// declared property setter: - (void)setFillAlpha:(float)alpha;	// 0xde545
// declared property getter: - (float)fillAlpha;	// 0xde535
// declared property setter: - (void)setInsideCornerRadius:(float)radius;	// 0xde525
// declared property getter: - (float)insideCornerRadius;	// 0xde515
// declared property setter: - (void)setOutsideCornerRadius:(float)radius;	// 0xde505
// declared property getter: - (float)outsideCornerRadius;	// 0xde4f5
// declared property setter: - (void)setOutlineWidth:(float)width;	// 0xde4e5
// declared property getter: - (float)outlineWidth;	// 0xde4d5
- (void)drawRect:(CGRect)rect;	// 0xde1ed
- (id)initWithFrame:(CGRect)frame;	// 0xde19d
@end
