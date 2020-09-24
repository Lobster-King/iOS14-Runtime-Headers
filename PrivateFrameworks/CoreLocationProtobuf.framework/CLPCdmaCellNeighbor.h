/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPCdmaCellNeighbor : PBCodable <NSCopying> {

	int _channel;
	int _ecn0;
	int _pilotPhase;
	int _pnoffset;
	int _rscp;
	SCD_Struct_CL5 _has;

}

@property (assign,nonatomic) BOOL hasPnoffset; 
@property (assign,nonatomic) int pnoffset;                    //@synthesize pnoffset=_pnoffset - In the implementation block
@property (assign,nonatomic) BOOL hasPilotPhase; 
@property (assign,nonatomic) int pilotPhase;                  //@synthesize pilotPhase=_pilotPhase - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                        //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                        //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel;                     //@synthesize channel=_channel - In the implementation block
-(void)setHasChannel:(BOOL)arg1 ;
-(void)setChannel:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasChannel;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasRscp:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(int)ecn0;
-(void)setEcn0:(int)arg1 ;
-(BOOL)hasRscp;
-(void)setHasEcn0:(BOOL)arg1 ;
-(void)setRscp:(int)arg1 ;
-(int)rscp;
-(void)mergeFrom:(id)arg1 ;
-(int)channel;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setPnoffset:(int)arg1 ;
-(void)setHasPnoffset:(BOOL)arg1 ;
-(BOOL)hasPnoffset;
-(void)setPilotPhase:(int)arg1 ;
-(void)setHasPilotPhase:(BOOL)arg1 ;
-(BOOL)hasPilotPhase;
-(int)pnoffset;
-(int)pilotPhase;
@end
