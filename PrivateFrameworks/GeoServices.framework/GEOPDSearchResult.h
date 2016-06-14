/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchResult : PBCodable <NSCopying> {
    GEOPDRelatedSearchSuggestion * _defaultRelatedSearchSuggestion;
    NSMutableArray * _disambiguationLabels;
    GEOMapRegion * _displayMapRegion;
    struct { 
        unsigned int searchResultType : 1; 
        unsigned int isChainResultSet : 1; 
    }  _has;
    bool  _isChainResultSet;
    NSMutableArray * _relatedSearchSuggestions;
    NSString * _resultDisplayHeader;
    GEOPDSearchClientBehavior * _searchClientBehavior;
    int  _searchResultType;
}

@property (nonatomic, retain) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property (nonatomic, retain) NSMutableArray *disambiguationLabels;
@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) bool hasDefaultRelatedSearchSuggestion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic) bool hasIsChainResultSet;
@property (nonatomic, readonly) bool hasResultDisplayHeader;
@property (nonatomic, readonly) bool hasSearchClientBehavior;
@property (nonatomic) bool hasSearchResultType;
@property (nonatomic) bool isChainResultSet;
@property (nonatomic, retain) NSMutableArray *relatedSearchSuggestions;
@property (nonatomic, retain) NSString *resultDisplayHeader;
@property (nonatomic, retain) GEOPDSearchClientBehavior *searchClientBehavior;
@property (nonatomic) int searchResultType;

+ (Class)disambiguationLabelType;
+ (Class)relatedSearchSuggestionType;

- (int)StringAsSearchResultType:(id)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)clearDisambiguationLabels;
- (void)clearRelatedSearchSuggestions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultRelatedSearchSuggestion;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (id)disambiguationLabels;
- (unsigned long long)disambiguationLabelsCount;
- (id)displayMapRegion;
- (bool)hasDefaultRelatedSearchSuggestion;
- (bool)hasDisplayMapRegion;
- (bool)hasIsChainResultSet;
- (bool)hasResultDisplayHeader;
- (bool)hasSearchClientBehavior;
- (bool)hasSearchResultType;
- (unsigned long long)hash;
- (bool)isChainResultSet;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (id)relatedSearchSuggestions;
- (unsigned long long)relatedSearchSuggestionsCount;
- (id)resultDisplayHeader;
- (id)searchClientBehavior;
- (int)searchResultType;
- (id)searchResultTypeAsString:(int)arg1;
- (void)setDefaultRelatedSearchSuggestion:(id)arg1;
- (void)setDisambiguationLabels:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setHasIsChainResultSet:(bool)arg1;
- (void)setHasSearchResultType:(bool)arg1;
- (void)setIsChainResultSet:(bool)arg1;
- (void)setRelatedSearchSuggestions:(id)arg1;
- (void)setResultDisplayHeader:(id)arg1;
- (void)setSearchClientBehavior:(id)arg1;
- (void)setSearchResultType:(int)arg1;
- (void)writeTo:(id)arg1;

@end