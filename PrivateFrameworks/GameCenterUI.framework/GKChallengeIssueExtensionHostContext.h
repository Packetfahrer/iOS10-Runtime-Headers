/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKChallengeIssueExtensionHostContext : GKExtensionHostContext <GKChallengeIssueHostProtocol, GKChallengeIssueServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)didFinishWithPlayerIDs:(id)arg1 message:(id)arg2;
- (id)extensionObjectProxy;
- (void)setChallenge:(id)arg1 playerInternals:(id)arg2 defaultMessage:(id)arg3 forcePicker:(bool)arg4;

@end