/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AXCameraTorchManager.h>
#import <AVConference/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface CMVideoCaptureCameraTorchManager : XXUnknownSuperclass <AXCameraTorchManager> {
@private
	tagHANDLE *_hCMCapture;	// 4 = 0x4
}
- (id)initWithVideoCaptureHandle:(tagHANDLE *)videoCaptureHandle;	// 0x8faa9
- (BOOL)openTorchDevice;	// 0x8faa1
- (void)closeTorchDevice;	// 0x8faa5
- (void)turnTorchOn;	// 0x8fafd
- (void)turnTorchOff;	// 0x8fae9
@end
