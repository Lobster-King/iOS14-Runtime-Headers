/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _roadAccessPoints;

}

@property (nonatomic,retain) NSMutableArray * roadAccessPoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)roadAccessPointType;
+(id)roadAccessInfoForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(NSMutableArray *)roadAccessPoints;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearRoadAccessPoints;
-(id)jsonRepresentation;
-(id)roadAccessPointAtIndex:(unsigned long long)arg1 ;
-(void)addRoadAccessPoint:(id)arg1 ;
-(unsigned long long)roadAccessPointsCount;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
