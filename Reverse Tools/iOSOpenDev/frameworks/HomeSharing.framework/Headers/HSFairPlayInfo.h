/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/XXUnknownSuperclass.h>

@class NSString, NSArray;

@interface HSFairPlayInfo : XXUnknownSuperclass {
@private
	void *_hwInfo;	// 4 = 0x4
	NSArray *_requestsToSign;	// 8 = 0x8
	void *_session;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *deviceGUID;	// G=0x5e25; 
- (id)_hexStringForData:(id)data;	// 0x694d
- (BOOL)_getHardwareInfo:(FairPlayHWInfo_ *)info;	// 0x68b5
- (BOOL)shouldSignRequestAction:(id)action;	// 0x6891
- (id)signatureForData:(id)data;	// 0x6809
- (id)processSignedResponseData:(id)data withSignature:(id)signature;	// 0x675d
- (BOOL)setupMescalWithURL:(id)url certificateURL:(id)url2 requestsToSign:(id)sign userAgent:(id)agent;	// 0x6189
- (void)endMescalSession;	// 0x6161
- (id)securityInfoForURL:(id)url;	// 0x603d
- (void)endSecuritySession;	// 0x5ff5
- (id)continueNegotationWithData:(id)data isComplete:(BOOL *)complete;	// 0x5f25
- (id)beginNegotiation;	// 0x5ea5
// declared property getter: - (id)deviceGUID;	// 0x5e25
- (void)dealloc;	// 0x5dad
- (id)init;	// 0x5ced
@end
