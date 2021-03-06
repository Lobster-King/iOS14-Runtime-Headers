/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class SBSceneLayoutViewController, SBUIBlockAnimationController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController {

	SBSceneLayoutViewController* _layoutController;
	SBUIBlockAnimationController* _blockAnimation;

}
-(id)animationSettings;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(BOOL)_canBeInterrupted;
-(id)containerView;
-(id)_getTransitionWindow;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(/*^block*/id)arg4 ;
-(id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 stepped:(BOOL)arg4 animationBlock:(/*^block*/id)arg5 ;
@end

