/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSString;

@interface HMIModelLoader : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _pendingUpdates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingUpdates;                   //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
+(id)assetDirectoryPath;
-(NSMutableSet *)pendingUpdates;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setPendingUpdates:(NSMutableSet *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)unpackageModelAssets:(id)arg1 intoDirectory:(id)arg2 error:(id*)arg3 ;
-(id)unpackageModelAssetsAtPath:(id)arg1 error:(id*)arg2 ;
@end
