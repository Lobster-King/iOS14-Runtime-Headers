/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ClientConnectionDelegate.h>
#import <libobjc.A.dylib/DatabaseChangeHandling.h>
#import <CalendarDaemon/CalActivatable.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSXPCListener, NSMutableSet, NSLock, NSArray, NSString;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _backgroundTaskCount;
	NSXPCListener* _NSXPCListener;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSMutableSet* _clientConnections;
	NSLock* _connectionLock;
	NSArray* _signalSensors;
	BOOL _initializationFinished;
	BOOL _active;
	NSArray* _modules;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _alarmQueue;

}

@property (nonatomic,retain) NSArray * modules;                                      //@synthesize modules=_modules - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> alarmQueue;              //@synthesize alarmQueue=_alarmQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)modules;
-(void)_registerForNotifications;
-(void)setActive:(BOOL)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_finishInitializationWithDataAvailable;
-(void)_registerForAttachmentCleanup;
-(void)_tearDownSignalHandlers;
-(void)_handleDatabaseChanged;
-(void)_registerForDatabaseCleanup;
-(void)_exitWithStatus:(int)arg1 ;
-(void)_cleanupChangeTablesInDatabase:(CalDatabase*)arg1 ;
-(void)_dumpState;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setModules:(NSArray *)arg1 ;
-(void)dealloc;
-(void)_deactivateAndExitWithStatus:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_protectedDataDidBecomeAvailable;
-(void)_registerForAlarmEvents;
-(void)_registerForAnalyticsCollection;
-(BOOL)isActive;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_setUpSignalHandlers;
-(void)_enableICloudBackups;
-(id)init;
-(NSObject*<OS_dispatch_queue>)alarmQueue;
-(void)deactivate;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(void)_registerForChangeTableCleanup;
-(void)clientConnectionDied:(id)arg1 ;
-(void)cleanupDatabase:(CalDatabase*)arg1 ;
-(id)initWithModules:(id)arg1 ;
-(void)activate;
-(void)_registerMaintenanceActivities;
-(void)_registerActivityWithIdentifier:(const char*)arg1 block:(/*^block*/id)arg2 ;
@end
