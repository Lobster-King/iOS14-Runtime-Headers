/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ADOptOutRequest : PBRequest <NSCopying> {

	double _statusChangeTimestamp;
	double _transmitTimestamp;
	NSData* _dPID;
	NSData* _iAdID;
	float _timezone;
	BOOL _optedOutStatus;
	SCD_Struct_AD4 _has;

}

@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                             //@synthesize iAdID=_iAdID - In the implementation block
@property (assign,nonatomic) BOOL hasOptedOutStatus; 
@property (assign,nonatomic) BOOL optedOutStatus;                        //@synthesize optedOutStatus=_optedOutStatus - In the implementation block
@property (assign,nonatomic) BOOL hasTransmitTimestamp; 
@property (assign,nonatomic) double transmitTimestamp;                   //@synthesize transmitTimestamp=_transmitTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatusChangeTimestamp; 
@property (assign,nonatomic) double statusChangeTimestamp;               //@synthesize statusChangeTimestamp=_statusChangeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) float timezone;                             //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) BOOL hasDPID; 
@property (nonatomic,retain) NSData * dPID;                              //@synthesize dPID=_dPID - In the implementation block
+(id)options;
-(BOOL)hasTimezone;
-(float)timezone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)dPID;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)iAdID;
-(void)setTimezone:(float)arg1 ;
-(void)setHasTimezone:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDPID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDPID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setOptedOutStatus:(BOOL)arg1 ;
-(void)setHasOptedOutStatus:(BOOL)arg1 ;
-(BOOL)hasOptedOutStatus;
-(void)setTransmitTimestamp:(double)arg1 ;
-(void)setHasTransmitTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransmitTimestamp;
-(void)setStatusChangeTimestamp:(double)arg1 ;
-(void)setHasStatusChangeTimestamp:(BOOL)arg1 ;
-(BOOL)hasStatusChangeTimestamp;
-(BOOL)optedOutStatus;
-(double)transmitTimestamp;
-(double)statusChangeTimestamp;
@end

