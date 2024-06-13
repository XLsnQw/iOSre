/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <WebBookmarks/XXUnknownSuperclass.h>

@class WebBookmarkCollection, WebBookmark;

@interface BAChangeRecord : XXUnknownSuperclass {
	WebBookmarkCollection *_collection;	// 4 = 0x4
	WebBookmark *_bookmark;	// 8 = 0x8
	int _changeType;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) WebBookmarkCollection *collection;	// G=0xff09; @synthesize=_collection
@property(readonly, assign, nonatomic) WebBookmark *bookmark;	// G=0xfef9; @synthesize=_bookmark
@property(readonly, assign, nonatomic) int changeType;	// G=0xfee9; @synthesize=_changeType
- (id)initWithBookmarkCollection:(id)bookmarkCollection bookmark:(id)bookmark changeType:(int)type;	// 0xff19
- (void)dealloc;	// 0x10005
- (id)changeTypeDescription;	// 0xfea9
- (id)description;	// 0xffad
// declared property getter: - (int)changeType;	// 0xfee9
// declared property getter: - (id)bookmark;	// 0xfef9
// declared property getter: - (id)collection;	// 0xff09
@end
