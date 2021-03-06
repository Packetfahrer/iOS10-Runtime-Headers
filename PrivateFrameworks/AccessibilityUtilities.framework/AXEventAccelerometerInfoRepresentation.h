/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventAccelerometerInfoRepresentation : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _type;
    float  _x;
    float  _y;
    float  _z;
}

@property (nonatomic) unsigned int type;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (void)setZ:(float)arg1;
- (unsigned int)type;
- (float)x;
- (float)y;
- (float)z;

@end
