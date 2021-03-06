/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBReadingHistoryItem : PBCodable <FCKeyValueStoreCoding, FCMutableReadingHistoryItem, NSCopying> {
    NSString * _articleID;
    unsigned int  _flags;
    struct { 
        unsigned int flags : 1; 
    }  _has;
    NTPBDate * _lastVisitedDate;
}

@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, readonly) unsigned long long articleLikingStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) bool hasArticleBeenConsumed;
@property (nonatomic, readonly) bool hasArticleBeenMarkedOffensive;
@property (nonatomic, readonly) bool hasArticleBeenRead;
@property (nonatomic, readonly) bool hasArticleBeenSeen;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic) bool hasFlags;
@property (nonatomic, readonly) bool hasLastVisitedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *lastVisitedAt;
@property (nonatomic, retain) NTPBDate *lastVisitedDate;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)articleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (bool)hasArticleID;
- (bool)hasFlags;
- (bool)hasLastVisitedDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastVisitedDate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setLastVisitedDate:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (id)readingHistoryItemWithCKRecord:(id)arg1;

- (unsigned long long)articleLikingStatus;
- (bool)hasArticleBeenConsumed;
- (bool)hasArticleBeenMarkedOffensive;
- (bool)hasArticleBeenRead;
- (bool)hasArticleBeenSeen;
- (id)identifier;
- (id)lastVisitedAt;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setArticleLikingStatus:(unsigned long long)arg1;
- (void)setHasArticleBeenConsumed:(bool)arg1;
- (void)setHasArticleBeenMarkedOffensive:(bool)arg1;
- (void)setHasArticleBeenRead:(bool)arg1;
- (void)setHasArticleBeenSeen:(bool)arg1;
- (void)setLastVisitedAt:(id)arg1;
- (void)writeToKeyValuePair:(id)arg1;

@end
