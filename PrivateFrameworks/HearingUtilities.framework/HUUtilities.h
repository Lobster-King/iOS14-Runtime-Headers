/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HearingUtilities/HearingUtilities-Structs.h>
@class NSDictionary, NSObject;

@interface HUUtilities : NSObject {

	NSDictionary* _pickableRoutes;
	int _wirelessSplitterNotifyToken;
	BOOL _wirelessSplitterEnabled;
	os_unfair_lock_s _routingLock;
	BOOL _takingConnection;
	NSObject*<OS_dispatch_queue> _routingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> routingQueue;              //@synthesize routingQueue=_routingQueue - In the implementation block
@property (assign,nonatomic) BOOL takingConnection;                                  //@synthesize takingConnection=_takingConnection - In the implementation block
+(id)XDCObjectFromObject:(id)arg1 ;
+(id)sharedUtilities;
+(id)objectFromXDCObject:(id)arg1 ;
-(id)currentPickableAudioRoutesIfExist;
-(void)pauseNowPlaying:(BOOL)arg1 withQueue:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)updateHearingFeatureUsage;
-(BOOL)hearingAidRouteAvailable;
-(void)pickableAudioRoutesDidChange:(id)arg1 ;
-(BOOL)hearingAidStreamSelected;
-(void)setRoutingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)mediaServerDied;
-(void)setTakingConnection:(BOOL)arg1 ;
-(BOOL)takingConnection;
-(void)clearAudioRoutes;
-(id)init;
-(id)currentPickableAudioRoutes;
-(void)checkAudioPlayingWithQueue:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)routingQueue;
-(BOOL)liveListenRouteSelected;
-(void)updateWirelessSplitterState;
-(BOOL)wirelessSplitterEnabled;
-(BOOL)oldRoutes:(id)arg1 equalToNewRoutes:(id)arg2 ;
-(void)registerNotifications;
-(void)addHearingFeatureUsage:(unsigned long long)arg1 ;
@end

