/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/STSStgObject.h>


__attribute__((visibility("hidden")))
@interface STStream : STSStgObject {
@private
	Stream *m_pCStream;	// 4 = 0x4
}
- (id)initWithCStream:(Stream *)cstream;	// 0x2c42ad
- (void)dealloc;	// 0x2c4d15
- (void)close;	// 0x2c4cf5
- (void)releaseCStream;	// 0x2c4299
- (id)getInfo;	// 0x2c4c15
- (void)seek:(long)seek fromOrigin:(int)origin;	// 0x2c4bc5
- (unsigned long)getPos;	// 0x2c4ba1
- (void)setClass:(SSRW_GUID)aClass;	// 0x2c4b4d
- (id)readBytes:(unsigned long)bytes;	// 0x2c4a89
- (BOOL)readLEchar;	// 0x2c4a3d
- (unsigned char)readLEbyte;	// 0x2c49f1
- (unsigned char)readLEboolean;	// 0x2c4999
- (short)readLEshort;	// 0x2c4951
- (unsigned short)readLEword;	// 0x2c4909
- (long)readLElong;	// 0x2c48c5
- (unsigned long)readLEdword;	// 0x2c4881
- (float)readLEfloat;	// 0x2c483d
- (double)readLEdouble;	// 0x2c47ed
- (unsigned short)readLEunichar;	// 0x2c47a9
- (id)readLEwstring:(unsigned long)ewstring;	// 0x2c4695
- (void)writeBytes:(id)bytes;	// 0x2c4625
- (void)writeLEbyte:(unsigned char)ebyte;	// 0x2c45dd
- (void)writeLEchar:(BOOL)echar;	// 0x2c4595
- (void)writeLEboolean:(unsigned char)eboolean;	// 0x2c454d
- (void)writeLEshort:(short)eshort;	// 0x2c4511
- (void)writeLEword:(unsigned short)eword;	// 0x2c44d5
- (void)writeLElong:(long)elong;	// 0x2c4499
- (void)writeLEdword:(unsigned long)edword;	// 0x2c445d
- (void)writeLEfloat:(float)efloat;	// 0x2c4421
- (void)writeLEdouble:(double)edouble;	// 0x2c43e5
- (void)writeLEunichar:(unsigned short)eunichar;	// 0x2c43d1
- (void)writeLEwstring:(id)ewstring;	// 0x2c4361
- (void)writeLEwstringNoTerminator:(id)terminator;	// 0x2c42f1
@end
