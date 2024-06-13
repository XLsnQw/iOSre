/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUArtworkCellConfiguration.h>
#import <iTunesStoreUI/SUDownloadCellConfiguration.h>


@protocol SUDownloadCellConfiguration <NSObject>
- (id)newProgressBar;
- (CGRect)frameForProgressBar:(id)progressBar;
@end

@interface SUDownloadCellConfiguration : SUArtworkCellConfiguration <SUDownloadCellConfiguration> {
}
+ (float)rowHeightForContext:(id)context representedObject:(id)object;	// 0xd7601
+ (id)copyDefaultContext;	// 0xd74f1
- (id)newProgressBar;	// 0xd7a81
- (CGRect)frameForProgressBar:(id)progressBar;	// 0xd79fd
- (void)reloadStrings;	// 0xd78a9
- (void)reloadLayoutInformation;	// 0xd7771
- (void)reloadImages;	// 0xd76fd
- (id)fontForLabelAtIndex:(unsigned)index;	// 0xd7679
- (id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;	// 0xd7609
- (id)init;	// 0xd74dd
@end
