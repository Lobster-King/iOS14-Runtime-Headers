/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMRemoteDaemonProtocol, OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class IMRemoteObject, NSMutableDictionary, IMLocalObject, IMDaemonListener, NSMutableArray, NSProtocolChecker, NSString, NSObject, NSRecursiveLock, NSArray, NSLock;

@interface IMDaemonController : NSObject {

	id _delegate;
	IMRemoteObject*<IMRemoteDaemonProtocol> _remoteObject;
	NSMutableDictionary* _listenerMap;
	IMLocalObject* _localObject;
	IMDaemonListener* _daemonListener;
	NSMutableArray* _services;
	NSProtocolChecker* _protocol;
	NSString* _listenerID;
	NSObject*<OS_dispatch_queue> _listenerLockQueue;
	os_unfair_recursive_lock_s _remoteDaemonLock;
	NSObject*<OS_dispatch_queue> _localObjectLockQueue;
	NSObject*<OS_dispatch_queue> _remoteMessageQueue;
	NSObject*<OS_dispatch_queue> _daemonConnectionQueue;
	NSRecursiveLock* _connectionLock;
	NSArray* _servicesToAllow;
	NSArray* _servicesToDeny;
	CFRunLoopSourceRef _runLoopSource;
	NSLock* _blockingLock;
	BOOL _hasCheckedForDaemon;
	BOOL _preventReconnect;
	BOOL _inBlockingConnect;
	BOOL _acquiringDaemonConnection;
	BOOL _autoReconnect;
	BOOL _blocksConnectionAtResume;
	BOOL _hasBeenSuspended;
	unsigned _gMyFZListenerCapabilities;
	unsigned _cachedCapabilities;
	unsigned _lastUpdatedCapabilities;
	BOOL _requestingConnection;
	NSMutableDictionary* _requestQOSClassCompletionBlocks;
	/*^block*/id _prewarmingBlock;

}

@property (setter=__setCapabilities:) unsigned _capabilities;                                                  //@synthesize gMyFZListenerCapabilities=_gMyFZListenerCapabilities - In the implementation block
@property (setter=_setAutoReconnect:) BOOL _autoReconnect;                                                     //@synthesize autoReconnect=_autoReconnect - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _remoteMessageQueue;                               //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
@property (setter=_setServicesToAllow:,retain) NSArray * _servicesToAllow;                                     //@synthesize servicesToAllow=_servicesToAllow - In the implementation block
@property (setter=_setServicesToDeny:,retain) NSArray * _servicesToDeny;                                       //@synthesize servicesToDeny=_servicesToDeny - In the implementation block
@property (setter=_setListenerID:,nonatomic,retain) NSString * _listenerID;                                    //@synthesize listenerID=_listenerID - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setBlocksConnectionAtResume:,nonatomic) BOOL _blocksConnectionAtResume;              //@synthesize blocksConnectionAtResume=_blocksConnectionAtResume - In the implementation block
@property (nonatomic,readonly) BOOL isConnecting; 
@property (getter=isRequestingConnection,nonatomic,readonly) BOOL requestingConnection;                        //@synthesize requestingConnection=_requestingConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestQOSClassCompletionBlocks;                            //@synthesize requestQOSClassCompletionBlocks=_requestQOSClassCompletionBlocks - In the implementation block
@property (nonatomic,copy) id prewarmingBlock;                                                                 //@synthesize prewarmingBlock=_prewarmingBlock - In the implementation block
@property (nonatomic,readonly) IMDaemonListener * listener;                                                    //@synthesize daemonListener=_daemonListener - In the implementation block
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) unsigned capabilities; 
+(id)sharedInstance;
+(id)sharedController;
+(void)_blockUntilSendQueueIsEmpty;
+(void)_setApplicationWillTerminate;
+(BOOL)_applicationWillTerminate;
-(void)_addressBookChanged:(id)arg1 ;
-(BOOL)__isRemoteObjectValid;
-(void)_handleReceivedQOSClassWhileServicingRequestsNotification:(id)arg1 ;
-(void)_setServicesToDeny:(id)arg1 ;
-(void)killDaemon;
-(void)_setListenerID:(id)arg1 ;
-(NSArray *)_servicesToDeny;
-(NSArray *)_servicesToAllow;
-(void)listener:(id)arg1 setListenerCapabilities:(unsigned)arg2 ;
-(void)_handleDaemonException:(id)arg1 ;
-(BOOL)hasListenerForID:(id)arg1 ;
-(BOOL)isRequestingConnection;
-(void)_setAutoReconnect:(BOOL)arg1 ;
-(void)_noteSetupComplete;
-(BOOL)addListenerID:(id)arg1 capabilities:(unsigned)arg2 ;
-(void)unsetQueryContext:(id)arg1 ;
-(void)_listenerSetUpdated;
-(void)_connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 ;
-(NSMutableDictionary *)requestQOSClassCompletionBlocks;
-(void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg1 ;
-(void)_disconnectFromDaemonWithForce:(BOOL)arg1 ;
-(BOOL)isConnecting;
-(BOOL)consumeQueryContext:(id)arg1 ;
-(void)_agentDidLaunchNotification:(id)arg1 ;
-(void)systemApplicationDidSuspend;
-(void)blockUntilConnected;
-(unsigned)_capabilities;
-(void)_localObjectCleanup;
-(void)_setServicesToAllow:(id)arg1 ;
-(BOOL)isConnected;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned)capabilities;
-(NSObject*<OS_dispatch_queue>)_remoteMessageQueue;
-(BOOL)removeListenerID:(id)arg1 ;
-(BOOL)_acquiringDaemonConnection;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidResume;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 ;
-(id)prewarmingBlock;
-(void)dealloc;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)setQueryContext:(id)arg1 ;
-(void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3 ;
-(void)systemApplicationDidEnterBackground;
-(void)__setCapabilities:(unsigned)arg1 ;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(void)_blockUntilSendQueueIsEmpty;
-(BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)_setCapabilities:(unsigned)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)_setBlocksConnectionAtResume:(BOOL)arg1 ;
-(BOOL)setCapabilities:(unsigned)arg1 forListenerID:(id)arg2 ;
-(void)setRequestQOSClassCompletionBlocks:(NSMutableDictionary *)arg1 ;
-(BOOL)localObjectExists;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 forAccount:(id)arg3 ;
-(void)disconnectFromDaemonWithForce:(BOOL)arg1 ;
-(void)setPrewarmingBlock:(id)arg1 ;
-(NSString *)_listenerID;
-(void)disconnectFromDaemon;
-(BOOL)_blocksConnectionAtResume;
-(id)delegate;
-(id)_remoteObject;
-(BOOL)_autoReconnect;
-(BOOL)__isLocalObjectValidOnQueue:(id)arg1 ;
-(void)setDaemonTerminatesWithoutListeners:(BOOL)arg1 ;
-(IMDaemonListener *)listener;
-(double)_connectionTimeout;
-(void)_remoteObjectCleanup;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(BOOL)arg3 ;
-(void)setMyPicture:(id)arg1 smallPictureData:(id)arg2 ;
-(void)sendQueryWithReply:(BOOL)arg1 query:(/*^block*/id)arg2 ;
-(void)requestQOSClassOfAgentWhileServicingRequests:(/*^block*/id)arg1 ;
-(BOOL)connectToDaemon;
-(void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3 ;
-(BOOL)remoteObjectExists;
-(void)sendABInformationToDaemon;
@end

