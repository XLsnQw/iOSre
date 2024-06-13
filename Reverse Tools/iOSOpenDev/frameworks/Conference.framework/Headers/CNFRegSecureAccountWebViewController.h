/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <Conference/Conference-Structs.h>
#import <Conference/CNFRegAccountWebViewController.h>

@class IMAccount;

@interface CNFRegSecureAccountWebViewController : CNFRegAccountWebViewController {
@private
	IMAccount *_account;	// 200 = 0xc8
	BOOL _triedGettingNewCredentials;	// 204 = 0xcc
	BOOL _gotNewCredential;	// 205 = 0xcd
	unsigned _signinFailureCount;	// 208 = 0xd0
}
@property(retain, nonatomic) IMAccount *account;	// G=0x4d995; S=0x4d9f1; @synthesize=_account
- (id)initWithRegController:(id)regController account:(id)account;	// 0x4d9a5
- (void)dealloc;	// 0x4e305
- (void)viewDidAppear:(BOOL)view;	// 0x4e2c5
- (void)viewWillDisappear:(BOOL)view;	// 0x4e275
- (void)doHandoffWithStatus:(int)status appleID:(id)anId authID:(id)anId3 authToken:(id)token;	// 0x4e14d
- (void)_handleTimeout;	// 0x4e13d
- (void)_showRegistrationFailureWithError:(id)error;	// 0x4df89
- (void)_showBadPasswordAlert;	// 0x4de05
- (void)_showRequestPasswordAlert;	// 0x4dc89
- (void)_launchForgotPasswordUrl;	// 0x4dc49
- (void)_resetSigninFailureCount;	// 0x4d965
- (void)_incrementSigninFailureCount;	// 0x4d979
- (void)_showForgotPasswordAlert;	// 0x4dadd
- (id)authIdHeaderValue;	// 0x4dab5
- (id)authTokenHeaderValue;	// 0x4da8d
- (void)_setupAccountHandlers;	// 0x4da19
// declared property getter: - (id)account;	// 0x4d995
// declared property setter: - (void)setAccount:(id)account;	// 0x4d9f1
@end
