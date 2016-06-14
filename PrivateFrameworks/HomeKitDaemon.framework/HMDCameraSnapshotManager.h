/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotManager : NSObject <HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMFLogging, HMFMessageReceiver, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    HMDSnapshotLocalSession * _currentLocalSession;
    NSMutableDictionary * _currentRemoteSessions;
    NSString * _imageCacheDirectory;
    HMDCameraSnapshotMonitorEvents * _monitorServicesManager;
    HMFMessageDispatcher * _msgDispatcher;
    HMDSnapshotRequestHandler * _snapshotRequestHandler;
    HMDSnapshotSlotManager * _snapshotSlotManager;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, retain) HMDSnapshotLocalSession *currentLocalSession;
@property (nonatomic, retain) NSMutableDictionary *currentRemoteSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *imageCacheDirectory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMDCameraSnapshotMonitorEvents *monitorServicesManager;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) HMDSnapshotRequestHandler *snapshotRequestHandler;
@property (nonatomic, readonly) HMDSnapshotSlotManager *snapshotSlotManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (void)clearAllImages;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_endSession:(id)arg1;
- (id)_findSessionWithID:(id)arg1;
- (void)_handleReleaseSnapshot:(id)arg1;
- (void)_handleSnapshotReceived:(id)arg1;
- (void)_handleSnapshotRemoteRequest:(id)arg1;
- (void)_handleSnapshotRequest:(id)arg1;
- (void)_handleSnapshotSendFailure:(id)arg1;
- (void)_issueGetSnapshot:(id)arg1;
- (void)_message:(id)arg1 errored:(long long)arg2;
- (void)_removeAllPendingRequests;
- (void)_sendRemoteResponse:(id)arg1 sessionID:(id)arg2;
- (void)_sendResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_sendSnapshotRequestLocal:(id)arg1;
- (void)_sendSnapshotRequestRelayInitiator:(id)arg1;
- (void)_sendSnapshotRequestRelayReceiver:(id)arg1;
- (void)_sendSnapshotRequestRelayStream:(id)arg1;
- (void)_sendSnapshotRequestStreamInitiator:(id)arg1;
- (void)_sendSnapshotRequestStreamReceiver:(id)arg1;
- (id)accessory;
- (id)currentLocalSession;
- (id)currentRemoteSessions;
- (void)dealloc;
- (void)handleAccessoryIsNotReachable:(id)arg1;
- (id)imageCacheDirectory;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 msgDispatcher:(id)arg3;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)monitorForEventsForServices:(id)arg1;
- (id)monitorServicesManager;
- (id)msgDispatcher;
- (void)registerForMessages;
- (void)releaseSnapshot:(id)arg1;
- (void)setCurrentLocalSession:(id)arg1;
- (void)setCurrentRemoteSessions:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotRelaySender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelaySender:(id)arg1 didStartSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelayStream:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelayStream:(id)arg1 didStartSendImage:(id)arg2 sessionID:(id)arg3;
- (id)snapshotRequestHandler;
- (id)snapshotSlotManager;
- (void)snapshotStreamReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotStreamSender:(id)arg1 didStartSendImage:(id)arg2 sessionID:(id)arg3;
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
- (void)takeSnapshot:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)uniqueIdentifier;
- (id)workQueue;

@end