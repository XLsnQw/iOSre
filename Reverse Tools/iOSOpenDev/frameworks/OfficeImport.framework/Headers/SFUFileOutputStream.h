/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/SFUOutputStream.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUFileOutputStream : XXUnknownSuperclass <SFUOutputStream> {
@private
	FILE *mFile;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x2df0b1
- (void)dealloc;	// 0x2df225
- (id)path;	// 0x2df07d
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x2df459
- (long long)offset;	// 0x2df379
- (BOOL)canSeek;	// 0x2df08d
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x2df289
- (BOOL)canCreateInputStream;	// 0x2df091
- (id)inputStream;	// 0x2df095
- (void)close;	// 0x2df1fd
- (id)closeLocalStream;	// 0x2df099
@end
