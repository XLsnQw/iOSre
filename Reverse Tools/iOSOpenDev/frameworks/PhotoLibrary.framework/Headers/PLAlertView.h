/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/UIAlertViewDelegate.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>


@interface PLAlertView : XXUnknownSuperclass <UIAlertViewDelegate> {
@private
	id completion;	// 156 = 0x9c
}
@property(copy, nonatomic) id completion;	// G=0xe510d; S=0xe511d; @synthesize
// declared property setter: - (void)setCompletion:(id)completion;	// 0xe511d
// declared property getter: - (id)completion;	// 0xe510d
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0xe50c9
- (void)showWithCompletionHandler:(id)completionHandler;	// 0xe5071
- (void)dealloc;	// 0xe5019
- (id)init;	// 0xe4fed
@end
