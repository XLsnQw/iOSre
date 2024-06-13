/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/XXUnknownSuperclass.h>

@class NSString;

@interface PTPInitCommandRequestPacket : XXUnknownSuperclass {
	unsigned char _initiatorGUID[16];	// 4 = 0x4
	NSString *_initiatorFriendlyName;	// 20 = 0x14
}
@property(retain) NSString *initiatorFriendlyName;	// G=0x28969; S=0x28a3d; converted property
- (id)initWithInitiatorGUID:(char *)initiatorGUID initiatorFriendlyName:(id)name;	// 0x28995
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x28cf5
- (void)dealloc;	// 0x28ca9
- (id)contentForTCP;	// 0x28be1
- (id)description;	// 0x28ab5
- (const char *)initiatorGUID;	// 0x28959
- (void)setInitiatorGUID:(char *)guid;	// 0x28979
// converted property getter: - (id)initiatorFriendlyName;	// 0x28969
// converted property setter: - (void)setInitiatorFriendlyName:(id)name;	// 0x28a3d
@end
