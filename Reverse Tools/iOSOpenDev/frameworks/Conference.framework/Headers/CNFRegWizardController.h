/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <Conference/XXUnknownSuperclass.h>

@class CNFRegController;
@protocol CNFRegWizardControllerDelegate;

@interface CNFRegWizardController : XXUnknownSuperclass {
@private
	CNFRegController *_regController;	// 256 = 0x100
	int _serviceType;	// 260 = 0x104
	id<CNFRegWizardControllerDelegate> _firstRunDelegate;	// 264 = 0x108
	id _resignListener;	// 268 = 0x10c
	id _resumeListener;	// 272 = 0x110
	struct {
		unsigned automaticKeyboardWasDisabled : 1;
		unsigned shouldListenForSuspension : 1;
		unsigned canStartNested : 1;
		unsigned canShowSplashScreen : 1;
		unsigned canShowDisabledScreen : 1;
		unsigned hideLearnMoreButton : 1;
		unsigned showSplashOnSignin : 1;
		unsigned reloadOnViewWillAppear : 1;
		unsigned allowCancel : 1;
	} _wizardFlags;	// 276 = 0x114
}
@property(assign, nonatomic) id<CNFRegWizardControllerDelegate> firstRunDelegate;	// G=0x273bd; S=0x273cd; @synthesize=_firstRunDelegate
@property(retain, nonatomic) CNFRegController *regController;	// G=0x273ad; S=0x27419; @synthesize=_regController
@property(assign, nonatomic) BOOL reloadOnViewWillAppear;	// G=0x272a9; S=0x272bd; @dynamic
@property(assign, nonatomic) BOOL shouldListenForSuspension;	// G=0x272d9; S=0x272ed; @dynamic
@property(assign, nonatomic) BOOL hideLearnMoreButton;	// G=0x27345; S=0x27359; @dynamic
@property(assign, nonatomic) BOOL canShowDisabledScreen;	// G=0x27275; S=0x27289; @dynamic
@property(assign, nonatomic) BOOL showSplashOnSignin;	// G=0x27379; S=0x2738d; 
@property(assign, nonatomic) BOOL allowCancel;	// G=0x2730d; S=0x27325; 
@property(assign, nonatomic) BOOL canShowSplashScreen;	// G=0x27241; S=0x27255; 
@property(assign, nonatomic) BOOL canStartNested;	// G=0x2720d; S=0x27221; 
+ (void)setGlobalAppearanceStyle:(int)style;	// 0x27411
+ (void)setSupportsAutoRotation:(BOOL)rotation;	// 0x27409
- (id)initWithRegController:(id)regController;	// 0x287cd
- (id)initWithServiceTypes:(int)serviceTypes;	// 0x28791
- (id)init;	// 0x2877d
- (void)dealloc;	// 0x2870d
- (int)_firstRunState:(id)state;	// 0x28691
- (id)controllerClassesToShow:(BOOL)show;	// 0x28451
- (id)controllersToShow:(BOOL)show;	// 0x280e5
- (id)controllersToShow;	// 0x280d1
- (BOOL)shouldShowFirstRunController:(BOOL)controller;	// 0x27f61
- (BOOL)shouldShowFirstRunController;	// 0x27f49
- (void)viewDidLoad;	// 0x27ec1
- (void)setupController;	// 0x279f5
- (void)viewWillAppear:(BOOL)view;	// 0x2793d
- (void)viewDidAppear:(BOOL)view;	// 0x278cd
- (void)viewWillDisappear:(BOOL)view;	// 0x27875
- (void)viewDidDisappear:(BOOL)view;	// 0x273dd
- (void)_startListeningForResignResume;	// 0x276ed
- (void)_stopListeningForResignResume;	// 0x2762d
- (void)dismissWithState:(unsigned)state;	// 0x27619
- (void)dismissFinished:(BOOL)finished;	// 0x274fd
- (void)firstRunController:(id)controller finishedWithState:(unsigned)state;	// 0x274e9
- (void)_doCancel;	// 0x2747d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x27441
// declared property getter: - (BOOL)canStartNested;	// 0x2720d
// declared property setter: - (void)setCanStartNested:(BOOL)nested;	// 0x27221
// declared property getter: - (BOOL)canShowSplashScreen;	// 0x27241
// declared property setter: - (void)setCanShowSplashScreen:(BOOL)screen;	// 0x27255
// declared property getter: - (BOOL)canShowDisabledScreen;	// 0x27275
// declared property setter: - (void)setCanShowDisabledScreen:(BOOL)screen;	// 0x27289
// declared property getter: - (BOOL)reloadOnViewWillAppear;	// 0x272a9
// declared property setter: - (void)setReloadOnViewWillAppear:(BOOL)appear;	// 0x272bd
// declared property getter: - (BOOL)shouldListenForSuspension;	// 0x272d9
// declared property setter: - (void)setShouldListenForSuspension:(BOOL)listenForSuspension;	// 0x272ed
// declared property getter: - (BOOL)allowCancel;	// 0x2730d
// declared property setter: - (void)setAllowCancel:(BOOL)cancel;	// 0x27325
// declared property getter: - (BOOL)hideLearnMoreButton;	// 0x27345
// declared property setter: - (void)setHideLearnMoreButton:(BOOL)button;	// 0x27359
// declared property getter: - (BOOL)showSplashOnSignin;	// 0x27379
// declared property setter: - (void)setShowSplashOnSignin:(BOOL)signin;	// 0x2738d
// declared property getter: - (id)regController;	// 0x273ad
// declared property setter: - (void)setRegController:(id)controller;	// 0x27419
// declared property getter: - (id)firstRunDelegate;	// 0x273bd
// declared property setter: - (void)setFirstRunDelegate:(id)delegate;	// 0x273cd
@end
