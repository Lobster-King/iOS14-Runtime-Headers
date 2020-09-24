/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBProcess.h>

@class FBProcessCPUStatistics, BKSProcessAssertion;

@interface FBApplicationProcess : FBProcess {

	FBProcessCPUStatistics* _cpuStatistics;
	BKSProcessAssertion* _queue_mediaAssertion;
	BKSProcessAssertion* _queue_audioAssertion;
	BKSProcessAssertion* _queue_accessoryAssertion;
	unsigned long long _htAppIdentifier;
	unsigned long long _launchToken;
	BOOL _recordingAudio;
	BOOL _nowPlayingWithAudio;
	BOOL _connectedToExternalAccessory;

}

@property (assign,getter=isRecordingAudio,nonatomic) BOOL recordingAudio;                                          //@synthesize recordingAudio=_recordingAudio - In the implementation block
@property (assign,getter=isNowPlayingWithAudio,nonatomic) BOOL nowPlayingWithAudio;                                //@synthesize nowPlayingWithAudio=_nowPlayingWithAudio - In the implementation block
@property (assign,getter=isConnectedToExternalAccessory,nonatomic) BOOL connectedToExternalAccessory;              //@synthesize connectedToExternalAccessory=_connectedToExternalAccessory - In the implementation block
@property (nonatomic,readonly) double elapsedCPUTime; 
+(id)_internalDebugEnvironmentVariables;
-(void)setRecordingAudio:(BOOL)arg1 ;
-(void)_finishInit;
-(id)_createBootstrapContext;
-(id)_queue_createLegacyAssertionForReason:(unsigned)arg1 withName:(id)arg2 ;
-(void)_bootstrapDidComplete;
-(void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_activationInfoForEvent:(int)arg1 withToken:(unsigned long long)arg2 ;
-(void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 ;
-(BOOL)_wantsStateUpdates;
-(BOOL)isRecordingAudio;
-(void)setNowPlayingWithAudio:(BOOL)arg1 ;
-(BOOL)isConnectedToExternalAccessory;
-(void)_noteLaunchDidComplete;
-(BOOL)isNowPlayingWithAudio;
-(double)elapsedCPUTime;
-(void)_noteProcessDidExit:(id)arg1 ;
-(BOOL)isApplicationProcess;
-(void)setConnectedToExternalAccessory:(BOOL)arg1 ;
@end
