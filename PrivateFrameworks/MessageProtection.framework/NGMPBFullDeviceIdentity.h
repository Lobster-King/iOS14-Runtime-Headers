/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NGMPBP256Key;

@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying> {

	NSMutableArray* _prekeys;
	NGMPBP256Key* _signingKey;

}

@property (nonatomic,retain) NGMPBP256Key * signingKey;              //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * prekeys;               //@synthesize prekeys=_prekeys - In the implementation block
+(Class)prekeysType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addPrekeys:(id)arg1 ;
-(NSMutableArray *)prekeys;
-(void)mergeFrom:(id)arg1 ;
-(id)prekeysAtIndex:(unsigned long long)arg1 ;
-(void)setSigningKey:(NGMPBP256Key *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearPrekeys;
-(unsigned long long)prekeysCount;
-(NGMPBP256Key *)signingKey;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setPrekeys:(NSMutableArray *)arg1 ;
@end
