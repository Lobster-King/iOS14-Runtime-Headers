/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBrowserDragControllerDelegate <NSObject>
@optional
-(void)dragManager:(id)arg1 didBeginDraggingItem:(id)arg2;

@required
-(void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
-(BOOL)dragManager:(id)arg1 canScaleItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canRotateItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canPeelItem:(id)arg2;
-(void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
-(BOOL)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;

@end
