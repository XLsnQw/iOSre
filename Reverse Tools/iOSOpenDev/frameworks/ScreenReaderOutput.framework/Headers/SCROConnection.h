/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <ScreenReaderOutput/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface SCROConnection : XXUnknownSuperclass {
@private
	BOOL _isConnectionStarted;	// 4 = 0x4
	unsigned _pingPort;	// 8 = 0x8
	CFRunLoopSourceRef _pingSource;	// 12 = 0xc
	CFRunLoopSourceRef _invalidationSource;	// 16 = 0x10
	unsigned _identifier;	// 20 = 0x14
	int _handlerType;	// 24 = 0x18
	id _delegate;	// 28 = 0x1c
}
+ (void)initialize;	// 0x4219
+ (void)_createConnectionRunLoop;	// 0x4b79
+ (void)_configServer;	// 0x4415
+ (void)_unconfigServerAndRetry:(BOOL)retry;	// 0x9941
+ (void)_addConnectionToRunLoop:(id)runLoop;	// 0x43b5
- (id)initWithHandlerType:(int)handlerType delegate:(id)delegate;	// 0x433d
- (void)dealloc;	// 0x9901
- (void)invalidate;	// 0xa349
- (void)_startConnection;	// 0x552d
- (void)_stopConnection;	// 0xa249
- (int)sendEvent:(id)event;	// 0x4ec1
- (int)registerHandlerCallbackForKey:(int)key;	// 0x1a1d
- (int)setHandlerValue:(id)value forKey:(int)key;	// 0x48b9
- (id)handlerValueForKey:(int)key;	// 0x2c79
- (id)handlerValueForKey:(int)key withObject:(id)object;	// 0x9e8d
- (int)performHandlerActionForKey:(int)key;	// 0x9cc5
- (void)_ping;	// 0x646d
@end
