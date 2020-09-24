/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCTaskScheduler : NSObject
+(void)executeOptionalPrefetchBlock:(/*^block*/id)arg1 ;
+(id)lowPriorityOperationQueue;
+(void)popHighPriorityTaskInFlight;
+(void)scheduleOptionalPrefetchBlock:(/*^block*/id)arg1 ;
+(void)disableOptionalPrefetching;
+(void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+(void)scheduleLowPriorityBlockForMainThread:(/*^block*/id)arg1 ;
+(id)lowPriorityQueue;
+(id)backgroundDownloadOperationQueue;
+(void)scheduleLowPriorityOperation:(id)arg1 ;
+(void)pushHighPriorityTaskInFlight;
+(void)scheduleLowPriorityBlock:(/*^block*/id)arg1 ;
@end
