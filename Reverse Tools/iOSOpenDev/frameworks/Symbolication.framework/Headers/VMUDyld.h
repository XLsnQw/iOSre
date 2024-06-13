/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@class NSArray, VMUMachOHeader;

@interface VMUDyld : NSObject {
	VMUMachOHeader *_dyldMachOHeader;	// 4 = 0x4
	NSArray *_machOHeaders;	// 8 = 0x8
}
@property(readonly, retain) NSArray *machOHeaders;	// G=0x5688; converted property
+ (id)dyldWithMachOHeader:(id)machOHeader memory:(id)memory;	// 0x5a68
+ (id)nativeSharedCachePath;	// 0x5814
+ (id)nativeSharedCacheTimestamp;	// 0x5754
- (id)initWithMachOHeader:(id)machOHeader memory:(id)memory;	// 0x569c
- (id)findMachOHeadersInMemory:(id)memory;	// 0x5b78
- (id)name;	// 0x5b58
// converted property getter: - (id)machOHeaders;	// 0x5688
- (void)dealloc;	// 0x5ab4
@end
