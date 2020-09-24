/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOScreenDimension : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _height;
	double _width;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) double height; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHeight:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(double)height;
-(id)jsonRepresentation;
-(BOOL)hasHeight;
-(BOOL)hasWidth;
-(void)setWidth:(double)arg1 ;
-(void)setHasHeight:(BOOL)arg1 ;
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
-(void)setHasWidth:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
