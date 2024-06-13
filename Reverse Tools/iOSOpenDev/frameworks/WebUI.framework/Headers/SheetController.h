/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

/* iOSOpenDev: commented-out (since file not found)
#import <Foundation/_NSURLAuthenticationMethodHTTPBasic.h>
*/
#import <WebUI/WebUI-Structs.h>
#import <WebUI/BrowserPanel.h>
#import <WebUI/UIModalViewDelegate.h>
#import <WebUI/UITableViewDelegate.h>
#import <WebUI/UITableViewDataSource.h>

@class UIAlertView, NSMutableArray;

/* iOSOpenDev: replaced with next line (since file not found)
@interface SheetController : _NSURLAuthenticationMethodHTTPBasic <BrowserPanel, UIModalViewDelegate, UITableViewDelegate, UITableViewDataSource> {
*/
@interface SheetController : NSObject <BrowserPanel, UIModalViewDelegate, UITableViewDelegate, UITableViewDataSource> {
	CFDictionaryRef _views;	// 4 = 0x4
	UIAlertView *_view;	// 8 = 0x8
	NSMutableArray *_alertInvocationQueue;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
	int _actionToPerform;	// 20 = 0x14
	BOOL _isDismissed;	// 24 = 0x18
}
- (id)initWithDelegate:(id)delegate;	// 0x16e1
- (void)dealloc;	// 0x1fc5
- (int)panelType;	// 0x16bd
- (int)panelState;	// 0x16c1
- (int)pausesPages;	// 0x16c5
- (BOOL)ignoresPrivateBrowsingStyle;	// 0x16c9
- (BOOL)disablesStatusBarPress;	// 0x16cd
- (void)_showSheetForAlert:(id)alert inView:(id)view withClass:(Class)aClass;	// 0x1bc9
- (void)showSheetForAlert:(id)alert inView:(id)view;	// 0x1b79
- (void)hideSheet;	// 0x1b09
- (void)setDelegate:(id)delegate;	// 0x16d1
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x1acd
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x19bd
- (void)didPresentAlertView:(id)view;	// 0x197d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x1935
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x1819
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x1749
@end
