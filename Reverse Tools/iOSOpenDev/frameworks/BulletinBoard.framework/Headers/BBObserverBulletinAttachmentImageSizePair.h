/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/BulletinBoard-Structs.h>


@class UIImage;

@interface BBObserverBulletinAttachmentImageSizePair : NSObject {
@private
	UIImage *_image;	// 4 = 0x4
	CGSize _size;	// 8 = 0x8
}
@property(assign, nonatomic) CGSize size;	// G=0x898d; S=0x89a9; @synthesize=_size
@property(retain, nonatomic) UIImage *image;	// G=0x8959; S=0x8969; @synthesize=_image
// declared property setter: - (void)setSize:(CGSize)size;	// 0x89a9
// declared property getter: - (CGSize)size;	// 0x898d
// declared property setter: - (void)setImage:(id)image;	// 0x8969
// declared property getter: - (id)image;	// 0x8959
- (void)dealloc;	// 0x890d
@end
