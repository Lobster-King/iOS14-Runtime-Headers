/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>

@interface INSendRideFeedbackIntentResponse : INIntentResponse

@property (nonatomic,readonly) long long code; 
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(long long)code;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
