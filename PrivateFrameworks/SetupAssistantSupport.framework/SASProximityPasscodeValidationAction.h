/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityPasscodeValidationAction : SASProximityAction {

	BOOL _passcodeValid;
	NSString* _passcode;

}

@property (retain) NSString * passcode;              //@synthesize passcode=_passcode - In the implementation block
@property (assign) BOOL passcodeValid;               //@synthesize passcodeValid=_passcodeValid - In the implementation block
+(unsigned long long)actionID;
+(id)actionFromDictionary:(id)arg1 ;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(BOOL)hasResponse;
-(id)requestPayload;
-(void)setResponseFromData:(id)arg1 ;
-(id)responsePayload;
-(void)setPasscodeValid:(BOOL)arg1 ;
-(BOOL)passcodeValid;
@end
