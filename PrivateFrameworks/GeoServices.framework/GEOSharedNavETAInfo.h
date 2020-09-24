/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOSharedNavETAInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _etaTimestamp;
	double _latitude;
	double _longitude;
	double _remainingDistance;
	double _remainingTime;
	struct {
		unsigned has_etaTimestamp : 1;
		unsigned has_latitude : 1;
		unsigned has_longitude : 1;
		unsigned has_remainingDistance : 1;
		unsigned has_remainingTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRemainingDistance; 
@property (assign,nonatomic) double remainingDistance; 
@property (assign,nonatomic) BOOL hasRemainingTime; 
@property (assign,nonatomic) double remainingTime; 
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasEtaTimestamp; 
@property (assign,nonatomic) double etaTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLatitude;
-(void)setRemainingTime:(double)arg1 ;
-(id)jsonRepresentation;
-(double)remainingTime;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEtaTimestamp:(double)arg1 ;
-(void)setRemainingDistance:(double)arg1 ;
-(double)remainingDistance;
-(void)setHasRemainingDistance:(BOOL)arg1 ;
-(BOOL)hasRemainingDistance;
-(double)etaTimestamp;
-(void)setHasEtaTimestamp:(BOOL)arg1 ;
-(BOOL)hasEtaTimestamp;
-(id)initWithJSON:(id)arg1 ;
-(double)longitude;
-(double)latitude;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setLatitude:(double)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setHasRemainingTime:(BOOL)arg1 ;
-(BOOL)hasRemainingTime;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(void)setLongitude:(double)arg1 ;
-(id)dictionaryRepresentation;
@end
