/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */




@protocol UIPrintInteractionControllerDelegate <NSObject>
@optional
- (void)printInteractionControllerDidFinishJob:(id)printInteractionController;
- (void)printInteractionControllerWillStartJob:(id)printInteractionController;
- (void)printInteractionControllerDidDismissPrinterOptions:(id)printInteractionController;
- (void)printInteractionControllerWillDismissPrinterOptions:(id)printInteractionController;
- (void)printInteractionControllerDidPresentPrinterOptions:(id)printInteractionController;
- (void)printInteractionControllerWillPresentPrinterOptions:(id)printInteractionController;
- (id)printInteractionController:(id)controller choosePaper:(id)paper;
- (id)printInteractionControllerParentViewController:(id)controller;
@end

