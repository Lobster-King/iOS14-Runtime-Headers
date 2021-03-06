/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableMedicalDateInterval;

@interface HDCodableMedicationDosage : PBCodable <NSCopying> {

	NSString* _instruction;
	HDCodableMedicalDateInterval* _timingPeriod;

}

@property (nonatomic,readonly) BOOL hasInstruction; 
@property (nonatomic,retain) NSString * instruction;                                   //@synthesize instruction=_instruction - In the implementation block
@property (nonatomic,readonly) BOOL hasTimingPeriod; 
@property (nonatomic,retain) HDCodableMedicalDateInterval * timingPeriod;              //@synthesize timingPeriod=_timingPeriod - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setInstruction:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HDCodableMedicalDateInterval *)timingPeriod;
-(NSString *)instruction;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setTimingPeriod:(HDCodableMedicalDateInterval *)arg1 ;
-(BOOL)hasInstruction;
-(BOOL)hasTimingPeriod;
@end

