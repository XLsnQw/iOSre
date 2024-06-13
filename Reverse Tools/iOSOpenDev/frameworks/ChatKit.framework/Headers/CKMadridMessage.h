/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessage.h>

@class NSArray, IMMessage, NSDate;

@interface CKMadridMessage : CKMessage {
@private
	IMMessage *_imMessage;	// 52 = 0x34
	NSArray *_parts;	// 56 = 0x38
	NSArray *_incompleteParts;	// 60 = 0x3c
	NSDate *_placeHolderDate;	// 64 = 0x40
	BOOL _hasPostedComplete;	// 68 = 0x44
	int _partCount;	// 72 = 0x48
	int _incompletePartCount;	// 76 = 0x4c
}
@property(retain, nonatomic, setter=setIMMessage:) IMMessage *imMessage;	// G=0x6d6e9; S=0x6e791; @synthesize=_imMessage
@property(readonly, retain) NSArray *parts;	// G=0x6dd6d; converted property
+ (void)initialize;	// 0x6e1cd
+ (id)existingMessageForGuid:(id)guid;	// 0x6e1a1
- (void)_observeFileTransfersIfNecessary;	// 0x6dfa1
- (id)initWithIMMessage:(id)immessage;	// 0x6f3e1
- (id)initPlaceholderWithDate:(id)date;	// 0x6d6fd
- (void)dealloc;	// 0x6f265
- (void)calculateUIFlags;	// 0x6f1ed
- (void)_loadUIFlags;	// 0x6d741
- (double)_loadDate;	// 0x6d795
- (id)address;	// 0x6d801
- (id)sender;	// 0x6d839
- (id)subject;	// 0x6d8f5
- (void)_loadText;	// 0x6d92d
- (id)error;	// 0x6d97d
- (BOOL)hasBeenSent;	// 0x6d99d
- (BOOL)isRead;	// 0x6d9c1
- (id)timeRead;	// 0x6d9e5
- (BOOL)_loadOutgoing;	// 0x6da05
- (void)markAsRead;	// 0x6da29
- (void)_parseIMMessagePartsWithTextProcessingBlock:(id)textProcessingBlock fileTransferProcessingBlock:(id)block;	// 0x6efe1
- (void)_loadCounts;	// 0x6eee1
- (int)totalMessageCount;	// 0x6da85
- (int)sentCount;	// 0x6daad
- (int)failedSendCount;	// 0x6daf1
- (BOOL)isFromMe;	// 0x6db49
- (BOOL)isWaitingForDelivery;	// 0x6db6d
- (BOOL)isDelivered;	// 0x6dc2d
- (id)timeDelivered;	// 0x6dc51
- (BOOL)isEqual:(id)equal;	// 0x6dc71
- (unsigned)messagePartCount;	// 0x6dcf9
- (id)messagePartAtIndex:(unsigned)index;	// 0x6dd31
// converted property getter: - (id)parts;	// 0x6dd6d
- (BOOL)hasAttachments;	// 0x6dd95
- (BOOL)storesFlagsInDatabase;	// 0x6d6cd
- (void)loadParts;	// 0x6ed3d
- (void)deleteMessagePart:(id)part;	// 0x6e8fd
- (id)description;	// 0x6e885
- (BOOL)isPlaceholder;	// 0x6d6d1
- (BOOL)isTypingIndicator;	// 0x6ded5
- (id)guid;	// 0x6df09
- (int)rowID;	// 0x6df29
- (id)sequenceNumber;	// 0x6df4d
// declared property setter: - (void)setIMMessage:(id)message;	// 0x6e791
// declared property getter: - (id)imMessage;	// 0x6d6e9
- (void)setConversation:(id)conversation;	// 0x6e145
- (BOOL)postMessageReceivedIfNecessary;	// 0x6e4e5
- (void)_fileTransferUpdated:(id)updated;	// 0x6e219
- (BOOL)wantsSendStatus;	// 0x6d6f9
@end
