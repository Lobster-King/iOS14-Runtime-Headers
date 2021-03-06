/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFSession.h>

@protocol NFSession <NSObject>
@required
-(BOOL)isFirstInQueue;
-(void)endSessionWithCompletion:(/*^block*/id)arg1;
-(void)endSession;
-(void)endSessionAndStartNextSession:(id)arg1 completion:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue, NFSessionInterfaceNSXPCProxyCreating;
@class NSObject, NSString;

@interface NFSession : NSObject <NFSession> {

	BOOL _isFirstInQueue;
	BOOL _isCallbackQueueSuspended;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<NFSessionInterface>*<NSXPCProxyCreating> _proxy;
	/*^block*/id _didStartCallback;
	/*^block*/id _didEndCallback;
	unsigned long long _state;

}

@property (readonly) unsigned long long state;                      //@synthesize state=_state - In the implementation block
@property (readonly) BOOL didEnd; 
@property (readonly) BOOL isActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)callbackQueue;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)didEnd;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setProxy:(id)arg1 ;
-(id)proxy;
-(void)dealloc;
-(BOOL)isActive;
-(id)init;
-(void)setDidEndCallback:(/*^block*/id)arg1 ;
-(void)resume;
-(void)didStartSession:(id)arg1 ;
-(BOOL)isFirstInQueue;
-(unsigned long long)state;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)didEndUnexpectedly;
-(void)endSession;
-(void)setDidStartCallback:(/*^block*/id)arg1 ;
-(void)setIsFirstInQueue:(BOOL)arg1 ;
-(void)_didStartSession:(id)arg1 ;
-(void)didStartSessionWithoutQueue:(id)arg1 ;
-(void)prioritizeSession;
-(void)_endProxySession;
-(void)_didEndSession;
-(void)endSessionAndStartNextSession:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

