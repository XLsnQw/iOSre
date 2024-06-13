/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/XXUnknownSuperclass.h>

@class TableViewManager, NSString;

__attribute__((visibility("hidden")))
@interface RecommendationActionController : XXUnknownSuperclass {
	NSString *sectionIdentifier;	// 4 = 0x4
	NSString *actionKey;	// 8 = 0x8
	TableViewManager *tableManager;	// 12 = 0xc
}
@property(assign, nonatomic) TableViewManager *tableManager;	// G=0x8fa11; S=0x8fa21; @synthesize
@property(retain, nonatomic) NSString *actionKey;	// G=0x8f9a9; S=0x8f9b9; @synthesize
@property(retain, nonatomic) NSString *sectionIdentifier;	// G=0x8f9dd; S=0x8f9ed; @synthesize
+ (id)recommendationActionControllerWithTableManager:(id)tableManager andAssistantUIViewController:(id)controller;	// 0x8f65d
// declared property setter: - (void)setTableManager:(id)manager;	// 0x8fa21
// declared property getter: - (id)tableManager;	// 0x8fa11
// declared property setter: - (void)setSectionIdentifier:(id)identifier;	// 0x8f9ed
// declared property getter: - (id)sectionIdentifier;	// 0x8f9dd
// declared property setter: - (void)setActionKey:(id)key;	// 0x8f9b9
// declared property getter: - (id)actionKey;	// 0x8f9a9
- (void)selectPrimaryRecommendation;	// 0x8f96d
- (BOOL)isPrimaryRecommendation;	// 0x8f915
- (id)getSectionInfo;	// 0x8f711
@end
