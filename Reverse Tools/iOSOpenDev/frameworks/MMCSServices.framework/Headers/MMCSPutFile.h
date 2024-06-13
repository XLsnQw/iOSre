/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

#import <MMCSServices/MMCSSimpleFile.h>


@interface MMCSPutFile : MMCSSimpleFile {
	id _block;	// 4 = 0x4
	id _updateBlock;	// 8 = 0x8
}
@property(copy) id progressUpdateBlock;	// G=0x4e55; S=0x4e69; @synthesize=_updateBlock
@property(copy) id completionBlock;	// G=0x4e1d; S=0x4e31; @synthesize=_block
// declared property setter: - (void)setProgressUpdateBlock:(id)block;	// 0x4e69
// declared property getter: - (id)progressUpdateBlock;	// 0x4e55
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x4e31
// declared property getter: - (id)completionBlock;	// 0x4e1d
- (void)setProgress:(double)progress;	// 0x4d5d
- (void)dealloc;	// 0x4d05
@end
