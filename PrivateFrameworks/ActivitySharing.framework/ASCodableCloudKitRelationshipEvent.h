/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCodableCloudKitRelationshipEvent : PBCodable <NSCopying> {

	long long _anchor;
	double _date;
	long long _type;
	SCD_Struct_AS7 _has;

}

@property (assign,nonatomic) BOOL hasAnchor; 
@property (assign,nonatomic) long long anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                   //@synthesize date=_date - In the implementation block
-(long long)anchor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(double)arg1 ;
-(BOOL)hasDate;
-(double)date;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasAnchor;
-(void)mergeFrom:(id)arg1 ;
-(long long)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setHasDate:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setAnchor:(long long)arg1 ;
-(void)setHasAnchor:(BOOL)arg1 ;
@end

