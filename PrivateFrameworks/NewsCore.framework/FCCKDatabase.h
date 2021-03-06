/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabase : NSObject <FCCloudKitCacheClearing> {
    NSString * _containerIdentifier;
    CKDatabase * _database;
    <FCCKDatabaseDelegate> * _delegate;
    bool  _hasBeenRateLimited;
    NSArray * _middleware;
    NSArray * _operationMiddleware;
    NSMutableArray * _pendingOperations;
    bool  _preferAnonymousRequests;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _ready;
    NSArray * _recordMiddleware;
    id /* block */  _startUpCompletion;
    NSArray * _startUpMiddleware;
    long long  _status;
}

@property (nonatomic, readonly) long long containerEnvironment;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCCKDatabaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBeenRateLimited;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *middleware;
@property (nonatomic, retain) NSArray *operationMiddleware;
@property (nonatomic, retain) NSMutableArray *pendingOperations;
@property bool preferAnonymousRequests;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isReady, nonatomic) bool ready;
@property (nonatomic, retain) NSArray *recordMiddleware;
@property (nonatomic, copy) id /* block */ startUpCompletion;
@property (nonatomic, retain) NSArray *startUpMiddleware;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

+ (id)fc_contentDatabaseMiddlewareWithNetworkBehaviorMonitor:(id)arg1;
+ (id)fc_databaseForContentCloudKitDatabase:(id)arg1 withNetworkBehaviorMonitor:(id)arg2;
+ (id)fc_databaseForPrivateCloudKitDatabase:(id)arg1 withNetworkBehaviorMonitor:(id)arg2 privateDataSyncingEnabled:(bool)arg3;
+ (id)fc_privateDatabaseMiddlewareWithNetworkBehaviorMonitor:(id)arg1 privateDataSyncingEnabled:(bool)arg2;
+ (id)testingDatabase;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_cacheMiddleware;
- (void)_cancelOperation:(id)arg1;
- (id)_clientRecord:(id)arg1;
- (bool)_isEnabled;
- (id)_mapObjects:(id)arg1 withRecordMiddlewareBlock:(id /* block */)arg2;
- (id)_mapRecords:(id)arg1 client:(bool)arg2;
- (void)_performStartUpWithCompletion:(id /* block */)arg1;
- (bool)_preflightOperation:(id)arg1;
- (void)_preflightRecordsInChangesOperation:(id)arg1;
- (void)_preflightRecordsInFetchOperation:(id)arg1;
- (void)_preflightRecordsInModifyOperation:(id)arg1;
- (void)_preflightRecordsInQueryOperation:(id)arg1;
- (id)_serverRecord:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)clearCloudKitCaches;
- (long long)containerEnvironment;
- (id)containerIdentifier;
- (id)database;
- (id)delegate;
- (void)deleteRecordWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecordWithID:(id)arg1 savePolicy:(long long)arg2 retryWhenZoneBusy:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteRecordWithID:(id)arg1 savePolicy:(long long)arg2 zoneBusyRetryCount:(unsigned long long)arg3 zoneBusyRetryMax:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecordsWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSubscriptionWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRecordWithID:(id)arg1 desiredKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRecordsWithIDs:(id)arg1 desiredKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchRecordsWithIDs:(id)arg1 desiredKeys:(id)arg2 qualityOfService:(long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)hasBeenRateLimited;
- (id)initWithDatabase:(id)arg1 middleware:(id)arg2;
- (id)initWithDatabase:(id)arg1 middleware:(id)arg2 startUp:(bool)arg3;
- (bool)isReady;
- (id)middleware;
- (id)operationMiddleware;
- (void)operationWasRateLimitedWithError:(id)arg1;
- (id)pendingOperations;
- (void)performQuery:(id)arg1 desiredKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performQuery:(id)arg1 desiredKeys:(id)arg2 resultsLimit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 desiredKeys:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 desiredKeys:(id)arg3 resultsLimit:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)performRecordIDsQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)preferAnonymousRequests;
- (void)q_cancelPendingOperations;
- (void)q_finishStartUpWithResult:(long long)arg1;
- (void)q_resumePendingOperations;
- (void)q_startUpWithMiddleware:(id)arg1;
- (id)queue;
- (id)recordMiddleware;
- (void)saveRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveRecord:(id)arg1 savePolicy:(long long)arg2 retryWhenZoneBusy:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)saveRecord:(id)arg1 savePolicy:(long long)arg2 zoneBusyRetryCount:(unsigned long long)arg3 zoneBusyRetryMax:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)saveRecordZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveRecords:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)saveRecords:(id)arg1 savePolicy:(long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)saveSubscription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setOperationMiddleware:(id)arg1;
- (void)setPendingOperations:(id)arg1;
- (void)setPreferAnonymousRequests:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setReady:(bool)arg1;
- (void)setRecordMiddleware:(id)arg1;
- (void)setStartUpCompletion:(id /* block */)arg1;
- (void)setStartUpMiddleware:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id /* block */)startUpCompletion;
- (id)startUpMiddleware;
- (long long)status;

@end
