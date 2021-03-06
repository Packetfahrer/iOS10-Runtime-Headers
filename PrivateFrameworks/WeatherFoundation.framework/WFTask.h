/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFTask : NSObject {
    WFTaskIdentifier * _identifier;
    bool  _requiresResponse;
}

@property (nonatomic, readonly) WFTaskIdentifier *identifier;
@property (nonatomic, readonly) bool requiresResponse;

+ (id)sharedServiceConnection;

- (void).cxx_destruct;
- (void)executeSynchronously;
- (void)handleResponse:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithResponseRequired:(bool)arg1;
- (bool)requiresResponse;
- (void)start;
- (void)startWithService:(id)arg1;

@end
