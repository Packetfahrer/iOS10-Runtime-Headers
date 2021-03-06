/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitLineItemViewController : MKStackingViewController <MKNearestStationViewControllerDelegate, MKPlaceCardActionControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKStackingViewControllerDelegate, _MKInfoCardAnaylticsDelegate, _MKInfoCardController> {
    MKPlaceCardActionsViewController * _actionsViewController;
    MKPlaceCardActionItem * _addToFavoritesItem;
    <MKTransitLineItemViewControllerDelegate> * _delegate;
    NSNumber * _favorited;
    MKPlaceCardHeaderViewController * _headerViewController;
    NSString * _lastNearestRequestErrorMessage;
    unsigned long long  _lastRequestedNearestID;
    <MKLocationManagerOperation> * _locationOperation;
    MKMapItem * _nearestStation;
    <MKMapServiceTicket> * _nearestStationTicket;
    MKNearestStationViewController * _nearestStationViewController;
    NSMutableArray * _placeActionItemsArray;
    MKPlaceCardActionItem * _removeFromFavoritesItem;
    <UIScrollViewDelegate> * _scrollViewDelegate;
    <GEOTransitLineItem> * _transitLineItem;
}

@property (nonatomic, retain) MKPlaceCardActionItem *addToFavoritesItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKTransitLineItemViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *favorited;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKPlaceCardActionItem *removeFromFavoritesItem;
@property (nonatomic) <UIScrollViewDelegate> *scrollViewDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) <GEOTransitLineItem> *transitLineItem;

- (void).cxx_destruct;
- (void)_fetchNearestStation;
- (void)_updateViewControllers;
- (id)addToFavoritesItem;
- (id)delegate;
- (id)favorited;
- (void)hideTitle:(bool)arg1;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (id)initWithTransitLineItem:(id)arg1;
- (int)mapTypeForPlaceCardHeaderViewController:(id)arg1;
- (void)nearestStationViewControllerDidSelectStation:(id)arg1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)arg1;
- (void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectActionButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectDirectionsButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectOpenContactButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectRerouteButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectShareLocationButton:(id)arg1;
- (id)removeFromFavoritesItem;
- (id)scrollViewDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAddToFavoritesItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFavorited:(id)arg1;
- (void)setRemoveFromFavoritesItem:(id)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setTransitLineItem:(id)arg1;
- (double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
- (id)transitLineItem;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
