/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>

@class PRXPurelyInteractiveTransition, PRXPullDismissalScrollView, UIViewController, NSString;

@interface PRXPullDismissalInteractionDriver : NSObject <UIScrollViewDelegate> {

	PRXPurelyInteractiveTransition* _interactiveTransition;
	PRXPullDismissalScrollView* _scrollView;
	UIViewController* _presentedViewController;

}

@property (nonatomic,__weak,readonly) PRXPullDismissalScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentedViewController;                               //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) id<UIViewControllerAnimatedTransitioning> animationController; 
@property (nonatomic,readonly) id<UIViewControllerInteractiveTransitioning> interactionController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIViewControllerAnimatedTransitioning>)animationController;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)interactionController;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(PRXPullDismissalScrollView *)scrollView;
-(UIViewController *)presentedViewController;
-(id)initWithPresentedViewController:(id)arg1 scrollView:(id)arg2 ;
-(void)_finishPullToDismiss;
@end
