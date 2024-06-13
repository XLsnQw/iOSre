/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUVideoSummaryViewDataSource.h>
#import <iPodUI/IUiPodViewController.h>

@class IUVideoSummaryView, MPMediaItem, IUEmbeddedStorePageViewController;

@interface IUVideoSummaryViewController : IUiPodViewController <IUVideoSummaryViewDataSource> {
	IUEmbeddedStorePageViewController *_crossMerchandisingViewController;	// 200 = 0xc8
	IUVideoSummaryView *_videoSummaryView;	// 204 = 0xcc
	int _layoutOrientation;	// 208 = 0xd0
}
@property(readonly, assign, nonatomic) MPMediaItem *firstMediaItem;	// G=0x75b8d; 
+ (BOOL)supportsViewControllerStyle:(int)style;	// 0x75a45
+ (Class)backstopViewClass;	// 0x75a29
- (void)_reloadCrossMerchandising:(BOOL)merchandising;	// 0x76391
- (void)_removeCrossMerchandising:(BOOL)merchandising;	// 0x762dd
- (id)_newURLRequestPropertiesForMediaItem:(id)mediaItem;	// 0x760e9
- (void)_layoutViewsForOrientation:(int)orientation;	// 0x76039
- (void)_networkTypeChangedNotification:(id)notification;	// 0x75ffd
- (id)footerViewForVideoSummaryView:(id)videoSummaryView;	// 0x75fdd
- (id)mediaItemForVideoSummaryView:(id)videoSummaryView;	// 0x75fcd
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x75f71
- (void)viewDidAppear:(BOOL)view;	// 0x75f01
- (void)viewWillAppear:(BOOL)view;	// 0x75e91
- (id)title;	// 0x75e39
- (void)loadView;	// 0x75c0d
- (void)reloadData;	// 0x75bc9
// declared property getter: - (id)firstMediaItem;	// 0x75b8d
- (void)dealloc;	// 0x75ad1
- (id)init;	// 0x75a51
@end