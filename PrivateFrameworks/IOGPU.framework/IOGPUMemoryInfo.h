/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOGPU/IOGPU-Structs.h>
@class IOGPUMetalResource;

@interface IOGPUMemoryInfo : NSObject {

	void* memlist_key;
	IOGPUMetalResource* fResourceListHead;
	os_unfair_lock_s _memoryInfoLock;

}
+(id)initialize;
-(void)lock;
-(void)unlock;
-(void)dealloc;
-(void)removeResourceFromList:(id)arg1 ;
-(id)init;
-(CFArrayRef)annotationList;
-(void*)addDataSource:(/*^block*/id)arg1 ;
-(void)shutdown;
-(void)removeDataSource:(void*)arg1 ;
-(void)addResourceToList:(id)arg1 ;
@end

