/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IMRemoteURLConnection, NSArray, NSObject;

@interface IMDInternalPhishingController : NSObject {

	IMRemoteURLConnection* _remoteURLConnection;
	NSArray* _blacklist;
	double _lastBlacklistSync;
	NSObject*<OS_dispatch_queue> _blacklistDiskQueue;

}

@property (retain) IMRemoteURLConnection * remoteURLConnection;                  //@synthesize remoteURLConnection=_remoteURLConnection - In the implementation block
@property (retain) NSArray * blacklist;                                          //@synthesize blacklist=_blacklist - In the implementation block
@property (assign) double lastBlacklistSync;                                     //@synthesize lastBlacklistSync=_lastBlacklistSync - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> blacklistDiskQueue;              //@synthesize blacklistDiskQueue=_blacklistDiskQueue - In the implementation block
+(id)sharedInstance;
+(BOOL)_isAppleInternal;
+(BOOL)allowPhishingCheck;
+(BOOL)_hasAppleConnect;
-(id)_endpoint;
-(void)dealloc;
-(IMRemoteURLConnection *)remoteURLConnection;
-(id)init;
-(void)setBlacklist:(NSArray *)arg1 ;
-(id)_apiKey;
-(NSArray *)blacklist;
-(BOOL)blacklistMessage:(id)arg1 ;
-(void)setBlacklistDiskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadBlacklistFromDiskAsync:(BOOL)arg1 ;
-(void)fetchBlacklistFromNetworkWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)blacklistDiskQueue;
-(double)lastBlacklistSync;
-(void)setLastBlacklistSync:(double)arg1 ;
-(void)setRemoteURLConnection:(IMRemoteURLConnection *)arg1 ;
-(void)_persistBlacklist:(BOOL)arg1 ;
@end

