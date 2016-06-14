/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSearchSuggestion : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _query;
    double  _score;
    NSString * _suggestion;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *query;
@property (nonatomic) double score;
@property (nonatomic, copy) NSString *suggestion;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(unsigned long long)arg5;
- (id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(unsigned long long)arg4;
- (id)query;
- (double)score;
- (void)setIdentifier:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)suggestion;
- (unsigned long long)type;

@end