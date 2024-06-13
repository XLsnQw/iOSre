/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMHTMLElement.h>
#import <WebCore/DOMHTMLFrameElement.h>

@class DOMDocument, DOMAbstractView, NSString;

@interface DOMHTMLFrameElement : DOMHTMLElement {
}
@property(readonly, assign) int height;	// G=0x31b121; 
@property(readonly, assign) int width;	// G=0x31b065; 
@property(copy) NSString *location;	// G=0x31ade1; S=0x31af2d; 
@property(readonly, retain) DOMAbstractView *contentWindow;	// G=0x31ad1d; 
@property(readonly, retain) DOMDocument *contentDocument;	// G=0x31ac59; 
@property(copy) NSString *src;	// G=0x31ab01; S=0x31a81d; 
@property(copy) NSString *scrolling;	// G=0x319fa5; S=0x31a6d9; 
@property(assign) BOOL noResize;	// G=0x31a961; S=0x31aa29; 
@property(copy) NSString *name;	// G=0x319ec5; S=0x31a595; 
@property(copy) NSString *marginWidth;	// G=0x319de5; S=0x31a451; 
@property(copy) NSString *marginHeight;	// G=0x319d05; S=0x31a30d; 
@property(copy) NSString *longDesc;	// G=0x319c25; S=0x31a1c9; 
@property(copy) NSString *frameBorder;	// G=0x319b45; S=0x31a085; 
// declared property getter: - (id)frameBorder;	// 0x319b45
// declared property setter: - (void)setFrameBorder:(id)border;	// 0x31a085
// declared property getter: - (id)longDesc;	// 0x319c25
// declared property setter: - (void)setLongDesc:(id)desc;	// 0x31a1c9
// declared property getter: - (id)marginHeight;	// 0x319d05
// declared property setter: - (void)setMarginHeight:(id)height;	// 0x31a30d
// declared property getter: - (id)marginWidth;	// 0x319de5
// declared property setter: - (void)setMarginWidth:(id)width;	// 0x31a451
// declared property getter: - (id)name;	// 0x319ec5
// declared property setter: - (void)setName:(id)name;	// 0x31a595
// declared property getter: - (BOOL)noResize;	// 0x31a961
// declared property setter: - (void)setNoResize:(BOOL)resize;	// 0x31aa29
// declared property getter: - (id)scrolling;	// 0x319fa5
// declared property setter: - (void)setScrolling:(id)scrolling;	// 0x31a6d9
// declared property getter: - (id)src;	// 0x31ab01
// declared property setter: - (void)setSrc:(id)src;	// 0x31a81d
// declared property getter: - (id)contentDocument;	// 0x31ac59
// declared property getter: - (id)contentWindow;	// 0x31ad1d
// declared property getter: - (id)location;	// 0x31ade1
// declared property setter: - (void)setLocation:(id)location;	// 0x31af2d
// declared property getter: - (int)width;	// 0x31b065
// declared property getter: - (int)height;	// 0x31b121
@end

@interface DOMHTMLFrameElement (DOMUIKitComplexityExtensions)
- (int)structuralComplexityContribution;	// 0x34f58d
@end
