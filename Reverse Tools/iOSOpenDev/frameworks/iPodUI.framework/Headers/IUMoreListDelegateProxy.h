/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/UITableViewDelegate.h>

@class UINavigationController;

@interface IUMoreListDelegateProxy : XXUnknownSuperclass <UITableViewDelegate> {
	UINavigationController *_moreListNavigationController;	// 4 = 0x4
	id _originalTableDelegate;	// 8 = 0x8
}
- (id)_table;	// 0x8e535
- (id)_navigationControllerForRow:(int)row;	// 0x8e4bd
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x8e3b9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x8e2bd
- (BOOL)respondsToSelector:(SEL)selector;	// 0x8e25d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x8e1e9
- (void)forwardInvocation:(id)invocation;	// 0x8e165
- (void)dealloc;	// 0x8e0c5
- (id)initWithNavigationController:(id)navigationController;	// 0x8e039
@end
