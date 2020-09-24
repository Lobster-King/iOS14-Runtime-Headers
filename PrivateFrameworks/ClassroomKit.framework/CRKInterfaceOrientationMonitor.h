/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSOrientationObserver, NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {

	FBSOrientationObserver* mObserver;
	NSMutableArray* mCompletionBlocks;
	BOOL mIsWaitingForFirstUpdate;
	unsigned long long _interfaceOrientation;

}

@property (assign,nonatomic) unsigned long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(unsigned long long)interfaceOrientation;
-(void)dealloc;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(id)init;
-(/*^block*/id)makeUpdateHandler;
-(void)updateInterfaceOrientationWithNotification:(id)arg1 ;
-(void)updateInterfaceOrientationWithBSOrientation:(long long)arg1 ;
-(unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)arg1 ;
-(void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)arg1 ;
-(void)interfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
@end
