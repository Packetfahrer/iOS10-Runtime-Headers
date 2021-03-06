/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsCloudKitServerChangeTokenCache : NSObject {
    NSMutableDictionary * _databaseChangeTokensByDatabaseScope;
    NSMutableDictionary * _zoneChangeTokensByZoneID;
}

- (void).cxx_destruct;
- (id)init;
- (id)serverChangeTokenForDatabase:(id)arg1;
- (id)serverChangeTokenForRecordZoneID:(id)arg1;
- (void)setServerChangeToken:(id)arg1 forDatabase:(id)arg2;
- (void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;

@end
