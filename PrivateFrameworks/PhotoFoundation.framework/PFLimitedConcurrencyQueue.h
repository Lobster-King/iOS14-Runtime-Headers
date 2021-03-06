/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDispatchQueue.h>

@interface PFLimitedConcurrencyQueue : PFDispatchQueue {

	unsigned long long _concurrencyLimit;

}

@property (readonly) unsigned long long concurrencyLimit;              //@synthesize concurrencyLimit=_concurrencyLimit - In the implementation block
+(id)_newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 ;
+(id)newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 ;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned)arg3 ;
+(unsigned long long)defaultConcurrency;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned)arg3 targetQueue:(id)arg4 extensions:(id)arg5 ;
+(Class)concreteQueueClass;
-(unsigned long long)concurrencyLimit;
@end

