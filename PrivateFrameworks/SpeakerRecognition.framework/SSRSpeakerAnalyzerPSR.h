/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EARSyncPSRAudioProcessorDelegate.h>

@protocol SSRSpeakerAnalyzerPSRDelegate, OS_dispatch_queue;
@class EARSyncPSRAudioProcessor, NSURL, SSRSpeakerRecognitionContext, NSDictionary, NSArray, NSObject, NSString;

@interface SSRSpeakerAnalyzerPSR : NSObject <EARSyncPSRAudioProcessorDelegate> {

	BOOL _triggerPhraseDetectedOnTap;
	unsigned long long _numSamplesProecssed;
	id<SSRSpeakerAnalyzerPSRDelegate> _delegate;
	EARSyncPSRAudioProcessor* _psrAudioProcessor;
	NSURL* _configFilePath;
	NSURL* _resourceFilePath;
	SSRSpeakerRecognitionContext* _context;
	NSDictionary* _voiceProfilesModelFilePaths;
	NSDictionary* _voiceProfilesExpModelFilePaths;
	NSArray* _psrScorers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<SSRSpeakerAnalyzerPSRDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EARSyncPSRAudioProcessor * psrAudioProcessor;                   //@synthesize psrAudioProcessor=_psrAudioProcessor - In the implementation block
@property (nonatomic,retain) NSURL * configFilePath;                                         //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,retain) NSURL * resourceFilePath;                                       //@synthesize resourceFilePath=_resourceFilePath - In the implementation block
@property (nonatomic,retain) SSRSpeakerRecognitionContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDictionary * voiceProfilesModelFilePaths;                     //@synthesize voiceProfilesModelFilePaths=_voiceProfilesModelFilePaths - In the implementation block
@property (nonatomic,retain) NSDictionary * voiceProfilesExpModelFilePaths;                  //@synthesize voiceProfilesExpModelFilePaths=_voiceProfilesExpModelFilePaths - In the implementation block
@property (nonatomic,retain) NSArray * psrScorers;                                           //@synthesize psrScorers=_psrScorers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setContext:(SSRSpeakerRecognitionContext *)arg1 ;
-(void)setDelegate:(id<SSRSpeakerAnalyzerPSRDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(SSRSpeakerRecognitionContext *)context;
-(id<SSRSpeakerAnalyzerPSRDelegate>)delegate;
-(void)endAudio;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)resetForNewRequest;
-(void)psrAudioProcessor:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(void)psrAudioProcessor:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(NSURL *)configFilePath;
-(NSURL *)resourceFilePath;
-(NSDictionary *)voiceProfilesModelFilePaths;
-(BOOL)_isSpeakerVectorValid:(id)arg1 speakerVectorSize:(unsigned long long)arg2 fromPsrAudioProcessor:(id)arg3 ;
-(id)_processSpeakerVector:(id)arg1 withSize:(unsigned long long)arg2 processedAudioDurationMs:(unsigned long long)arg3 ;
-(id)initWithVoiceRecognitionContext:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)processAudioData:(id)arg1 ;
-(id)getVoiceRecognizerResults;
-(EARSyncPSRAudioProcessor *)psrAudioProcessor;
-(void)setPsrAudioProcessor:(EARSyncPSRAudioProcessor *)arg1 ;
-(void)setConfigFilePath:(NSURL *)arg1 ;
-(void)setResourceFilePath:(NSURL *)arg1 ;
-(void)setVoiceProfilesModelFilePaths:(NSDictionary *)arg1 ;
-(NSDictionary *)voiceProfilesExpModelFilePaths;
-(void)setVoiceProfilesExpModelFilePaths:(NSDictionary *)arg1 ;
-(NSArray *)psrScorers;
-(void)setPsrScorers:(NSArray *)arg1 ;
@end
