/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBrowserDragControllerTranscriptDelegate <NSObject>
@optional
-(id)dragManagerTargetView:(id)arg1;
-(void)dragManager:(id)arg1 overrideDropPointForTarget:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)dragManagerDidBeginDragging:(id)arg1;
-(void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
-(void)dragManagerDidEndDragging:(id)arg1;
-(int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;

@end

