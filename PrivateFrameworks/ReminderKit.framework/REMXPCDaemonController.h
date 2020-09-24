/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDaemonController.h>

@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;
@class NSMutableDictionary, NSString, NSXPCConnection, REMStoreContainerToken;

@interface REMXPCDaemonController : NSObject <REMDaemonController> {

	os_unfair_lock_s _ivarLock;
	id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> _cloudKitNetworkActivityDelegate;
	NSMutableDictionary* _l_performersByName;
	NSString* _serviceName;
	NSXPCConnection* _xpcConnection;
	REMStoreContainerToken* _storeContainerToken;

}

@property (assign,nonatomic) os_unfair_lock_s ivarLock;                                                                                     //@synthesize ivarLock=_ivarLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * l_performersByName;                                                                      //@synthesize l_performersByName=_l_performersByName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                                                                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) REMStoreContainerToken * storeContainerToken;                                                                  //@synthesize storeContainerToken=_storeContainerToken - In the implementation block
@property (assign,nonatomic,__weak) id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate;              //@synthesize cloudKitNetworkActivityDelegate=_cloudKitNetworkActivityDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weakSharedInstance;
+(id)userInteractiveDaemonController;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(void)invalidate;
-(id)initWithStoreContainerToken:(id)arg1 userInteractive:(BOOL)arg2 ;
-(void)setCloudKitNetworkActivityDelegate:(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)arg1 ;
-(void)_asyncResolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_resolvePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)syncDebugPerformerWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_xpcConnectionDidInterrupt;
-(void)setL_performersByName:(NSMutableDictionary *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)dealloc;
-(void)setStoreContainerToken:(REMStoreContainerToken *)arg1 ;
-(void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)_syncPerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_asyncResolvePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)l_performersByName;
-(id)init;
-(os_unfair_lock_s)ivarLock;
-(void)_xpcConnectionDidInvalidate;
-(REMStoreContainerToken *)storeContainerToken;
-(void)setIvarLock:(os_unfair_lock_s)arg1 ;
-(id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)cloudKitNetworkActivityDelegate;
-(id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)syncStorePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(NSString *)serviceName;
-(id)_resolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(NSString *)description;
-(void)_asyncPerformerWithResolver:(id)arg1 reason:(id)arg2 loadHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)_xpcConnectionReconnectingIfNecessary;
@end
