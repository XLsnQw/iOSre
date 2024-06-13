/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/ICCameraDevice.h>

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {
@private
	void *_ptpCameraProperties;	// 12 = 0xc
}
@property(readonly, assign) PTPInitiator *initiator;	// G=0x1598d; 
- (id)initWithUSBLocationID:(unsigned)usblocationID;	// 0x15a71
- (id)initWithTCPIPInfo:(id)tcpipinfo;	// 0x16039
- (void)dealloc;	// 0x15fdd
- (void)finalize;	// 0x15f81
// declared property getter: - (id)initiator;	// 0x1598d
- (void)enumerateContent;	// 0x159a1
- (BOOL)eject;	// 0x15a49
- (void)addToEventHandlerQ:(id)eventHandlerQ;	// 0x15f21
@end
