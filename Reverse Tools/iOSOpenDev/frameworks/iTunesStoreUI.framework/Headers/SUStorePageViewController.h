/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/SUMenuViewControllerDelegate.h>
#import <iTunesStoreUI/UIPopoverControllerDelegate.h>
#import <iTunesStoreUI/ISURLOperationDelegate.h>

@class SUSearchFieldController, UIPopoverController, SSMutableURLRequestProperties, UISegmentedControl, SSURLRequestProperties, SUStorePageProtocol, SSAuthenticationContext, SUPageSectionGroup, SUNavigationMenuViewController;

@interface SUStorePageViewController : SUViewController <SUMenuViewControllerDelegate, UIPopoverControllerDelegate, ISURLOperationDelegate> {
	SUViewController *_activeChildViewController;	// 212 = 0xd4
	CFSetRef _allowedInterfaceOrientations;	// 216 = 0xd8
	double _expirationTime;	// 220 = 0xdc
	int _pageType;	// 228 = 0xe4
	SUViewController *_pendingChildViewController;	// 232 = 0xe8
	SUStorePageProtocol *_lastValidProtocol;	// 236 = 0xec
	UIPopoverController *_navigationMenuPopover;	// 240 = 0xf0
	SUNavigationMenuViewController *_navigationMenuViewController;	// 244 = 0xf4
	SUSearchFieldController *_searchFieldController;	// 248 = 0xf8
	BOOL _externalRequest;	// 252 = 0xfc
	BOOL _loadingForSectionChange;	// 253 = 0xfd
	BOOL _reloadOnAppear;	// 254 = 0xfe
	SSAuthenticationContext *_authContext;	// 256 = 0x100
	SSMutableURLRequestProperties *_urlRequestProperties;	// 260 = 0x104
	BOOL _needsAuthentication;	// 264 = 0x108
	int _activeSectionIndex;	// 268 = 0x10c
	UISegmentedControl *_sectionSwitchControl;	// 272 = 0x110
	SUPageSectionGroup *_sectionsGroup;	// 276 = 0x114
}
@property(readonly, assign, nonatomic) BOOL canBeResolved;	// G=0x11b2d; 
@property(readonly, assign, nonatomic) CGRect documentBounds;	// G=0x12a7d; 
@property(readonly, assign, nonatomic) UISegmentedControl *sectionSegmentedControl;	// G=0x17389; @synthesize=_sectionSwitchControl
@property(readonly, assign, nonatomic) SUPageSectionGroup *sectionGroup;	// G=0x17379; @synthesize=_sectionsGroup
@property(readonly, assign, nonatomic) SUSearchFieldController *searchFieldController;	// G=0x17369; @synthesize=_searchFieldController
@property(readonly, assign, nonatomic) SUViewController *activeChildViewController;	// G=0x172e5; @synthesize=_activeChildViewController
@property(copy, nonatomic) SSURLRequestProperties *URLRequestProperties;	// G=0x124d1; S=0x123e5; 
@property(assign, nonatomic) BOOL needsAuthentication;	// G=0x17349; S=0x17359; @synthesize=_needsAuthentication
@property(assign, nonatomic, getter=isExternalRequest) BOOL externalRequest;	// G=0x17329; S=0x17339; @synthesize=_externalRequest
@property(retain, nonatomic) SSAuthenticationContext *authenticationContext;	// G=0x172f5; S=0x17305; @synthesize=_authContext
@property(retain) id URLRequest;	// G=0x12599; S=0x12529; converted property
@property(retain) id urlBagKey;	// G=0x12579; S=0x12509; converted property
// declared property getter: - (id)sectionSegmentedControl;	// 0x17389
// declared property getter: - (id)sectionGroup;	// 0x17379
// declared property getter: - (id)searchFieldController;	// 0x17369
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x17359
// declared property getter: - (BOOL)needsAuthentication;	// 0x17349
// declared property setter: - (void)setExternalRequest:(BOOL)request;	// 0x17339
// declared property getter: - (BOOL)isExternalRequest;	// 0x17329
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x17305
// declared property getter: - (id)authenticationContext;	// 0x172f5
// declared property getter: - (id)activeChildViewController;	// 0x172e5
- (void)_verifyStorePageProtocol:(id)protocol;	// 0x17239
- (void)_tearDownNavigationMenu;	// 0x171c1
- (BOOL)_shouldDisplayControlsInNavigationBar;	// 0x170a9
- (BOOL)_shouldFetchAutomatically;	// 0x17005
- (void)_setRightNavigationItem:(id)item forTag:(int)tag;	// 0x16f81
- (void)_setPendingChildViewController:(id)controller;	// 0x16eb9
- (void)_setLeftNavigationItem:(id)item forTag:(int)tag;	// 0x16e35
- (void)_setAllowedOrientations:(id)orientations;	// 0x16d01
- (void)_setActiveChildViewController:(id)controller;	// 0x16a21
- (BOOL)_sectionIsNetworkConstrained;	// 0x169c1
- (void)_repositionForChildViewController:(id)childViewController;	// 0x16921
- (BOOL)_reloadWithURLRequestProperties:(id)urlrequestProperties preserveSectionControl:(BOOL)control;	// 0x16821
- (void)_reloadSectionsControlWithGroup:(id)group;	// 0x1658d
- (void)_reloadSearchFieldWithSection:(id)section;	// 0x161d5
- (void)_reloadNavigationMenus;	// 0x1605d
- (void)_reloadNavigationButtons;	// 0x15ef1
- (void)_reloadNavigationBar;	// 0x15ea1
- (void)_reloadForAppearance:(BOOL)appearance;	// 0x15ba1
- (void)_performActionForProtocolButton:(id)protocolButton;	// 0x15919
- (id)_newSegmentedControlWithItems:(id)items;	// 0x157dd
- (void)_moveToRootSectionForChildViewController:(id)childViewController protocol:(id)protocol;	// 0x156c5
- (void)_moveChildViewController:(id)controller toOverlayForProtocol:(id)protocol;	// 0x151f5
- (void)_handleViewControllerBecameReady:(id)ready;	// 0x15131
- (void)_handleFailureWithError:(id)error;	// 0x15089
- (CGRect)_frameForActiveViewController;	// 0x14f3d
- (void)_finishSuccessfulLoad;	// 0x14e39
- (void)_finishHandlingFailure;	// 0x14dd5
- (void)_fetchPage:(BOOL)page;	// 0x14d85
- (double)_expirationTime;	// 0x14d3d
- (void)_dismissNavigationMenuViewController;	// 0x14d01
- (void)_delayedFetchPage;	// 0x14cb9
- (void)_applyPropertiesToViewController:(id)viewController;	// 0x14c91
- (id)_activePageSection;	// 0x14c1d
- (id)_activeChildViewController;	// 0x14c0d
- (void)_sectionControlAction:(id)action;	// 0x1499d
- (void)_navigationMenuButtonAction:(id)action;	// 0x14791
- (void)_navigationButtonAction:(id)action;	// 0x146ed
- (void)_tabConfigurationChanged:(id)changed;	// 0x146a9
- (void)_sendFailureAfterDialogsFinished:(id)finished;	// 0x145f5
- (void)_reloadForNetworkTypeChange:(id)networkTypeChange;	// 0x14529
- (void)_documentBoundsChangeNotification:(id)notification;	// 0x144b9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x14471
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x14445
- (void)menuViewControllerDidCancel:(id)menuViewController;	// 0x14419
- (void)menuViewController:(id)controller didTapButton:(id)button;	// 0x143b9
- (void)menuViewController:(id)controller didSelectItemAtIndex:(int)index;	// 0x142e5
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x141a5
- (void)operation:(id)operation failedWithError:(id)error;	// 0x14159
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x140fd
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x14005
- (void)viewWillDisappear:(BOOL)view;	// 0x13f71
- (void)viewWillAppear:(BOOL)view;	// 0x13f05
- (void)viewDidDisappear:(BOOL)view;	// 0x13e89
- (void)viewDidAppear:(BOOL)view;	// 0x13e05
- (BOOL)viewIsReady;	// 0x13dd1
- (void)tabBarControllerDidReselectTabBarItem:(id)tabBarController;	// 0x13d89
- (void)storePageProtocolDidChange;	// 0x13c09
- (id)storePageProtocol;	// 0x13bb5
- (BOOL)shouldExcludeFromNavigationHistory;	// 0x13b15
- (void)setScriptProperties:(id)properties;	// 0x13ab1
- (void)setSection:(id)section;	// 0x13995
- (void)setParentViewController:(id)controller;	// 0x138dd
- (void)setLoading:(BOOL)loading;	// 0x13879
- (id)setDisplayedSectionGroup:(id)group;	// 0x13641
- (void)restoreArchivableContext:(id)context;	// 0x13505
- (BOOL)reloadWithURLRequestProperties:(id)urlrequestProperties;	// 0x134a1
- (void)reload;	// 0x133ad
- (BOOL)reloadForSectionsWithGroup:(id)group;	// 0x13265
- (BOOL)pushStorePage:(id)page withTarget:(int)target animated:(BOOL)animated;	// 0x131ad
- (id)newRotationController;	// 0x130ed
- (id)navigationItemForScriptInterface;	// 0x13069
- (void)loadView;	// 0x12ee9
- (BOOL)loadMoreWithURL:(id)url;	// 0x12e71
- (id)iTunesStoreUI_searchFieldController;	// 0x12e39
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x12df1
- (void)invalidateForMemoryPurge;	// 0x12cd1
- (void)invalidate;	// 0x12b8d
- (void)handleStoreFailureWithError:(id)error;	// 0x12b7d
- (void)handleApplicationURL:(id)url;	// 0x12aed
// declared property getter: - (CGRect)documentBounds;	// 0x12a7d
- (id)displayedURL;	// 0x129b5
- (double)defaultPNGExpirationTime;	// 0x129a5
- (id)copyScriptViewController;	// 0x12959
- (id)copyScriptProperties;	// 0x128d5
- (id)copyObjectForScriptFromPoolWithClass:(Class)aClass;	// 0x12849
- (id)copyDefaultScriptProperties;	// 0x127c5
- (id)copyArchivableContext;	// 0x126d1
- (void)applicationWillEnterForeground;	// 0x12675
- (void)applicationDidEnterBackground;	// 0x125ed
// converted property getter: - (id)URLRequest;	// 0x12599
// converted property getter: - (id)urlBagKey;	// 0x12579
// converted property setter: - (void)setURLRequest:(id)request;	// 0x12529
// converted property setter: - (void)setUrlBagKey:(id)key;	// 0x12509
// declared property getter: - (id)URLRequestProperties;	// 0x124d1
- (void)showPlaceholderViewController;	// 0x12465
- (BOOL)shouldDisplaySectionsInNavigationBar:(id)navigationBar;	// 0x12429
// declared property setter: - (void)setURLRequestProperties:(id)properties;	// 0x123e5
- (void)resetNavigationItem:(id)item;	// 0x123a1
- (void)reloadWithStorePage:(id)storePage ofType:(int)type forURL:(id)url;	// 0x12129
- (BOOL)isLoaded;	// 0x12079
- (void)handleFailureWithError:(id)error;	// 0x11fd9
- (id)newViewControllerForPage:(id)page ofType:(int)type returningError:(id *)error;	// 0x11fa1
- (id)newPlaceholderViewController;	// 0x11e79
- (id)newFetchOperation;	// 0x11c35
- (void)enqueueFetchOperationForPageSection:(id)pageSection;	// 0x11b9d
- (void)enqueueFetchOperation;	// 0x11b55
- (BOOL)decidePolicyForWebNavigationAction:(id)webNavigationAction request:(id)request decisionListener:(id)listener;	// 0x11b51
// declared property getter: - (BOOL)canBeResolved;	// 0x11b2d
- (void)dealloc;	// 0x118e9
- (id)init;	// 0x11799
@end