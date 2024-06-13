/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/NSCopying.h>
#import <CorePDF/CorePDF-Structs.h>


@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying> {
	CPShape *neighborShape;	// 4 = 0x4
	int shapeSide;	// 8 = 0x8
}
@property(retain) CPShape *neighborShape;	// G=0x48185; S=0x48209; converted property
@property(assign) int shapeSide;	// G=0x481a5; S=0x48195; converted property
- (id)init;	// 0x481b5
- (id)copyWithZone:(NSZone *)zone;	// 0x4829d
- (void)dealloc;	// 0x48251
// converted property setter: - (void)setNeighborShape:(id)shape;	// 0x48209
// converted property getter: - (id)neighborShape;	// 0x48185
// converted property setter: - (void)setShapeSide:(int)side;	// 0x48195
// converted property getter: - (int)shapeSide;	// 0x481a5
@end
