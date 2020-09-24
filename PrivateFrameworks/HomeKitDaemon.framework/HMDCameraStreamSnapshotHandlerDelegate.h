/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDCameraStreamSnapshotHandlerDelegate <NSObject>
@optional
-(void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(BOOL)arg2;

@required
-(void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
-(void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;

@end
