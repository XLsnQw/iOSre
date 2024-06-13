/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTextContentView.h>
#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/XXUnknownSuperclass.h>

@class UILabel;

@interface CKTextContentView : XXUnknownSuperclass {
	UILabel *_defaultTextView;	// 120 = 0x78
}
- (id)initWithFrame:(CGRect)frame;	// 0x5b72d
- (void)dealloc;	// 0x5bff5
- (void)layoutSubviews;	// 0x5bfb5
- (void)fontSizeChanged;	// 0x5bf75
- (void)setDefaultText:(id)text;	// 0x5bdc1
- (void)setText:(id)text;	// 0x5bd6d
- (BOOL)hasImages;	// 0x5bd55
- (BOOL)keyboardInputChanged:(id)changed;	// 0x5bcfd
- (void)hideDefaultText:(BOOL)text;	// 0x5bcd9
- (id)automaticallySelectedOverlay;	// 0x5bcbd
- (void)willMoveToSuperview:(id)superview;	// 0x5bc61
- (BOOL)hasContent;	// 0x5bc49
- (void)_adjustForSingleLineHeightIfNecessary;	// 0x5bb79
- (void)reflow;	// 0x5bb4d
- (void)_updateDefaultText;	// 0x5ba5d
- (void)_updateFontSize;	// 0x5ba11
- (void)_updateCSSMargins;	// 0x5b9e5
- (CGRect)_defaultTextFrame;	// 0x5b8e9
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x5b819
@end

@interface CKTextContentView (WebKitReachIns)
- (void)_wvReflow;	// 0x5c041
- (BOOL)_wvHasImages;	// 0x5c0b1
- (void)_wvSetupCSSWithMargins:(UIEdgeInsets)margins;	// 0x5c145
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x5b71d
@end
