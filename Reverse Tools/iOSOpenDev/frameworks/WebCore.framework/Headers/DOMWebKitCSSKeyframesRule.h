/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMCSSRule.h>

@class DOMCSSRuleList, NSString;

__attribute__((visibility("hidden")))
@interface DOMWebKitCSSKeyframesRule : DOMCSSRule {
}
@property(readonly, retain) DOMCSSRuleList *cssRules;	// G=0x353039; 
@property(copy) NSString *name;	// G=0x352db5; S=0x352f01; 
// declared property getter: - (id)name;	// 0x352db5
// declared property setter: - (void)setName:(id)name;	// 0x352f01
// declared property getter: - (id)cssRules;	// 0x353039
- (void)insertRule:(id)rule;	// 0x3530f5
- (void)deleteRule:(id)rule;	// 0x35322d
- (id)findRule:(id)rule;	// 0x353365
@end
