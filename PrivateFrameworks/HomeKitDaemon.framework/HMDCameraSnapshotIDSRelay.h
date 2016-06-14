/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotIDSRelay : NSObject <IDSServiceDelegate> {
    IDSService * _idsStreamService;
    HAPOSTransaction * _snapshotRelayTransaction;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSService *idsStreamService;
@property (nonatomic, retain) HAPOSTransaction *snapshotRelayTransaction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_reset;
- (id)idsStreamService;
- (id)init;
- (void)setSnapshotRelayTransaction:(id)arg1;
- (id)snapshotRelayTransaction;
- (id)uniqueIdentifier;
- (id)workQueue;

@end