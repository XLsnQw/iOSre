/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADImageFillTechnique.h>

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADStretchTechnique : OADImageFillTechnique {
@private
	OADRelativeRect *mFillRect;	// 12 = 0xc
	BOOL mIsFillRectOverridden;	// 16 = 0x10
}
@property(retain) id fillRect;	// G=0x2a15d9; S=0xc27d1; converted property
+ (id)defaultProperties;	// 0xc26f9
- (id)copyWithZone:(NSZone *)zone;	// 0x2a1541
- (id)initWithDefaults;	// 0xc2741
- (void)dealloc;	// 0x8cf6d
// converted property getter: - (id)fillRect;	// 0x2a15d9
// converted property setter: - (void)setFillRect:(id)rect;	// 0xc27d1
- (BOOL)isFillRectOverridden;	// 0x2a1609
- (unsigned)hash;	// 0x2a1641
- (BOOL)isEqual:(id)equal;	// 0x2a167d
@end
