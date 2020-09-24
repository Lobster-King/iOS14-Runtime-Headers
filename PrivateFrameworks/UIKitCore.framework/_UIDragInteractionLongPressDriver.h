/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDragInteractionDriver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIDelayedAction, _UIDragLiftGestureRecognizer, _UIRelationshipGestureRecognizer, NSString;

@interface _UIDragInteractionLongPressDriver : _UIDragInteractionDriver <UIGestureRecognizerDelegate> {

	UIDelayedAction* _gateTimer;
	UIDelayedAction* _cancellationTimer;
	unsigned long long _behavior;
	_UIDragLiftGestureRecognizer* _gestureRecognizerForDragInitiation;
	_UIRelationshipGestureRecognizer* _gestureRecognizerForFailureRelationship;
	_UIRelationshipGestureRecognizer* _gestureRecognizerForExclusionRelationship;

}

@property (nonatomic,readonly) _UIDragLiftGestureRecognizer * gestureRecognizerForDragInitiation;                         //@synthesize gestureRecognizerForDragInitiation=_gestureRecognizerForDragInitiation - In the implementation block
@property (nonatomic,readonly) _UIRelationshipGestureRecognizer * gestureRecognizerForFailureRelationship;                //@synthesize gestureRecognizerForFailureRelationship=_gestureRecognizerForFailureRelationship - In the implementation block
@property (nonatomic,readonly) _UIRelationshipGestureRecognizer * gestureRecognizerForExclusionRelationship;              //@synthesize gestureRecognizerForExclusionRelationship=_gestureRecognizerForExclusionRelationship - In the implementation block
@property (nonatomic,readonly) unsigned long long behavior;                                                               //@synthesize behavior=_behavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)detachFromView:(id)arg1 ;
-(void)setLiftMoveHysteresis:(double)arg1 ;
-(void)didTransitionToPreparing;
-(void)didTransitionToCancelState;
-(void)attachToView:(id)arg1 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(void)didTransitionToDeferred;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setLiftDelay:(double)arg1 ;
-(void)_dragInitiationGestureStateChanged:(id)arg1 ;
-(unsigned long long)behavior;
-(void)didTransitionToInflightState;
-(_UIRelationshipGestureRecognizer *)gestureRecognizerForFailureRelationship;
-(void)_updateLiftMoveHysteresisInDragInitiationGesture;
-(BOOL)shouldDelayCompetingGestureRecognizer:(id)arg1 ;
-(BOOL)canExcludeCompetingGestureRecognizer:(id)arg1 ;
-(BOOL)hasExceededAllowableMovement;
-(void)reset;
-(_UIDragLiftGestureRecognizer *)gestureRecognizerForDragInitiation;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)invalidateCancellationTimer;
-(id)init;
-(void)_gateCompetingGestureRecognizers;
-(id)initWithBehavior:(unsigned long long)arg1 ;
-(BOOL)isGestureRecognizerForDragInitiation:(id)arg1 ;
-(void)openCompetingGestureRecognizerGateCancelingGestures:(id)arg1 ;
-(BOOL)_wantsTimeDelayedFailureRequirementGate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(double)translationInWindow;
-(void)invalidateCompetingGestureRecognizerGateTimer;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setAutomaticallyAddsFailureRelationships:(BOOL)arg1 ;
-(BOOL)hasMoveHysteresisBeenReached;
-(_UIRelationshipGestureRecognizer *)gestureRecognizerForExclusionRelationship;
-(void)didTransitionToBeginState;
-(void)openGateCancelingAddItemsGestures;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)didTransitionToInactiveState;
@end
