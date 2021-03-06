/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INControlHomeIntent : INIntent <INControlHomeIntent>

@property (nonatomic, readonly, copy) INHomeAttribute *attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *entities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)attribute;
- (id)entities;
- (id)initWithEntities:(id)arg1 attribute:(id)arg2;
- (void)setAttribute:(id)arg1;
- (void)setEntities:(id)arg1;

@end
