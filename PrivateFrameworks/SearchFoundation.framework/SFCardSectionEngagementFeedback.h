/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSectionFeedback.h>
#import <libobjc.A.dylib/CRCardSectionEngagementFeedback.h>

@class SFPunchout, NSString;

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback <CRCardSectionEngagementFeedback> {

	SFPunchout* _destination;
	unsigned long long _triggerEvent;
	unsigned long long _actionCardType;
	unsigned long long _actionTarget;

}

@property (nonatomic,readonly) SFCardSectionEngagementFeedback * backingFeedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SFPunchout * destination;                                         //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;                                  //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (assign,nonatomic) unsigned long long actionCardType;                                //@synthesize actionCardType=_actionCardType - In the implementation block
@property (assign,nonatomic) unsigned long long actionTarget;                                  //@synthesize actionTarget=_actionTarget - In the implementation block
+(BOOL)supportsSecureCoding;
-(SFCardSectionEngagementFeedback *)backingFeedback;
-(unsigned long long)triggerEvent;
-(void)setDestination:(SFPunchout *)arg1 ;
-(SFPunchout *)destination;
-(void)setActionTarget:(unsigned long long)arg1 ;
-(void)setActionCardType:(unsigned long long)arg1 ;
-(unsigned long long)actionCardType;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCardSection:(id)arg1 destination:(id)arg2 triggerEvent:(unsigned long long)arg3 actionCardType:(unsigned long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(unsigned long long)actionTarget;
@end
