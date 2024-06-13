/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/MFBaseFilterDataConsumer.h>

@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer {
	NSMutableData *_leftovers;	// 12 = 0xc
	unsigned _decodedBits;	// 16 = 0x10
	unsigned _validBytes;	// 20 = 0x14
	unsigned _equalCount;	// 24 = 0x18
	char *_table;	// 28 = 0x1c
	BOOL _bound;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) unsigned unconverted;	// G=0x250a9; @synthesize=_validBytes
@property(assign, nonatomic) BOOL isBound;	// G=0x25089; S=0x25099; @synthesize=_bound
@property(assign, nonatomic) BOOL convertCommas;	// G=0x25065; S=0x25035; 
+ (BOOL)isValidBase64:(id)a64;	// 0x257b1
- (id)initWithConsumers:(id)consumers;	// 0x25769
- (unsigned long)_decodeBytes:(const char *)bytes end:(const char *)end into:(char *)into length:(unsigned long)length startingAt:(unsigned long)at outEncodedOffset:(unsigned *)offset;	// 0x25fa9
- (int)appendData:(id)data;	// 0x25a5d
- (void)done;	// 0x2589d
- (void)dealloc;	// 0x25851
// declared property setter: - (void)setConvertCommas:(BOOL)commas;	// 0x25035
// declared property getter: - (BOOL)convertCommas;	// 0x25065
// declared property getter: - (BOOL)isBound;	// 0x25089
// declared property setter: - (void)setIsBound:(BOOL)bound;	// 0x25099
// declared property getter: - (unsigned long)unconverted;	// 0x250a9
@end
