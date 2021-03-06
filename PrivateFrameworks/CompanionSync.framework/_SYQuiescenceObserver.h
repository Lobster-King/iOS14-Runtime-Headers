/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSPointerArray, NSObject, NSMutableSet;

@interface _SYQuiescenceObserver : NSObject {

	NSPointerArray* _quiescenceQueues;
	NSObject*<OS_dispatch_group> _allocationGroup;
	NSMutableSet* _allocations;

}
+(id)sharedInstance;
+(BOOL)isQuiescenceEnabled;
+(void)setQuiescenceEnabled:(BOOL)arg1 ;
-(void)registerQueue:(id)arg1 ;
-(id)init;
-(BOOL)waitForQuiescenceWithTimeout:(double)arg1 ;
-(void)notifyOnQuiescence:(/*^block*/id)arg1 ;
-(void)incrementAllocationCount:(id)arg1 ;
-(void)decrementAllocationCount:(id)arg1 ;
-(BOOL)waitForDeallocationCompleteWithTimeout:(double)arg1 ;
-(void)notifyOnDeallocationComplete:(/*^block*/id)arg1 ;
@end

