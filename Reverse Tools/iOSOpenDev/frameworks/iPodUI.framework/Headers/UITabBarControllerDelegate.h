/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */




@protocol UITabBarControllerDelegate <NSObject>
@optional
- (void)tabBarController:(id)controller didEndCustomizingViewControllers:(id)controllers changed:(BOOL)changed;
- (void)tabBarController:(id)controller willEndCustomizingViewControllers:(id)controllers changed:(BOOL)changed;
- (void)tabBarController:(id)controller willBeginCustomizingViewControllers:(id)controllers;
- (void)tabBarController:(id)controller didSelectViewController:(id)controller2;
- (BOOL)tabBarController:(id)controller shouldSelectViewController:(id)controller2;
@end

