/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKActionSheetMenuView : UIInterfaceActionGroupView <UIInterfaceActionHandlerInvocationDelegate> {
    <CKActionSheetMenuViewDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKActionSheetMenuViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissSelf;
- (id)initWithInterfaceActions:(id)arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end