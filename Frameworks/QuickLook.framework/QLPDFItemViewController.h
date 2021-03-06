/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPDFItemViewController : QLItemViewController <MarkupViewControllerDelegate> {
    bool  _isFullScreen;
    long long  _lastSavedEditNumber;
    QLMUViewController * _markupViewController;
    double  _topInset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property double topInset;

- (void).cxx_destruct;
- (void)_enableMarkupMode:(bool)arg1;
- (bool)_needToSaveChanges;
- (void)_saveChanges;
- (void)_updatePeekSize;
- (void)_updateThumbnailView;
- (void)_updateThumbnailViewWithTraitCollection:(id)arg1;
- (void)_updateToolbarVisibilityAnimated:(bool)arg1;
- (bool)automaticallyUpdateScrollViewContentInset;
- (bool)automaticallyUpdateScrollViewContentOffset;
- (void)buttonPressedWithIdentifier:(id)arg1;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canShowToolBar;
- (bool)canSwipeToDismiss;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customSketchOverlayInsets;
- (void)hideNavbar:(bool)arg1;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewWillDisappear:(bool)arg1;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setTopInset:(double)arg1;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (id)toolbarButtons;
- (double)topInset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
