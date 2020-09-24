/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/VoiceTriggerInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, VTStateManager, NSString;

@interface BorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface> {

	BorealisServerImpl* serverImpl;
	NSXPCListener* _serverListener;
	NSMutableArray* _clientConnections;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	void* _mobileAssistantDylib;
	/*function pointer*/void* _afSiriActivationBuiltInMicVoiceFuncPtr;
	void* _voiceTriggerDylib;
	Class _clsVTStateManager;
	VTStateManager* _vtStateManager;

}

@property (nonatomic,retain) NSXPCListener * serverListener;                                                //@synthesize serverListener=_serverListener - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientConnections;                                            //@synthesize clientConnections=_clientConnections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;                                //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (assign,nonatomic) void* mobileAssistantDylib;                                                    //@synthesize mobileAssistantDylib=_mobileAssistantDylib - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* afSiriActivationBuiltInMicVoiceFuncPtr;              //@synthesize afSiriActivationBuiltInMicVoiceFuncPtr=_afSiriActivationBuiltInMicVoiceFuncPtr - In the implementation block
@property (assign,nonatomic) void* voiceTriggerDylib;                                                       //@synthesize voiceTriggerDylib=_voiceTriggerDylib - In the implementation block
@property (nonatomic,retain) Class clsVTStateManager;                                                       //@synthesize clsVTStateManager=_clsVTStateManager - In the implementation block
@property (nonatomic,retain) VTStateManager * vtStateManager;                                               //@synthesize vtStateManager=_vtStateManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVtStateManager:(VTStateManager *)arg1 ;
-(void)listeningEnabledReply:(/*^block*/id)arg1 ;
-(void)enableBargeInMode:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(NSXPCListener *)serverListener;
-(BOOL)hardwareSupportsVoiceTrigger;
-(NSMutableArray *)clientConnections;
-(void)setVoiceTriggerDylib:(void*)arg1 ;
-(void*)voiceTriggerDylib;
-(void)setClsVTStateManager:(Class)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)hasBargeInSupportReply:(/*^block*/id)arg1 ;
-(void)speakerStateMutedReply:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)voiceTriggerPastDataFramesAvailable:(/*^block*/id)arg1 ;
-(void)enableSpeakerStateListening:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)speechDetectionVADCreated;
-(void)setServerListener:(NSXPCListener *)arg1 ;
-(void)sendSpeakerActiveStateChangedNotification:(BOOL)arg1 ;
-(id)init;
-(void)sendSpeakerMuteStateChangedNotification:(BOOL)arg1 ;
-(/*function pointer*/void*)afSiriActivationBuiltInMicVoiceFuncPtr;
-(void)setMobileAssistantDylib:(void*)arg1 ;
-(void)speakerStateActiveReply:(/*^block*/id)arg1 ;
-(void)initializeWithReply:(/*^block*/id)arg1 ;
-(void)setAfSiriActivationBuiltInMicVoiceFuncPtr:(/*function pointer*/void*)arg1 ;
-(void)siriClientRecordStateChanged:(BOOL)arg1 ;
-(void)updateVoiceTriggerConfiguration:(id)arg1 reply:(/*^block*/id)arg2 ;
-(VTStateManager *)vtStateManager;
-(Class)clsVTStateManager;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)siriClientsRecordingReply:(/*^block*/id)arg1 ;
-(void)sendVoiceTriggerOccuredNotification:(id)arg1 ;
-(BOOL)heySiriEnabled;
-(void)enableVoiceTriggerListening:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setListeningProperty:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void*)mobileAssistantDylib;
-(void)setClientConnections:(NSMutableArray *)arg1 ;
@end
