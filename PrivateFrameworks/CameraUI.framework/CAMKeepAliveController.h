/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface CAMKeepAliveController : NSObject {

	NSObject*<OS_xpc_object> __connection;
	NSObject*<OS_dispatch_queue> __keepAliveQueue;
	NSObject*<OS_dispatch_source> __heartbeatSource;
	NSObject*<OS_dispatch_queue> __heartbeatQueue;

}

@property (setter=_setConnection:,nonatomic,retain) NSObject*<OS_xpc_object> _connection;                             //@synthesize _connection=__connection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _keepAliveQueue;                                          //@synthesize _keepAliveQueue=__keepAliveQueue - In the implementation block
@property (setter=_setHeartbeatSource:,nonatomic,retain) NSObject*<OS_dispatch_source> _heartbeatSource;              //@synthesize _heartbeatSource=__heartbeatSource - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _heartbeatQueue;                                          //@synthesize _heartbeatQueue=__heartbeatQueue - In the implementation block
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleHeartbeatSourceEvent;
-(void)startKeepAliveSession;
-(void)dealloc;
-(void)_setConnection:(id)arg1 ;
-(void)_keepAliveQueueCreateHeartbeatIfNecessary;
-(id)init;
-(void)_keepAliveQueueCreateConnectionIfNecessary;
-(NSObject*<OS_xpc_object>)_connection;
-(void)_setHeartbeatSource:(id)arg1 ;
-(void)_keepAliveQueueTeardownHeartbeat;
-(void)sendCameraRollVisibilityChangedMessage:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)_heartbeatQueue;
-(void)_handleHeartbeatConnectionReply:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)_heartbeatSource;
-(void)_keepAliveQueueTeardownConnection;
-(NSObject*<OS_dispatch_queue>)_keepAliveQueue;
-(void)_teardownHeartbeat;
-(void)_setupConnectionIfNecessary;
-(void)stopKeepAliveSession;
-(void)_teardownConnection;
@end

