/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFLogBackendSession.h>
#import <HMFoundation/HMFLogging.h>

@protocol _HMFLogBackendSessionDelegate;
@class NSString, NSMutableArray, RTCReporting;

@interface _HMFLogBackendSession : NSObject <HMFLogBackendSession, HMFLogging> {

	os_unfair_lock_s _lock;
	NSMutableArray* _queuedEvents;
	RTCReporting* _session;
	NSString* _serviceName;
	id<_HMFLogBackendSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_HMFLogBackendSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                                       //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(BOOL)sendMessage:(id)arg1 ;
-(void)setDelegate:(id<_HMFLogBackendSessionDelegate>)arg1 ;
-(id<_HMFLogBackendSessionDelegate>)delegate;
-(NSString *)serviceName;
-(void)_flushQueuedEvents;
-(id)initWithSession:(id)arg1 serviceName:(id)arg2 delegate:(id)arg3 ;
-(void)activateWithSession:(id)arg1 ;
@end

