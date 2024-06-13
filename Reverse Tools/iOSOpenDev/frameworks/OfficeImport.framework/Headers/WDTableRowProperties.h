/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/WDTableRowProperties.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class WDTableProperties, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDTableRowProperties : XXUnknownSuperclass <NSCopying> {
@private
	WDTableProperties *mTableProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_98qQxD mOriginalProperties;	// 16 = 0x10
	XXStruct_98qQxD mTrackedProperties;	// 44 = 0x2c
}
@property(assign) int resolveMode;	// G=0x29aee9; S=0x13fffd; converted property
@property(assign) short widthBefore;	// G=0x29af31; S=0x14fef1; converted property
@property(assign) int widthBeforeType;	// G=0x29b071; S=0x14ff41; converted property
@property(assign) short widthAfter;	// G=0x29b1ad; S=0x1c4741; converted property
@property(assign) int widthAfterType;	// G=0x29b2ed; S=0x1c4795; converted property
@property(assign) long height;	// G=0x146a9d; S=0x1401a1; converted property
@property(assign) int heightType;	// G=0x29b429; S=0x14014d; converted property
@property(assign) BOOL header;	// G=0x29b565; S=0x1c2131; converted property
- (id)init;	// 0x29b769
- (id)initWithDocument:(id)document;	// 0x13fa51
- (void)dealloc;	// 0xa306d
- (id)tableProperties;	// 0x13ffed
- (id)characterProperties;	// 0x1401f5
// converted property getter: - (int)resolveMode;	// 0x29aee9
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x13fffd
- (void)addProperties:(id)properties;	// 0x29b8cd
// converted property getter: - (short)widthBefore;	// 0x29af31
// converted property setter: - (void)setWidthBefore:(short)before;	// 0x14fef1
- (BOOL)isWidthBeforeOverridden;	// 0x29afc1
// converted property getter: - (int)widthBeforeType;	// 0x29b071
// converted property setter: - (void)setWidthBeforeType:(int)type;	// 0x14ff41
- (BOOL)isWidthBeforeTypeOverridden;	// 0x29b0fd
// converted property getter: - (short)widthAfter;	// 0x29b1ad
// converted property setter: - (void)setWidthAfter:(short)after;	// 0x1c4741
- (BOOL)isWidthAfterOverridden;	// 0x29b23d
// converted property getter: - (int)widthAfterType;	// 0x29b2ed
// converted property setter: - (void)setWidthAfterType:(int)type;	// 0x1c4795
- (BOOL)isWidthAfterTypeOverridden;	// 0x29b379
// converted property getter: - (long)height;	// 0x146a9d
// converted property setter: - (void)setHeight:(long)height;	// 0x1401a1
- (BOOL)isHeightOverridden;	// 0x1469ed
// converted property getter: - (int)heightType;	// 0x29b429
// converted property setter: - (void)setHeightType:(int)type;	// 0x14014d
- (BOOL)isHeightTypeOverridden;	// 0x29b4b5
// converted property getter: - (BOOL)header;	// 0x29b565
// converted property setter: - (void)setHeader:(BOOL)header;	// 0x1c2131
- (BOOL)isHeaderOverridden;	// 0x29b601
- (id)copyWithZone:(NSZone *)zone;	// 0x29b7a9
@end

@interface WDTableRowProperties (Private)
- (void)addPropertiesValues:(XXStruct_98qQxD *)values to:(XXStruct_98qQxD *)to;	// 0x29b6a9
@end
