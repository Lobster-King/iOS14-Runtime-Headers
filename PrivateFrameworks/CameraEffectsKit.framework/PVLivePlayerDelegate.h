/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVLivePlayerDelegate <NSObject>
@optional
-(void)livePlayerDroppedFrame:(int)arg1 sources:(id)arg2 time:(SCD_Struct_JF3)arg3;

@required
-(id)buildRenderRequest:(id)arg1 time:(SCD_Struct_JF3)arg2;
-(void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(BOOL)arg3;

@end
