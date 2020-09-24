/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSError, NSString, NSObject, NSMutableArray, NSMapTable;

@interface MPCFuture : NSObject {

	BOOL _finalized;
	BOOL _invalid;
	id _result;
	NSError* _error;
	NSString* _debugLabel;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableArray* _successBlocks;
	NSMutableArray* _failureBlocks;
	NSMutableArray* _completionBlocks;
	NSMapTable* _invalidBlocks;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;               //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * successBlocks;                         //@synthesize successBlocks=_successBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * failureBlocks;                         //@synthesize failureBlocks=_failureBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;                      //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,readonly) NSMapTable * invalidBlocks;                             //@synthesize invalidBlocks=_invalidBlocks - In the implementation block
@property (nonatomic,readonly) id result;                                              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (getter=isFinalized,nonatomic,readonly) BOOL finalized;                      //@synthesize finalized=_finalized - In the implementation block
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid;                          //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,copy) NSString * debugLabel;                                      //@synthesize debugLabel=_debugLabel - In the implementation block
-(BOOL)isFinalized;
-(void)finishWithError:(id)arg1 ;
-(id)onFailure:(/*^block*/id)arg1 ;
-(NSMutableArray *)completionBlocks;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 ;
-(id)result;
-(void)dealloc;
-(NSString *)debugLabel;
-(BOOL)isInvalid;
-(void)finishWithValue:(id)arg1 ;
-(void)_onQueue_finalize;
-(NSError *)error;
-(id)onCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(NSMapTable *)invalidBlocks;
-(void)setDebugLabel:(NSString *)arg1 ;
-(NSMutableArray *)failureBlocks;
-(id)onInvalid:(/*^block*/id)arg1 ;
-(NSMutableArray *)successBlocks;
-(id)onSuccess:(/*^block*/id)arg1 ;
-(id)description;
@end
