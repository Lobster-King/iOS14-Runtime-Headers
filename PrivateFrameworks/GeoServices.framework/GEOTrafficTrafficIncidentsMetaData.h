/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTrafficTrafficIncidentsMetaData : PBCodable <NSCopying> {

	NSString* _archiveId;
	unsigned long long _archiveTime;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasArchiveId; 
@property (nonatomic,retain) NSString * archiveId; 
@property (assign,nonatomic) BOOL hasArchiveTime; 
@property (assign,nonatomic) unsigned long long archiveTime; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)archiveId;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setArchiveId:(NSString *)arg1 ;
-(BOOL)hasArchiveId;
-(void)setArchiveTime:(unsigned long long)arg1 ;
-(unsigned long long)archiveTime;
-(void)setHasArchiveTime:(BOOL)arg1 ;
-(BOOL)hasArchiveTime;
-(id)description;
-(id)dictionaryRepresentation;
@end
