/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/NUPageViewControllerScrollViewAccessibilityDelegate.h>

@protocol NUPageViewControllerDataSource, NUPageViewControllerDelegate, OS_dispatch_group;
@class UIViewController, NUPageViewControllerScrollView, NSObject, NSMutableArray, NSString;

@interface NUPageViewController : UIViewController <UIScrollViewDelegate, NUPageViewControllerScrollViewAccessibilityDelegate> {

	BOOL _cancelScrollViewDidScroll;
	BOOL _isTransitioning;
	BOOL _scrollViewStartedScrolling;
	id<NUPageViewControllerDataSource> _dataSource;
	id<NUPageViewControllerDelegate> _delegate;
	UIViewController* _visibleViewController;
	NUPageViewControllerScrollView* _scrollView;
	NSObject*<OS_dispatch_group> _idleDispatchGroup;
	UIViewController* _managedForViewController;
	UIViewController* _previousViewController;
	UIViewController* _nextViewController;
	UIViewController* _possibleNextViewController;
	UIViewController* _originalVisibleViewController;
	UIViewController* _appearingViewController;
	UIViewController* _disappearingViewController;
	NSMutableArray* _replayViewTransitions;
	CGSize _transitioningSize;

}

@property (nonatomic,readonly) NUPageViewControllerScrollView * scrollView;                     //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> idleDispatchGroup;                  //@synthesize idleDispatchGroup=_idleDispatchGroup - In the implementation block
@property (nonatomic,retain) UIViewController * managedForViewController;                       //@synthesize managedForViewController=_managedForViewController - In the implementation block
@property (nonatomic,retain) UIViewController * previousViewController;                         //@synthesize previousViewController=_previousViewController - In the implementation block
@property (nonatomic,retain) UIViewController * nextViewController;                             //@synthesize nextViewController=_nextViewController - In the implementation block
@property (nonatomic,retain) UIViewController * possibleNextViewController;                     //@synthesize possibleNextViewController=_possibleNextViewController - In the implementation block
@property (nonatomic,retain) UIViewController * originalVisibleViewController;                  //@synthesize originalVisibleViewController=_originalVisibleViewController - In the implementation block
@property (nonatomic,retain) UIViewController * appearingViewController;                        //@synthesize appearingViewController=_appearingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * disappearingViewController;                     //@synthesize disappearingViewController=_disappearingViewController - In the implementation block
@property (assign,nonatomic) BOOL cancelScrollViewDidScroll;                                    //@synthesize cancelScrollViewDidScroll=_cancelScrollViewDidScroll - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioning;                                            //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (nonatomic,readonly) CGSize transitioningSize;                                        //@synthesize transitioningSize=_transitioningSize - In the implementation block
@property (nonatomic,readonly) CGSize pageSize; 
@property (nonatomic,readonly) BOOL scrollViewStartedScrolling;                                 //@synthesize scrollViewStartedScrolling=_scrollViewStartedScrolling - In the implementation block
@property (nonatomic,retain) NSMutableArray * replayViewTransitions;                            //@synthesize replayViewTransitions=_replayViewTransitions - In the implementation block
@property (assign,nonatomic,__weak) id<NUPageViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<NUPageViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * visibleViewController;                          //@synthesize visibleViewController=_visibleViewController - In the implementation block
@property (assign,nonatomic) BOOL pagingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commonInit;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(BOOL)isTransitioning;
-(void)setDataSource:(id<NUPageViewControllerDataSource>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(UIViewController *)nextViewController;
-(BOOL)pagingEnabled;
-(void)viewWillLayoutSubviews;
-(CGSize)pageSize;
-(UIViewController *)previousViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id<NUPageViewControllerDataSource>)dataSource;
-(void)setDelegate:(id<NUPageViewControllerDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)transitionToSize:(CGSize)arg1 ;
-(void)updateContentOffset;
-(void)managePreviousAndNextViewController;
-(NSMutableArray *)replayViewTransitions;
-(NSObject*<OS_dispatch_group>)idleDispatchGroup;
-(void)removeViewController:(id)arg1 ;
-(void)addViewController:(id)arg1 fromScroll:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)reindexViewControllers;
-(void)setReplayViewTransitions:(NSMutableArray *)arg1 ;
-(CGSize)transitioningSize;
-(void)setCancelScrollViewDidScroll:(BOOL)arg1 ;
-(void)updatePositionForViewController:(id)arg1 ;
-(UIViewController *)managedForViewController;
-(void)setPreviousViewController:(UIViewController *)arg1 ;
-(void)setNextViewController:(UIViewController *)arg1 ;
-(void)setManagedForViewController:(UIViewController *)arg1 ;
-(CGPoint)centerForIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIViewController *)appearingViewController;
-(void)setAppearingViewController:(UIViewController *)arg1 ;
-(void)setOriginalVisibleViewController:(UIViewController *)arg1 ;
-(UIViewController *)originalVisibleViewController;
-(void)handleScrollStart;
-(void)handleScrollEnd;
-(BOOL)scrollViewStartedScrolling;
-(void)callLastViewAppearanceMethods;
-(BOOL)cancelScrollViewDidScroll;
-(BOOL)_shouldIgnoreDidScrollWithScrollView:(id)arg1 ;
-(void)switchToPreviousViewController;
-(void)switchToNextViewController;
-(BOOL)_assistiveTechnologyIsRunning;
-(BOOL)canSwitchToNextViewController;
-(BOOL)canSwitchToPreviousViewController;
-(void)_keyboardSwitchGoingRight:(BOOL)arg1 ;
-(void)keyboardOrActionSwitchToPreviousViewController;
-(void)keyboardOrActionSwitchToNextViewController;
-(void)repositionPages;
-(void)accessibilityHandleRequestToGoBackForPageViewControllerScrollView:(id)arg1 ;
-(void)accessibilityHandleRequestToGoForewardForPageViewControllerScrollView:(id)arg1 ;
-(void)performWhenIdle:(/*^block*/id)arg1 ;
-(void)setVisibleViewController:(UIViewController *)arg1 ;
-(void)updateScrollView;
-(BOOL)isTransitioningToViewController;
-(UIViewController *)disappearingViewController;
-(void)setDisappearingViewController:(UIViewController *)arg1 ;
-(UIViewController *)visibleViewController;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<NUPageViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateContentSize;
-(NUPageViewControllerScrollView *)scrollView;
-(UIViewController *)possibleNextViewController;
-(void)setPossibleNextViewController:(UIViewController *)arg1 ;
@end

