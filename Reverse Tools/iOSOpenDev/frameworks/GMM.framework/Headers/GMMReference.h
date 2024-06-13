/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>
#import <GMM/GMMReference.h>

@class NSString;

@interface GMMReference : XXUnknownSuperclass {
	NSString *_url;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *domain;	// G=0x16b45; S=0x16b55; @synthesize=_domain
@property(retain, nonatomic) NSString *title;	// G=0x16b11; S=0x16b21; @synthesize=_title
@property(retain, nonatomic) NSString *url;	// G=0x16add; S=0x16aed; @synthesize=_url
// declared property setter: - (void)setDomain:(id)domain;	// 0x16b55
// declared property getter: - (id)domain;	// 0x16b45
// declared property setter: - (void)setTitle:(id)title;	// 0x16b21
// declared property getter: - (id)title;	// 0x16b11
// declared property setter: - (void)setUrl:(id)url;	// 0x16aed
// declared property getter: - (id)url;	// 0x16add
- (void)writeTo:(id)to;	// 0x16a7d
- (BOOL)readFrom:(id)from;	// 0x1696d
- (id)dictionaryRepresentation;	// 0x168c1
- (id)description;	// 0x16851
- (void)dealloc;	// 0x167e5
@end

@interface GMMReference (Descriptions)
- (id)description;	// 0xa6dd
@end
