/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSMapTable, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate> {

	os_unfair_lock_s _lock;
	NSMapTable* _delegegatesByCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
+(void)removeDelegateForCache:(id)arg1 ;
-(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
-(id)init;
-(void)removeDelegateForCache:(id)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
@end
