/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */



@class UIView;

@interface UIPDFViewManager : NSObject {
	UIView *_activeView;	// 4 = 0x4
}
+ (id)sharedViewManager;	// 0x5cb1d
- (void)makeViewActive:(id)active;	// 0x5cb85
- (void)viewReleased:(id)released;	// 0x5cb49
@end
