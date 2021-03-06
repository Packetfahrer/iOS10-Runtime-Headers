/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLSamplerDescriptor : NSObject <NSCopying> {
    bool  _lodAverage;
}

@property (nonatomic) unsigned long long compareFunction;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool lodAverage;
@property (nonatomic) float lodMaxClamp;
@property (nonatomic) float lodMinClamp;
@property (nonatomic) unsigned long long magFilter;
@property (nonatomic) unsigned long long maxAnisotropy;
@property (nonatomic) unsigned long long minFilter;
@property (nonatomic) unsigned long long mipFilter;
@property (nonatomic) bool normalizedCoordinates;
@property (nonatomic) unsigned long long rAddressMode;
@property (nonatomic) unsigned long long sAddressMode;
@property (nonatomic) unsigned long long tAddressMode;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)lodAverage;
- (void)setLodAverage:(bool)arg1;

@end
