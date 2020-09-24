/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/SiriCoreSessionObject.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceCommand.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SABaseCommand : AceObject <SiriCoreSessionObject, SAAceSerializable, SAAceCommand>

@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=ins_setProtobufEncodedIntent:,nonatomic,retain) SAIntentGroupProtobufMessage * ins_protobufEncodedIntent; 
@property (setter=ins_setJSONEncodedIntent:,nonatomic,retain) NSString * ins_jsonEncodedIntent; 
+(id)aceObjectWithDictionaryWithCustomHandling:(id)arg1 context:(id)arg2 ;
+(id)baseCommand;
+(id)baseCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)siriCore_serializedAceDataError:(id*)arg1 ;
-(BOOL)siriCore_bufferingAllowedDuringActiveSession;
-(BOOL)siriCore_isRetryable;
-(BOOL)siriCore_isRestartable;
-(BOOL)siriCore_isProvisional;
-(void)siriCore_logDiagnostics;
-(id)siriCore_requestId;
-(void)siriCore_setSessionRequestId:(id)arg1 ;
-(BOOL)siriCore_supportedByLocalSession;
-(void)setAceAndRefIdsUsing:(id)arg1 ;
-(id)ins_aceIntentResponse;
-(NSString *)ins_jsonEncodedIntent;
-(SAIntentGroupProtobufMessage *)ins_protobufEncodedIntent;
-(id)ins_jsonEncodedIntentResponse;
-(id)ins_protobufEncodedIntentResponse;
-(void)ins_invokeErrorCompletionHandler:(/*^block*/id)arg1 withErrorCode:(long long)arg2 underlyingError:(id)arg3 ;
-(long long)ins_analyticsEndEventType;
-(id)ins_afAnalyticsContext;
-(BOOL)ins_isJSONPayload;
-(void)ins_setProtobufEncodedIntent:(id)arg1 ;
-(void)ins_setJSONEncodedIntent:(id)arg1 ;
-(id)ins_aceIntent;
-(void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)ins_analyticsBeginEventType;
-(void)ins_invokeErrorCompletionHandler:(/*^block*/id)arg1 forUnderlyingError:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
