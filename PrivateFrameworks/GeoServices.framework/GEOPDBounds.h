/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBounds : PBCodable <NSCopying> {
    GEOMapRegion * _displayMapRegion;
    GEOMapRegion * _mapRegion;
}

@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, retain) GEOMapRegion *mapRegion;

+ (id)boundsInfoForPlaceData:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (bool)hasDisplayMapRegion;
- (bool)hasMapRegion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)writeTo:(id)arg1;

@end