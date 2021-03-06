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

@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _concatenatingFormatStringsSupported;
	BOOL _styleSupported;
	BOOL _timestampFormatPatternSupported;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasConcatenatingFormatStringsSupported; 
@property (assign,nonatomic) BOOL concatenatingFormatStringsSupported; 
@property (assign,nonatomic) BOOL hasTimestampFormatPatternSupported; 
@property (assign,nonatomic) BOOL timestampFormatPatternSupported; 
@property (assign,nonatomic) BOOL hasStyleSupported; 
@property (assign,nonatomic) BOOL styleSupported; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)concatenatingFormatStringsSupported;
-(BOOL)timestampFormatPatternSupported;
-(BOOL)hasStyleSupported;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setTimestampFormatPatternSupported:(BOOL)arg1 ;
-(BOOL)hasConcatenatingFormatStringsSupported;
-(void)setStyleSupported:(BOOL)arg1 ;
-(void)setHasStyleSupported:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasConcatenatingFormatStringsSupported:(BOOL)arg1 ;
-(void)setHasTimestampFormatPatternSupported:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasTimestampFormatPatternSupported;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setConcatenatingFormatStringsSupported:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)styleSupported;
@end

