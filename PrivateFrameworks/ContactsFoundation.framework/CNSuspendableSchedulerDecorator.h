/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class CNQueue, NSConditionLock, NSString;

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler> {

	id<CNScheduler> _scheduler;
	CNQueue* _queue;
	NSConditionLock* _lock;

}

@property (nonatomic,readonly) id<CNScheduler> scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CNQueue * queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSConditionLock * lock;                 //@synthesize lock=_lock - In the implementation block
@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resumedSchedulerWithScheduler:(id)arg1 ;
+(id)suspendedSchedulerWithScheduler:(id)arg1 ;
-(id<CNScheduler>)scheduler;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSConditionLock *)lock;
-(double)timestamp;
-(id)_nts_enqueueCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(void)suspend;
-(id)initWithScheduler:(id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)_performFirstQueuedTask;
-(CNQueue *)queue;
-(void)resume;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(NSString *)description;
@end
