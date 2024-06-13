/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */




@protocol UIAlertViewDelegate <NSObject>
@optional
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)alertView;
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
- (void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;
- (void)didPresentAlertView:(id)view;
- (void)willPresentAlertView:(id)view;
- (void)alertViewCancel:(id)cancel;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
@end

