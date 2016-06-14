/* Generated by RuntimeBrowser.
 */

@protocol MSPMapsPushDaemonProxy <MSPRemoteModelAccess>

@required

- (void)checkin;
- (void)clearBulletinWithRecordID:(NSString *)arg1;
- (void)clearCurrentAnnouncement;
- (void)clearParkedCarBulletin;
- (void)clearTrafficConditionsBulletin;
- (void)clearTrafficIncidentBulletinWithAlertID:(NSData *)arg1;
- (void)clearTrafficIncidentsBulletin;
- (void)clearTransitAlightAlertBulletin;
- (void)fetchCurrentAnnouncement:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOAnnouncement *, void*
- (void)fetchDevicePushToken:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)fetchProblemStatus;
- (void)problemStatusResponseWithNotificationID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEORPProblemStatusResponse *, void*
- (void)registerForTopic;
- (void)removeProblemStatusResponseWithNotificationID:(NSString *)arg1;
- (void)resetShownAnnouncements;
- (void)setShouldUseDevAPNS:(bool)arg1;
- (void)shouldUseDevAPNS:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showParkedCarBulletinForEvent:(RTVehicleEvent *)arg1;
- (void)showParkedCarBulletinForEvent:(RTVehicleEvent *)arg1 afterDelay:(double)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(RTVehicleEvent *)arg1 replacingEvent:(RTVehicleEvent *)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(RTVehicleEvent *)arg1 replacingEvent:(RTVehicleEvent *)arg2 afterDelay:(double)arg3;
- (void)showTrafficConditionsBulletinWithTitle:(NSString *)arg1 message:(NSString *)arg2 actionURL:(NSURL *)arg3;
- (void)showTrafficIncidentAlertWithID:(NSData *)arg1 type:(unsigned long long)arg2 title:(NSString *)arg3 description:(NSString *)arg4;
- (void)showTransitAlightAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (void)simulateAnnouncement:(GEOAnnouncement *)arg1;
- (void)simulateProblemResolution;

@end