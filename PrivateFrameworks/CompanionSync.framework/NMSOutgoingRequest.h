/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSDeviceTargetable.h>
#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NSSet, NSData, NSString, NSDictionary, NMSMessageCenter;

@interface NMSOutgoingRequest : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding> {

	BOOL _shouldEncrypt;
	unsigned short _messageID;
	NSSet* targetDeviceIDs;
	NSData* _data;
	NSString* _idsIdentifier;
	unsigned long long _priority;
	double _sendTimeout;
	double _responseTimeout;
	NSDictionary* _persistentUserInfo;
	NSDictionary* _extraIDSOptions;
	NMSMessageCenter* _messageCenter;
	id _pbRequest;

}

@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) id pbRequest;                                         //@synthesize pbRequest=_pbRequest - In the implementation block
@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                   //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (assign,nonatomic) double responseTimeout;                               //@synthesize responseTimeout=_responseTimeout - In the implementation block
@property (assign,nonatomic) BOOL shouldEncrypt;                                   //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                    //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * extraIDSOptions;                       //@synthesize extraIDSOptions=_extraIDSOptions - In the implementation block
@property (nonatomic,copy) NSSet * targetDeviceIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestWithMessageID:(unsigned short)arg1 ;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(NSData *)data;
-(BOOL)shouldEncrypt;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setShouldEncrypt:(BOOL)arg1 ;
-(id)init;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NSString *)idsIdentifier;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageID:(unsigned short)arg1 ;
-(unsigned short)messageID;
-(unsigned long long)priority;
-(NSString *)description;
-(id)CPObfuscatedDescriptionObject;
-(id)pbRequest;
-(NSDictionary *)persistentUserInfo;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(void)setPbRequest:(id)arg1 ;
-(void)setResponseTimeout:(double)arg1 ;
-(void)setExtraIDSOptions:(NSDictionary *)arg1 ;
-(double)sendTimeout;
-(void)setTargetDeviceIDs:(NSSet *)arg1 ;
-(NSDictionary *)extraIDSOptions;
-(NSSet *)targetDeviceIDs;
-(double)responseTimeout;
@end

