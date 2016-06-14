/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPClientProtocol, RPDaemonProtocol> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)daemonProxy;

- (void).cxx_destruct;
- (oneway void)clientDidBecomeActiveWithBundleID:(id)arg1;
- (oneway void)clientDidResignActiveWithBundleID:(id)arg1;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (oneway void)discardRecordingWithHandler:(id /* block */)arg1;
- (id)init;
- (oneway void)pauseRecording;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (void)setConnection:(id)arg1;
- (oneway void)setMicrophoneEnabled:(bool)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(id /* block */)arg5;
- (oneway void)startRecordingWindowLayerContextIDs:(id)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 microphoneEnabled:(bool)arg3 cameraEnabled:(bool)arg4 broadcast:(bool)arg5 systemRecording:(bool)arg6 withHandler:(id /* block */)arg7;
- (oneway void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2;
- (oneway void)stopRecordingWithHandler:(id /* block */)arg1;
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(id /* block */)arg3;

@end