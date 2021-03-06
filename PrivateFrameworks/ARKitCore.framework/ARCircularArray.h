/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class NSMutableOrderedSet, NSArray;

@interface ARCircularArray : NSObject {

	NSMutableOrderedSet* _objects;
	long long _capacity;
	os_unfair_lock_s _orderedSetLock;

}

@property (readonly) NSArray * contents; 
-(id)add:(id)arg1 ;
-(NSArray *)contents;
-(id)initWithCapacity:(long long)arg1 ;
-(BOOL)contains:(id)arg1 ;
-(long long)count;
-(id)peekLatest;
@end

