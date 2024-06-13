/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/XXUnknownSuperclass.h>

@class NSNumber, NSString;

@interface CoreDAVSRVResourceRecord : XXUnknownSuperclass {
	NSString *_serviceString;	// 4 = 0x4
	NSNumber *_priority;	// 8 = 0x8
	NSNumber *_weight;	// 12 = 0xc
	NSNumber *_port;	// 16 = 0x10
	NSString *_target;	// 20 = 0x14
}
@property(retain) NSString *target;	// G=0x17149; S=0x1715d; @synthesize=_target
@property(retain) NSNumber *port;	// G=0x17111; S=0x17125; @synthesize=_port
@property(retain) NSNumber *weight;	// G=0x170d9; S=0x170ed; @synthesize=_weight
@property(retain) NSNumber *priority;	// G=0x170a1; S=0x170b5; @synthesize=_priority
@property(retain) NSString *serviceString;	// G=0x17069; S=0x1707d; @synthesize=_serviceString
// declared property setter: - (void)setTarget:(id)target;	// 0x1715d
// declared property getter: - (id)target;	// 0x17149
// declared property setter: - (void)setPort:(id)port;	// 0x17125
// declared property getter: - (id)port;	// 0x17111
// declared property setter: - (void)setWeight:(id)weight;	// 0x170ed
// declared property getter: - (id)weight;	// 0x170d9
// declared property setter: - (void)setPriority:(id)priority;	// 0x170b5
// declared property getter: - (id)priority;	// 0x170a1
// declared property setter: - (void)setServiceString:(id)string;	// 0x1707d
// declared property getter: - (id)serviceString;	// 0x17069
- (id)description;	// 0x16f1d
- (void)dealloc;	// 0x16e81
@end