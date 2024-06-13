/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/XXUnknownSuperclass.h>

@class NSError, SUDescriptor, SUScanOptions;

@interface SUScanRequest : XXUnknownSuperclass {
	SUScanOptions *_options;	// 4 = 0x4
	id _callback;	// 8 = 0x8
	SUDescriptor *_result;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
}
@property(retain, nonatomic) NSError *error;	// G=0x4509; S=0x4519; @synthesize=_error
@property(retain, nonatomic) SUDescriptor *result;	// G=0x44d5; S=0x44e5; @synthesize=_result
@property(copy, nonatomic) id callback;	// G=0x44a1; S=0x44b1; @synthesize=_callback
@property(retain, nonatomic) SUScanOptions *options;	// G=0x446d; S=0x447d; @synthesize=_options
// declared property setter: - (void)setError:(id)error;	// 0x4519
// declared property getter: - (id)error;	// 0x4509
// declared property setter: - (void)setResult:(id)result;	// 0x44e5
// declared property getter: - (id)result;	// 0x44d5
// declared property setter: - (void)setCallback:(id)callback;	// 0x44b1
// declared property getter: - (id)callback;	// 0x44a1
// declared property setter: - (void)setOptions:(id)options;	// 0x447d
// declared property getter: - (id)options;	// 0x446d
- (void)dealloc;	// 0x43e5
@end
