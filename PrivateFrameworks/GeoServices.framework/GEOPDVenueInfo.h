/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDVenueItemList, GEOPDLocatedInsideInfo;

@interface GEOPDVenueInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _filterElements;
	GEOPDVenueItemList* _itemList;
	GEOPDLocatedInsideInfo* _locatedInside;
	NSMutableArray* _venueFeatureIds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _featureType;
	int _goInsideLevel;
	struct {
		unsigned has_featureType : 1;
		unsigned has_goInsideLevel : 1;
		unsigned read_unknownFields : 1;
		unsigned read_filterElements : 1;
		unsigned read_itemList : 1;
		unsigned read_locatedInside : 1;
		unsigned read_venueFeatureIds : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * venueFeatureIds; 
@property (assign,nonatomic) BOOL hasFeatureType; 
@property (assign,nonatomic) int featureType; 
@property (nonatomic,readonly) BOOL hasItemList; 
@property (nonatomic,retain) GEOPDVenueItemList * itemList; 
@property (nonatomic,readonly) BOOL hasLocatedInside; 
@property (nonatomic,retain) GEOPDLocatedInsideInfo * locatedInside; 
@property (nonatomic,retain) NSMutableArray * filterElements; 
@property (assign,nonatomic) BOOL hasGoInsideLevel; 
@property (assign,nonatomic) int goInsideLevel; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)venueInfoForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
+(Class)filterElementType;
+(Class)venueFeatureIdType;
-(GEOPDVenueItemList *)itemList;
-(void)setItemList:(GEOPDVenueItemList *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFeatureType:(int)arg1 ;
-(void)setHasFeatureType:(BOOL)arg1 ;
-(BOOL)hasFeatureType;
-(id)featureTypeAsString:(int)arg1 ;
-(int)StringAsFeatureType:(id)arg1 ;
-(BOOL)hasItemList;
-(GEOPDLocatedInsideInfo *)locatedInside;
-(void)addVenueFeatureId:(id)arg1 ;
-(void)setLocatedInside:(GEOPDLocatedInsideInfo *)arg1 ;
-(void)addFilterElement:(id)arg1 ;
-(void)setGoInsideLevel:(int)arg1 ;
-(unsigned long long)venueFeatureIdsCount;
-(void)clearVenueFeatureIds;
-(id)venueFeatureIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)filterElementsCount;
-(void)clearFilterElements;
-(id)filterElementAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)venueFeatureIds;
-(void)setVenueFeatureIds:(NSMutableArray *)arg1 ;
-(BOOL)hasLocatedInside;
-(NSMutableArray *)filterElements;
-(void)setFilterElements:(NSMutableArray *)arg1 ;
-(int)goInsideLevel;
-(void)setHasGoInsideLevel:(BOOL)arg1 ;
-(BOOL)hasGoInsideLevel;
-(id)jsonRepresentation;
-(int)featureType;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

