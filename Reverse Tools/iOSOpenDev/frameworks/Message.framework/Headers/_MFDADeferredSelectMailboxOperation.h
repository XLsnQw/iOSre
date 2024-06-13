/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFDAOfflineCacheOperation.h>
#import <Message/MFOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredSelectMailboxOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {
	NSString *_folderID;	// 12 = 0xc
}
- (id)initWithMailbox:(id)mailbox;	// 0x7defd
- (id)initWithCoder:(id)coder;	// 0x7de51
- (void)encodeWithCoder:(id)coder;	// 0x7dddd
- (BOOL)performWithAccount:(id)account offlineCache:(id)cache;	// 0x7dd59
- (id)description;	// 0x7dced
@end
