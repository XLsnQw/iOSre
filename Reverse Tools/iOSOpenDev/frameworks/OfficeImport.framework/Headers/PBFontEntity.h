/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PBFontEntity : XXUnknownSuperclass {
@private
	NSString *mFaceName;	// 4 = 0x4
	int mCharSet;	// 8 = 0x8
	int mType;	// 12 = 0xc
	int mFamily;	// 16 = 0x10
}
- (id)initWithName:(id)name charSet:(int)set type:(int)type family:(int)family;	// 0xba535
- (void)dealloc;	// 0x8cfb9
- (id)faceName;	// 0x81671
- (int)charSet;	// 0x14d965
- (int)type;	// 0x21e485
- (int)family;	// 0x21e495
@end
