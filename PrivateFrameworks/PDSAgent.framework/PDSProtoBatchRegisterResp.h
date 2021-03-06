/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface PDSProtoBatchRegisterResp : PBCodable <NSCopying> {

	long long _responseTtl;
	long long _retryInterval;
	NSString* _message;
	int _status;
	NSMutableArray* _userPushTokenRegResponses;
	SCD_Struct_PD2 _has;

}

@property (assign,nonatomic) int status;                                              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSMutableArray * userPushTokenRegResponses;              //@synthesize userPushTokenRegResponses=_userPushTokenRegResponses - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTtl; 
@property (assign,nonatomic) long long responseTtl;                                   //@synthesize responseTtl=_responseTtl - In the implementation block
@property (assign,nonatomic) BOOL hasRetryInterval; 
@property (assign,nonatomic) long long retryInterval;                                 //@synthesize retryInterval=_retryInterval - In the implementation block
+(Class)userPushTokenRegResponsesType;
-(long long)retryInterval;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(int)status;
-(void)setMessage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasMessage;
-(NSString *)message;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setRetryInterval:(long long)arg1 ;
-(NSMutableArray *)userPushTokenRegResponses;
-(BOOL)hasResponseTtl;
-(long long)responseTtl;
-(BOOL)hasRetryInterval;
-(void)addUserPushTokenRegResponses:(id)arg1 ;
-(unsigned long long)userPushTokenRegResponsesCount;
-(void)clearUserPushTokenRegResponses;
-(id)userPushTokenRegResponsesAtIndex:(unsigned long long)arg1 ;
-(void)setResponseTtl:(long long)arg1 ;
-(void)setHasResponseTtl:(BOOL)arg1 ;
-(void)setHasRetryInterval:(BOOL)arg1 ;
-(void)setUserPushTokenRegResponses:(NSMutableArray *)arg1 ;
@end

