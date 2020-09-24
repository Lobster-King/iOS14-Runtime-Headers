/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKEventGestureControllerDelegate <NSObject>
@optional
-(void)eventGestureController:(id)arg1 requestsShowEvent:(id)arg2;
-(void)eventGestureControllerDidEndDragSession:(id)arg1;
-(double)horizontalOffsetForPagingForEventGestureController:(id)arg1;
-(void)cleanUpAfterGestureFailureForEventGestureController:(id)arg1;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1;
-(UIEdgeInsets*)pageChangeMarginsForEventGestureController:(id)arg1;
-(double)computeXDragOffsetForEventGestureController:(id)arg1 currentX:(double)arg2 startX:(double)arg3;
-(BOOL)moreThanOneDayVisibleForEventGestureController:(id)arg1;
-(BOOL)hasCorrectParentForDraggingView:(id)arg1 isAllDay:(BOOL)arg2;
-(double)eventGestureController:(id)arg1 convertXForMargin:(double)arg2;
-(CGRect*)marginFrameForEventGestureController:(id)arg1;
-(BOOL)eventGestureController:(id)arg1 shouldFadeOccurrenceAfterFling:(id)arg2;
-(BOOL)eventGestureController:(id)arg1 shouldAllowShortLiftDelay:(id)arg2;
-(BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;

@required
-(void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(BOOL)arg3;
-(id)createEventForEventGestureController:(id)arg1;
-(id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2;
-(void)eventGestureController:(id)arg1 adjustDraggingView:(id)arg2 forAllDay:(BOOL)arg3;
-(id)currentPresentationController;
-(BOOL)eventGestureController:(id)arg1 isAllDayAtPoint:(CGPoint)arg2 requireInsistence:(BOOL)arg3;
-(void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3;
-(BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(long long)arg5;
-(id)occurrenceViewSuperviewForEventGestureController:(id)arg1;
-(id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(CGPoint)arg2;
-(double)timedRegionOriginForEventGestureController:(id)arg1;
-(void)eventGestureController:(id)arg1 requestsPresentationOfViewController:(id)arg2;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3;
-(id)touchTrackingViewForEventGestureController:(id)arg1;
-(double)eventGestureController:(id)arg1 dateAtPoint:(CGPoint)arg2;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3;
-(id)createOccurrenceViewForEventGestureController:(id)arg1;
-(BOOL)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(CGPoint)arg5;
-(CGPoint*)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3;
-(double)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(CGPoint)arg3;
-(double)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3;
-(double)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2;

@end
