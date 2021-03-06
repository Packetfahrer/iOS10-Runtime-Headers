/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailPredictedLocationCell : UITableViewCell {
    <EKEventDetailPredictedLocationCellDelegate> * _delegate;
    UIButton * _dismissButton;
    EKEvent * _event;
    EKStructuredLocation * _location;
    EKEventDetailsHighlightControl * _titleControl;
}

@property <EKEventDetailPredictedLocationCellDelegate> *delegate;

- (void).cxx_destruct;
- (void)_disambiguateIfNeeded;
- (void)_setEventDate:(id)arg1;
- (void)confirmLocationTapped:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initEditable:(bool)arg1;
- (void)rejectLocationTapped:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1;

@end
