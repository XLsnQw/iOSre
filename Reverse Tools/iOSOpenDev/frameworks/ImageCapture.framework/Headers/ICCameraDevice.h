/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICDevice.h>

@class NSString, NSArray;

@interface ICCameraDevice : ICDevice {
@private
	void *_cameraProperties;	// 8 = 0x8
}
@property(assign) BOOL beingEjected;	// G=0x6431; S=0x6455; 
@property(copy) NSString *volumePath;	// G=0x63a5; S=0x63c5; 
@property(readonly, assign) NSArray *contents;	// G=0x681d; 
@property(assign, getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice;	// G=0x6759; S=0x677d; 
@property(assign) unsigned numberOfDownloadableItems;	// G=0x6651; S=0x6671; 
@property(readonly, assign) double timeOffset;	// G=0x654d; 
@property(readonly, assign) unsigned batteryLevel;	// G=0x652d; 
@property(readonly, assign) BOOL batteryLevelAvailable;	// G=0x6509; 
@property(readonly, assign) NSArray *mediaFiles;	// G=0x86f5; 
@property(assign) BOOL allowsSyncingClock;	// G=0x64c1; S=0x64e5; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x6479; S=0x649d; 
@property(assign, getter=isEjectable) BOOL ejectable;	// G=0x63e9; S=0x640d; 
@property(assign) unsigned contentCatalogPercentCompleted;	// G=0x6715; S=0x6735; 
@property(assign) unsigned estimatedNumberOfDownloadableItems;	// G=0x658d; S=0x65ad; 
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x6fc5
- (id)init;	// 0x8cdd
- (id)description;	// 0x6e21
- (void)dealloc;	// 0x8b79
- (void)finalize;	// 0x8a15
// declared property getter: - (id)volumePath;	// 0x63a5
// declared property setter: - (void)setVolumePath:(id)path;	// 0x63c5
// declared property getter: - (BOOL)isEjectable;	// 0x63e9
// declared property setter: - (void)setEjectable:(BOOL)ejectable;	// 0x640d
// declared property getter: - (BOOL)beingEjected;	// 0x6431
// declared property setter: - (void)setBeingEjected:(BOOL)ejected;	// 0x6455
// declared property getter: - (BOOL)isLocked;	// 0x6479
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x649d
// declared property getter: - (BOOL)allowsSyncingClock;	// 0x64c1
// declared property setter: - (void)setAllowsSyncingClock:(BOOL)clock;	// 0x64e5
// declared property getter: - (BOOL)batteryLevelAvailable;	// 0x6509
// declared property getter: - (unsigned)batteryLevel;	// 0x652d
// declared property getter: - (double)timeOffset;	// 0x654d
- (double)downloadCancelTimestamp;	// 0x656d
// declared property getter: - (unsigned)estimatedNumberOfDownloadableItems;	// 0x658d
// declared property setter: - (void)setEstimatedNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x65ad
- (void)decrementEstimatedNumberOfDownloadableItems;	// 0x65d1
- (void)incrementEstimatedNumberOfDownloadableItems;	// 0x6611
// declared property getter: - (unsigned)numberOfDownloadableItems;	// 0x6651
// declared property setter: - (void)setNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x6671
- (void)decrementNumberOfDownloadableItems;	// 0x6695
- (void)incrementNumberOfDownloadableItems;	// 0x66d5
// declared property getter: - (unsigned)contentCatalogPercentCompleted;	// 0x6715
// declared property setter: - (void)setContentCatalogPercentCompleted:(unsigned)completed;	// 0x6735
// declared property getter: - (BOOL)isAccessRestrictedAppleDevice;	// 0x6759
// declared property setter: - (void)setAccessRestrictedAppleDevice:(BOOL)device;	// 0x677d
- (dispatch_queue_s *)generalQ;	// 0x67a1
- (dispatch_semaphore_s *)deviceQSemaphore;	// 0x67c1
- (void)notifyDelegateOfAddedItem:(id)addedItem;	// 0x88d1
- (void)pendNotifyingDelegateOfAddedItem:(id)addedItem;	// 0x67e1
// declared property getter: - (id)contents;	// 0x681d
// declared property getter: - (id)mediaFiles;	// 0x86f5
- (id)filesOfType:(id)type;	// 0x85cd
- (void)handleCommandCompletionNotification:(id)notification;	// 0x8091
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x7715
- (void)requestOpenSession;	// 0x7515
- (void)requestCloseSession;	// 0x683d
- (void)requestSyncClock;	// 0x6979
- (void)requestDeleteFiles:(id)files;	// 0x73d1
- (void)requestEject;	// 0x7319
- (void)requestDownloadFile:(id)file options:(id)options downloadDelegate:(id)delegate didDownloadSelector:(SEL)selector contextInfo:(void *)info;	// 0x716d
- (void)cancelDownload;	// 0x7125
- (void)addFolder:(id)folder;	// 0x69d9
- (void)removeFolder:(id)folder;	// 0x6a7d
- (void)addToThumbnailFetchQ:(id)thumbnailFetchQ;	// 0x70b9
- (void)addToMetadataFetchQ:(id)metadataFetchQ;	// 0x704d
- (void)receivedDeviceCommandCompletion;	// 0x7021
@end
