/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPMediaCollectionDownloadObserver : MPUMediaDownloadObserver {
    bool  _callingProgressHandler;
    NSMutableArray * _downloadObservers;
}

- (void).cxx_destruct;
- (void)_callProgressHandler;
- (void)_onQueue_invalidate;
- (void)dealloc;
- (double)downloadProgress;
- (unsigned long long)downloadsCount;
- (id)initWithCollection:(id)arg1;
- (bool)isCurrentlyPlayable;
- (bool)isPurchasing;

@end
