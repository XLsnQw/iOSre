/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController.h>
#import <AirPortAssistant/TableViewManagerDelegate.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface StepByStepUIViewController_ReplaceChoice : StepByStepUIViewController <TableViewManagerDelegate> {
	UIView *tableHeaderContainerView;	// 220 = 0xdc
	UIView *justTextContainerView;	// 224 = 0xe0
	UILabel *justTextLabel;	// 228 = 0xe4
}
@property(retain, nonatomic) UILabel *justTextLabel;	// G=0x18e1d; S=0x18e2d; @synthesize
@property(retain, nonatomic) UIView *justTextContainerView;	// G=0x18de9; S=0x18df9; @synthesize
@property(retain, nonatomic) UIView *tableHeaderContainerView;	// G=0x18db5; S=0x18dc5; @synthesize
// declared property setter: - (void)setJustTextLabel:(id)label;	// 0x18e2d
// declared property getter: - (id)justTextLabel;	// 0x18e1d
// declared property setter: - (void)setJustTextContainerView:(id)view;	// 0x18df9
// declared property getter: - (id)justTextContainerView;	// 0x18de9
// declared property setter: - (void)setTableHeaderContainerView:(id)view;	// 0x18dc5
// declared property getter: - (id)tableHeaderContainerView;	// 0x18db5
- (void)touchInCellAtIndexPath:(id)indexPath;	// 0x18cf9
- (void)viewWillAppear:(BOOL)view;	// 0x18c79
- (void)viewDidLoad;	// 0x18b8d
- (void)setupTable;	// 0x18895
@end
