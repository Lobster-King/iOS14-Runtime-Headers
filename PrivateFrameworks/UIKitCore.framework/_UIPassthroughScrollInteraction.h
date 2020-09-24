/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegateInternal.h>
#import <UIKit/UIInteraction.h>

@protocol _UIPassthroughScrollInteractionDelegate;
@class UIView, _UIPassthroughScrollGestureRecognizer, _UIPassthroughGateGestureRecognizer, NSString;

@interface _UIPassthroughScrollInteraction : NSObject <UIGestureRecognizerDelegateInternal, UIInteraction> {

	BOOL _recognizeOnPrimaryButtonDown;
	BOOL _recognizeOnSecondaryButtonDown;
	BOOL _eatsTouches;
	UIView* _view;
	UIView* _touchFallbackView;
	_UIPassthroughScrollGestureRecognizer* _passthroughScrollGestureRecognizer;
	_UIPassthroughGateGestureRecognizer* _gestureGate;
	id<_UIPassthroughScrollInteractionDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * _touchFallbackView;                                                              //@synthesize touchFallbackView=_touchFallbackView - In the implementation block
@property (nonatomic,readonly) _UIPassthroughScrollGestureRecognizer * _passthroughScrollGestureRecognizer;              //@synthesize passthroughScrollGestureRecognizer=_passthroughScrollGestureRecognizer - In the implementation block
@property (nonatomic,readonly) _UIPassthroughGateGestureRecognizer * _gestureGate;                                       //@synthesize gestureGate=_gestureGate - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPassthroughScrollInteractionDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL recognizeOnPrimaryButtonDown;                                                          //@synthesize recognizeOnPrimaryButtonDown=_recognizeOnPrimaryButtonDown - In the implementation block
@property (assign,nonatomic) BOOL recognizeOnSecondaryButtonDown;                                                        //@synthesize recognizeOnSecondaryButtonDown=_recognizeOnSecondaryButtonDown - In the implementation block
@property (assign,nonatomic) BOOL eatsTouches;                                                                           //@synthesize eatsTouches=_eatsTouches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                                     //@synthesize view=_view - In the implementation block
+(BOOL)_isPassthroughGestureRecognizer:(id)arg1 ;
-(void)_tearDown;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<_UIPassthroughScrollInteractionDelegate>)arg1 ;
-(BOOL)eatsTouches;
-(_UIPassthroughGateGestureRecognizer *)_gestureGate;
-(void)_setUpForWindow:(id)arg1 ;
-(_UIPassthroughScrollGestureRecognizer *)_passthroughScrollGestureRecognizer;
-(void)_updateGesturesEatTouches;
-(void)_handlePassthroughRecognizer:(id)arg1 ;
-(UIView *)_touchFallbackView;
-(void)_handlePassthroughGestureRecognizerEndWithReason:(unsigned long long)arg1 ;
-(BOOL)recognizeOnPrimaryButtonDown;
-(BOOL)_delegateShouldInteractAtLocation:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)recognizeOnSecondaryButtonDown;
-(id<_UIPassthroughScrollInteractionDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setRecognizeOnPrimaryButtonDown:(BOOL)arg1 ;
-(void)setRecognizeOnSecondaryButtonDown:(BOOL)arg1 ;
-(BOOL)_shouldEventBePassedThrough:(id)arg1 ;
-(void)__forciblyEndWithReason:(unsigned long long)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setEatsTouches:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(NSString *)description;
@end
