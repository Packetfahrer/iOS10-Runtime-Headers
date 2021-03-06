/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKModalTranscriptController : CKShareSheetChatController {
    bool  _alreadySetUp;
    bool  _cameraSelectionDisabled;
    int  _entryViewInvisible;
    bool  _forceMMS;
    bool  _mimeType;
    NSMutableArray * _partsToInsert;
    NSMutableArray * _typesToInsert;
}

@property (nonatomic) bool forceMMS;
@property (nonatomic) bool mimeType;

- (void).cxx_destruct;
- (void)_conversationListDidFinishLoading:(id)arg1;
- (bool)_insertMediaObject:(id)arg1;
- (void)_setEntryViewVisible:(bool)arg1;
- (bool)_shouldAllowCameraAttachments;
- (bool)_shouldUseDefaultFirstResponder;
- (bool)_shouldUseExistingConversations;
- (void)disableCameraAttachments;
- (bool)forceMMS;
- (bool)getContainerWidth:(double*)arg1 offset:(double*)arg2;
- (id)initWithNavigationController:(id)arg1;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 fullyRealizedPreview:(id)arg4 rawPreview:(id)arg5 appendedVideoURL:(id)arg6;
- (void)insertRichLinkWithURL:(id)arg1 data:(id)arg2;
- (bool)mimeType;
- (void)registerForNotifications;
- (void)setCanEditRecipients:(bool)arg1;
- (void)setForceMMS:(bool)arg1;
- (void)setMimeType:(bool)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)setTextEntryContentsVisible:(bool)arg1;
- (bool)shouldDismissAfterSend;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
