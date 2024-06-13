/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/XXUnknownSuperclass.h>

@class NSArray, NSDictionary, NSString, NSError;

@interface IMXMLReparserContext : XXUnknownSuperclass {
	NSString *_inContent;	// 4 = 0x4
	NSString *_outContent;	// 8 = 0x8
	NSArray *_attributesToPreserve;	// 12 = 0xc
	NSDictionary *_attributesToMerge;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
}
@property(readonly, assign) NSString *_inContent;	// G=0x1b069; @synthesize
@property(readonly, assign, nonatomic) NSString *outContent;	// G=0x1b08d; @synthesize=_outContent
@property(readonly, assign, nonatomic) NSError *error;	// G=0x1b07d; @synthesize=_error
@property(readonly, assign, nonatomic) NSDictionary *attributesToMerge;	// G=0x1b0ad; @synthesize=_attributesToMerge
@property(readonly, assign, nonatomic) NSArray *attributesToPreserve;	// G=0x1b09d; @synthesize=_attributesToPreserve
// declared property getter: - (id)attributesToMerge;	// 0x1b0ad
// declared property getter: - (id)attributesToPreserve;	// 0x1b09d
// declared property getter: - (id)outContent;	// 0x1b08d
// declared property getter: - (id)error;	// 0x1b07d
// declared property getter: - (id)_inContent;	// 0x1b069
- (void)_setOutContent:(id)content error:(id)error;	// 0x1afe1
- (void)dealloc;	// 0x1af59
- (id)initWithContent:(id)content attributesToPreserve:(id)preserve attributesToMerge:(id)merge;	// 0x1aec9
@end
