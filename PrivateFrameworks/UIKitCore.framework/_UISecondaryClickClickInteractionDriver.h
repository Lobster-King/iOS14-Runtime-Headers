/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIClickInteractionDriving.h>

@protocol _UIClickInteractionDriverDelegate;
@class UIView, _UISecondaryClickDriverGestureRecognizer, NSString, UIGestureRecognizer;

@interface _UISecondaryClickClickInteractionDriver : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDriving> {

	unsigned long long _currentState;
	BOOL _cancelsTouchesInView;
	BOOL _clicksUpAutomaticallyAfterTimeout;
	id<_UIClickInteractionDriverDelegate> _delegate;
	UIView* _view;
	double _allowableMovement;
	_UISecondaryClickDriverGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) _UISecondaryClickDriverGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_UIClickInteractionDriverDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                                      //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                                  //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (assign,nonatomic) BOOL cancelsTouchesInView;                                                 //@synthesize cancelsTouchesInView=_cancelsTouchesInView - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * primaryGestureRecognizer; 
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement; 
@property (nonatomic,readonly) BOOL isCurrentlyAcceleratedByForce; 
@property (nonatomic,readonly) BOOL clicksUpAutomaticallyAfterTimeout;                                  //@synthesize clicksUpAutomaticallyAfterTimeout=_clicksUpAutomaticallyAfterTimeout - In the implementation block
@property (nonatomic,readonly) double maximumEffectProgress; 
@property (nonatomic,readonly) unsigned long long inputPrecision; 
@property (assign,nonatomic) unsigned long long behavior; 
+(BOOL)prefersCancelsTouchesInView;
+(BOOL)requiresForceCapability;
-(unsigned long long)inputPrecision;
-(BOOL)cancelsTouchesInView;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(BOOL)isCurrentlyAcceleratedByForce;
-(void)setGestureRecognizer:(_UISecondaryClickDriverGestureRecognizer *)arg1 ;
-(double)maximumEffectProgress;
-(void)cancelInteraction;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(_UISecondaryClickDriverGestureRecognizer *)gestureRecognizer;
-(UIView *)view;
-(BOOL)hasExceededAllowableMovement;
-(double)touchDuration;
-(double)allowableMovement;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(id)init;
-(void)setCancelsTouchesInView:(BOOL)arg1 ;
-(void)setDelegate:(id<_UIClickInteractionDriverDelegate>)arg1 ;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(void)_attemptSecondaryClick;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
@end
