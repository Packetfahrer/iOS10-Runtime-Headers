/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPredictionStore : NSObject {
    _DECSqliteDatabase * _db;
    _DECPredictionStoreReader * _reader;
}

- (void).cxx_destruct;
- (void)_migrate;
- (id)_migrationPlan;
- (id)dateOfLastPredictionForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2;
- (id)init;
- (id)initWithInMemoryStore;
- (id)initWithPath:(id)arg1;
- (id)initWithSqliteDatabase:(id)arg1;
- (bool)insertResultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 result:(id)arg3;
- (id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2;
- (id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)schemaVersion;

@end
