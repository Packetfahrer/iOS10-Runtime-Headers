/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic {
    PLNSNotificationOperatorComposition * _basebandTimeNotification;
    bool  _followupCurrentTimeRunning;
}

@property (retain) PLNSNotificationOperatorComposition *basebandTimeNotification;
@property bool followupCurrentTimeRunning;

- (void).cxx_destruct;
- (id)basebandTimeNotification;
- (id)currentTime;
- (void)dealloc;
- (bool)followupCurrentTimeRunning;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3;
- (void)registerForTimeChangedNotification;
- (void)setBasebandTimeNotification:(id)arg1;
- (void)setFollowupCurrentTimeRunning:(bool)arg1;
- (void)timeChangedNotificationReceived:(id)arg1;

@end