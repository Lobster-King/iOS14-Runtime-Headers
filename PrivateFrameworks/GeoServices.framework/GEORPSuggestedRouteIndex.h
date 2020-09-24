/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying> {

	SCD_Struct_GE17* _clusteredRouteRideSelections;
	unsigned _directionsResponseIndex;
	unsigned _directionsResponseSuggestedRoutesIndex;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasDirectionsResponseIndex; 
@property (assign,nonatomic) unsigned directionsResponseIndex; 
@property (assign,nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex; 
@property (assign,nonatomic) unsigned directionsResponseSuggestedRoutesIndex; 
@property (nonatomic,readonly) unsigned long long clusteredRouteRideSelectionsCount; 
@property (nonatomic,readonly) unsigned* clusteredRouteRideSelections; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDirectionsResponseIndex:(unsigned)arg1 ;
-(void)setDirectionsResponseSuggestedRoutesIndex:(unsigned)arg1 ;
-(void)addClusteredRouteRideSelections:(unsigned)arg1 ;
-(unsigned long long)clusteredRouteRideSelectionsCount;
-(unsigned)directionsResponseIndex;
-(void)clearClusteredRouteRideSelections;
-(unsigned)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasDirectionsResponseIndex:(BOOL)arg1 ;
-(BOOL)hasDirectionsResponseIndex;
-(unsigned*)clusteredRouteRideSelections;
-(unsigned)directionsResponseSuggestedRoutesIndex;
-(void)setHasDirectionsResponseSuggestedRoutesIndex:(BOOL)arg1 ;
-(BOOL)hasDirectionsResponseSuggestedRoutesIndex;
-(void)setClusteredRouteRideSelections:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
