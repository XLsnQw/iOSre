/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

#import <DataDetectorsUI/DDAction.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>
#import <DataDetectorsUI/DataDetectorsUI-Structs.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate> {
@private
	NSString *_recipient;	// 32 = 0x20
}
- (void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;	// 0xcf45
- (id)viewController;	// 0xce89
- (void)perform;	// 0xce41
- (int)interactionType;	// 0xce19
- (id)localizedName;	// 0xce01
- (void)dealloc;	// 0xcdb5
- (id)initWithURL:(id)url result:(DDResult *)result context:(id)context;	// 0xcd39
@end
