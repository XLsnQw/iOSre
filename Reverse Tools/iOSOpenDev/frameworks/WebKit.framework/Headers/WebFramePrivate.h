/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/XXUnknownSuperclass.h>

@class WebFrameView;

__attribute__((visibility("hidden")))
@interface WebFramePrivate : XXUnknownSuperclass {
@private
	Frame *coreFrame;	// 4 = 0x4
	WebFrameView *webFrameView;	// 8 = 0x8
	WebScriptDebugger *scriptDebugger;	// 12 = 0xc
	id internalLoadDelegate;	// 16 = 0x10
	BOOL shouldCreateRenderers;	// 20 = 0x14
	BOOL includedInWebKitStatistics;	// 21 = 0x15
	BOOL isCommitting;	// 22 = 0x16
	BOOL isSingleLine;	// 23 = 0x17
}
- (void)dealloc;	// 0x28f69
- (void)finalize;	// 0x477e5
- (void)setWebFrameView:(id)view;	// 0x9689
@end
