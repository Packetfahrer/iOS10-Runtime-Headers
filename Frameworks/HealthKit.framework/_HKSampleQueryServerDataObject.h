/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSampleQueryServerDataObject : _HKQueryServerDataObject {
    unsigned long long  _limit;
    NSArray * _sortDescriptors;
}

@property (nonatomic) unsigned long long limit;
@property (nonatomic, retain) NSArray *sortDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (void)setLimit:(unsigned long long)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end