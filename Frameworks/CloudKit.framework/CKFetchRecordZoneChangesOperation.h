/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation {
    bool  _fetchAllChanges;
    id /* block */  _fetchRecordZoneChangesCompletionBlock;
    NSDictionary * _optionsByRecordZoneID;
    NSMutableDictionary * _perItemErrors;
    id /* block */  _recordChangedBlock;
    id /* block */  _recordWithIDWasDeletedBlock;
    id /* block */  _recordZoneChangeTokensUpdatedBlock;
    id /* block */  _recordZoneFetchCompletionBlock;
    NSArray * _recordZoneIDs;
    bool  _shouldFetchAssetContents;
    NSMutableDictionary * _statusByZoneID;
}

@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchRecordZoneChangesCompletionBlock;
@property (nonatomic, copy) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, retain) NSMutableDictionary *perItemErrors;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, copy) id /* block */ recordWithIDWasDeletedBlock;
@property (nonatomic, copy) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (nonatomic, copy) id /* block */ recordZoneFetchCompletionBlock;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic) bool shouldFetchAssetContents;
@property (nonatomic, copy) NSMutableDictionary *statusByZoneID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (long long)changeTypesFromSetCallbacks;
- (bool)fetchAllChanges;
- (id /* block */)fetchRecordZoneChangesCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;
- (id)optionsByRecordZoneID;
- (id)perItemErrors;
- (void)performCKOperation;
- (id /* block */)recordChangedBlock;
- (id /* block */)recordWithIDWasDeletedBlock;
- (id /* block */)recordZoneChangeTokensUpdatedBlock;
- (id)recordZoneChangesStatusByZoneID;
- (id /* block */)recordZoneFetchCompletionBlock;
- (id)recordZoneIDs;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchRecordZoneChangesCompletionBlock:(id /* block */)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setPerItemErrors:(id)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setRecordWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneChangeTokensUpdatedBlock:(id /* block */)arg1;
- (void)setRecordZoneFetchCompletionBlock:(id /* block */)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (void)setStatusByZoneID:(id)arg1;
- (bool)shouldFetchAssetContents;
- (id)statusByZoneID;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)ic_loggingDescriptionStrings;
- (id)ic_operationType;
- (void)ic_removeAllCompletionBlocks;
- (id)ic_shortLoggingDescription;

@end