/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CK_UIFeedBackImpactBehavior;
@class NSObject;

@interface CKImpactEffectHapticsGenerator : NSObject {

	BOOL _sendFeedbackImpactBehavior;
	NSObject*<CK_UIFeedBackImpactBehavior> _expressiveSendFeedbackImpactBehavior;
	double _feedbackImpactBehaviorDispatchDelay;

}

@property (nonatomic,retain) NSObject*<CK_UIFeedBackImpactBehavior> expressiveSendFeedbackImpactBehavior;              //@synthesize expressiveSendFeedbackImpactBehavior=_expressiveSendFeedbackImpactBehavior - In the implementation block
@property (assign,nonatomic) double feedbackImpactBehaviorDispatchDelay;                                               //@synthesize feedbackImpactBehaviorDispatchDelay=_feedbackImpactBehaviorDispatchDelay - In the implementation block
@property (assign,nonatomic) BOOL sendFeedbackImpactBehavior;                                                          //@synthesize sendFeedbackImpactBehavior=_sendFeedbackImpactBehavior - In the implementation block
-(void)setFeedbackImpactBehaviorDispatchDelay:(double)arg1 ;
-(void)setSendFeedbackImpactBehavior:(BOOL)arg1 ;
-(void)setExpressiveSendFeedbackImpactBehavior:(NSObject*<CK_UIFeedBackImpactBehavior>)arg1 ;
-(BOOL)sendFeedbackImpactBehavior;
-(void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1 cleanUpOnSend:(BOOL)arg2 ;
-(NSObject*<CK_UIFeedBackImpactBehavior>)expressiveSendFeedbackImpactBehavior;
-(void)_setUpExpressiveSendFeedbackImpactBehaviorForCoordinateSpace:(id)arg1 ;
-(double)feedbackImpactBehaviorDispatchDelay;
-(void)cleanUpImpactBehaviorFeedback;
-(void)setImpactBehaviorFeedbackDispatchTimeForSendWithImpactMessage:(id)arg1 ;
-(void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1 ;
-(id)init;
@end
