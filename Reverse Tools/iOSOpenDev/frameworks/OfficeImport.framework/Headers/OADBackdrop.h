/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class OADPoint3D, OADVector3D;

__attribute__((visibility("hidden")))
@interface OADBackdrop : XXUnknownSuperclass <NSCopying> {
@private
	OADPoint3D *mAnchor;	// 4 = 0x4
	OADVector3D *mNormal;	// 8 = 0x8
	OADVector3D *mUp;	// 12 = 0xc
}
@property(retain) id anchor;	// G=0x2ad75d; S=0x2addf9; converted property
@property(retain) id normal;	// G=0x2ad76d; S=0x2addb9; converted property
@property(retain) id up;	// G=0x2ad77d; S=0x2add79; converted property
- (id)init;	// 0x2adbc1
- (void)dealloc;	// 0x2adeed
- (id)copyWithZone:(NSZone *)zone;	// 0x2ade39
// converted property getter: - (id)anchor;	// 0x2ad75d
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x2addf9
// converted property getter: - (id)normal;	// 0x2ad76d
// converted property setter: - (void)setNormal:(id)normal;	// 0x2addb9
// converted property getter: - (id)up;	// 0x2ad77d
// converted property setter: - (void)setUp:(id)up;	// 0x2add79
- (unsigned)hash;	// 0x2add21
- (BOOL)isEqual:(id)equal;	// 0x2adc1d
@end
