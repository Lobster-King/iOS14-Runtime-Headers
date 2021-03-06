/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, MSVMultiCallback, PBCodable, NSError, NSString, MRProtocolClientConnection;

@interface MRProtocolMessage : NSObject {

	NSData* _protobufData;
	BOOL _replied;
	MSVMultiCallback* _messageSentCallbacks;
	MSVMultiCallback* _messagePurgedCallbacks;
	BOOL _isReply;
	PBCodable* _underlyingCodableMessage;
	NSError* _error;
	NSString* _replyIdentifier;
	NSString* _uniqueIdentifier;
	unsigned long long _timestamp;
	MRProtocolClientConnection* _clientConnection;

}

@property (nonatomic,retain) PBCodable * underlyingCodableMessage;                              //@synthesize underlyingCodableMessage=_underlyingCodableMessage - In the implementation block
@property (nonatomic,copy) NSString * replyIdentifier;                                          //@synthesize replyIdentifier=_replyIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic,__weak) MRProtocolClientConnection * clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                                      //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,readonly) NSData * protobufData; 
@property (nonatomic,readonly) unsigned long long encryptionType; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) unsigned long long priority; 
@property (nonatomic,readonly) BOOL shouldLog; 
@property (nonatomic,readonly) MSVMultiCallback * messageSentCallbacks; 
@property (nonatomic,readonly) MSVMultiCallback * messagePurgedCallbacks; 
+(id)protocolMessageWithProtobufData:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)currentProtocolVersion;
-(MRProtocolClientConnection *)clientConnection;
-(BOOL)reply;
-(void)setClientConnection:(MRProtocolClientConnection *)arg1 ;
-(unsigned long long)encryptionType;
-(void)dealloc;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isReply;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)uniqueIdentifier;
-(BOOL)shouldLog;
-(unsigned long long)type;
-(BOOL)replyWithMessage:(id)arg1 ;
-(NSData *)protobufData;
-(void)setUnderlyingCodableMessage:(PBCodable *)arg1 ;
-(PBCodable *)underlyingCodableMessage;
-(NSString *)replyIdentifier;
-(void)setReplyIdentifier:(NSString *)arg1 ;
-(MSVMultiCallback *)messagePurgedCallbacks;
-(MSVMultiCallback *)messageSentCallbacks;
-(unsigned long long)priority;
-(void)setIsReply:(BOOL)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(NSString *)description;
@end

