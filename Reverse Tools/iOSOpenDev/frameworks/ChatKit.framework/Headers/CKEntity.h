/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/XXUnknownSuperclass.h>

@class CKService, UIImage, NSString;

@interface CKEntity : XXUnknownSuperclass {
	int _addressBookUID;	// 4 = 0x4
	int _identifier;	// 8 = 0x8
	int _propertyType;	// 12 = 0xc
	BOOL _foundABNameForSender;	// 16 = 0x10
	BOOL _senderIsVoicemail;	// 17 = 0x11
	void *_abRecord;	// 20 = 0x14
	unsigned _addressHash;	// 24 = 0x18
	CKService *_service;	// 28 = 0x1c
	id _contactImageThumbnail;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) CKService *service;	// G=0x34505; @synthesize=_service
@property(assign, nonatomic) int addressBookUID;	// G=0x344e5; S=0x344f5; @synthesize=_addressBookUID
@property(assign, nonatomic) int identifier;	// G=0x344c5; S=0x344d5; @synthesize=_identifier
@property(readonly, assign, nonatomic) void *abRecord;	// G=0x344b5; @synthesize=_abRecord
@property(assign, nonatomic) int propertyType;	// G=0x34495; S=0x344a5; @synthesize=_propertyType
@property(readonly, assign, nonatomic) BOOL foundABNameForSender;	// G=0x34485; @synthesize=_foundABNameForSender
@property(readonly, assign, nonatomic) BOOL senderIsVoicemail;	// G=0x34475; @synthesize=_senderIsVoicemail
@property(readonly, assign, nonatomic) unsigned textTone;	// G=0x34a09; @dynamic
@property(readonly, retain, nonatomic) UIImage *contactImageThumbnail;	// G=0x347cd; 
@property(readonly, assign, nonatomic) BOOL hasContactImage;	// G=0x348b5; 
@property(readonly, assign, nonatomic) unsigned addressHash;	// G=0x3490d; 
@property(readonly, assign, nonatomic) NSString *normalizedRawAddress;	// G=0x34969; 
@property(readonly, assign, nonatomic) CFPhoneNumberRef phoneNumberRef;	// G=0x34471; 
@property(readonly, assign, nonatomic) NSString *rawAddress;	// G=0x3446d; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x34515; 
+ (id)copyAllEntities;	// 0x34469
+ (void)resetClassCache;	// 0x34525
+ (id)contactImageThumbnailForMeCard;	// 0x34621
- (void)resetCaches;	// 0x3454d
- (id)_initWithService:(id)service;	// 0x345b1
- (void)dealloc;	// 0x34aad
// declared property getter: - (id)rawAddress;	// 0x3446d
// declared property getter: - (id)name;	// 0x34515
// declared property getter: - (unsigned long)textTone;	// 0x34a09
- (void)setABRecord:(void *)record withIdentifier:(int)identifier;	// 0x349a9
// declared property getter: - (CFPhoneNumberRef)phoneNumberRef;	// 0x34471
// declared property getter: - (id)normalizedRawAddress;	// 0x34969
// declared property getter: - (unsigned)addressHash;	// 0x3490d
// declared property getter: - (BOOL)hasContactImage;	// 0x348b5
// declared property getter: - (id)contactImageThumbnail;	// 0x347cd
// declared property getter: - (BOOL)senderIsVoicemail;	// 0x34475
// declared property getter: - (BOOL)foundABNameForSender;	// 0x34485
// declared property getter: - (int)propertyType;	// 0x34495
// declared property setter: - (void)setPropertyType:(int)type;	// 0x344a5
// declared property getter: - (void *)abRecord;	// 0x344b5
// declared property getter: - (int)identifier;	// 0x344c5
// declared property setter: - (void)setIdentifier:(int)identifier;	// 0x344d5
// declared property getter: - (int)addressBookUID;	// 0x344e5
// declared property setter: - (void)setAddressBookUID:(int)uid;	// 0x344f5
// declared property getter: - (id)service;	// 0x34505
@end
