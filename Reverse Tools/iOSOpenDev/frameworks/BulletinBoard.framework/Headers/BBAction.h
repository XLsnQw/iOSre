/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/NSCoding.h>

#import <BulletinBoard/NSCopying.h>
#import <BulletinBoard/BulletinBoard-Structs.h>

@class NSURL, NSString;

@interface BBAction : NSObject <NSCopying, NSCoding> {
@private
	id _internalBlock;	// 4 = 0x4
	BOOL _hasCallblock;	// 8 = 0x8
	BOOL _canBypassPinLock;	// 9 = 0x9
	NSURL *_launchURL;	// 12 = 0xc
	NSString *_launchBundleID;	// 16 = 0x10
	int replyType;	// 20 = 0x14
}
@property(assign, nonatomic) int replyType;	// G=0x1241d; S=0x1242d; @synthesize
@property(assign, nonatomic) BOOL hasCallblock;	// G=0x12395; S=0x123a5; @synthesize=_hasCallblock
@property(copy, nonatomic) id internalBlock;	// G=0x12361; S=0x12371; @synthesize=_internalBlock
@property(assign, nonatomic) BOOL canBypassPinLock;	// G=0x1243d; S=0x1244d; @synthesize=_canBypassPinLock
@property(copy, nonatomic) NSString *launchBundleID;	// G=0x123e9; S=0x123f9; @synthesize=_launchBundleID
@property(retain, nonatomic) NSURL *launchURL;	// G=0x123b5; S=0x123c5; @synthesize=_launchURL
+ (id)actionWithTextReplyCallblock:(id)textReplyCallblock;	// 0x11b21
+ (id)actionWithLaunchBundleID:(id)launchBundleID callblock:(id)callblock;	// 0x11aed
+ (id)actionWithLaunchURL:(id)launchURL callblock:(id)callblock;	// 0x11ab9
+ (id)actionWithCallblock:(id)callblock;	// 0x11a7d
// declared property setter: - (void)setCanBypassPinLock:(BOOL)lock;	// 0x1244d
// declared property getter: - (BOOL)canBypassPinLock;	// 0x1243d
// declared property setter: - (void)setReplyType:(int)type;	// 0x1242d
// declared property getter: - (int)replyType;	// 0x1241d
// declared property setter: - (void)setLaunchBundleID:(id)anId;	// 0x123f9
// declared property getter: - (id)launchBundleID;	// 0x123e9
// declared property setter: - (void)setLaunchURL:(id)url;	// 0x123c5
// declared property getter: - (id)launchURL;	// 0x123b5
// declared property setter: - (void)setHasCallblock:(BOOL)callblock;	// 0x123a5
// declared property getter: - (BOOL)hasCallblock;	// 0x12395
// declared property setter: - (void)setInternalBlock:(id)block;	// 0x12371
// declared property getter: - (id)internalBlock;	// 0x12361
- (id)description;	// 0x122f1
- (void)encodeWithCoder:(id)coder;	// 0x121fd
- (id)initWithCoder:(id)coder;	// 0x120c1
- (id)copyWithZone:(NSZone *)zone;	// 0x11f99
- (id)partialDescription;	// 0x11e35
- (void)deliverResponse:(id)response;	// 0x11ded
- (id)bundleID;	// 0x11ddd
- (id)url;	// 0x11dcd
- (BOOL)isAppLaunchAction;	// 0x11db5
- (BOOL)isURLLaunchAction;	// 0x11d9d
- (BOOL)wantsTextReply;	// 0x11d7d
- (BOOL)hasLaunchInfo;	// 0x11d51
- (void)dealloc;	// 0x11cdd
- (id)_initWithInternalCallblock:(id)internalCallblock replyType:(int)type;	// 0x11c65
- (id)initWithTextReplyCallblock:(id)textReplyCallblock;	// 0x11bd1
- (id)initWithCallblock:(id)callblock;	// 0x11b5d
@end
