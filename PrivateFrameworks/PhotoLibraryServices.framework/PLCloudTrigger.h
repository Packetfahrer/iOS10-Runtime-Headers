/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudTrigger : NSObject {
    NSMutableDictionary * _subscriptions;
    NSObject<OS_dispatch_queue> * _triggerQueue;
}

- (void)activate;
- (void)dealloc;
- (id)init;
- (void)subscribeWithInstance:(id)arg1 selector:(SEL)arg2;
- (void)triggerWithContextObject:(id)arg1;
- (void)unsubscribeWithInstance:(id)arg1;

@end