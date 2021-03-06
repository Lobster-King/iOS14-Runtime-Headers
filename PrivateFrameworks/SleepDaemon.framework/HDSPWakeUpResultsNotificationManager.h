/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPWakeUpResultsNotificationStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPWakeUpResultsNotificationStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPSleepEventProvider.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>

@protocol HDSPSleepEventDelegate, HDSPActivityScheduler;
@class NSDate, HDSPEnvironment, HDSPWakeUpResultsNotificationStateMachine, NAFuture, HKSHGoalProgressEngine, NSString;

@interface HDSPWakeUpResultsNotificationManager : NSObject <HDSPWakeUpResultsNotificationStateMachineInfoProvider, HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver> {

	os_unfair_lock_s _lock;
	HDSPEnvironment* _environment;
	id<HDSPSleepEventDelegate> _sleepEventDelegate;
	HDSPWakeUpResultsNotificationStateMachine* _stateMachine;
	NAFuture* _queryResultFuture;
	HKSHGoalProgressEngine* _goalProgressEngine;
	id<HDSPActivityScheduler> _retryAttemptScheduler;

}

@property (nonatomic,readonly) os_unfair_lock_s lock;                                                 //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) HDSPWakeUpResultsNotificationStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NAFuture * queryResultFuture;                                          //@synthesize queryResultFuture=_queryResultFuture - In the implementation block
@property (nonatomic,readonly) HKSHGoalProgressEngine * goalProgressEngine;                           //@synthesize goalProgressEngine=_goalProgressEngine - In the implementation block
@property (nonatomic,readonly) id<HDSPActivityScheduler> retryAttemptScheduler;                       //@synthesize retryAttemptScheduler=_retryAttemptScheduler - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) BOOL isWakeUpResultsNotificationEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (assign,nonatomic,__weak) id<HDSPSleepEventDelegate> sleepEventDelegate;                    //@synthesize sleepEventDelegate=_sleepEventDelegate - In the implementation block
+(id)retryCriteria;
-(void)sleepEventIsDue:(id)arg1 ;
-(double)_trackingDelayDuration;
-(id)initWithEnvironment:(id)arg1 ;
-(id)_currentState;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(id)diagnosticInfo;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(os_unfair_lock_s)lock;
-(id)eventIdentifiers;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)scheduleTrackingDelay;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(NSDate *)currentDate;
-(void)stopObservingProtectedHealthDataAvailability;
-(HDSPWakeUpResultsNotificationStateMachine *)stateMachine;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)unscheduleRetryAttempt;
-(NAFuture *)queryResultFuture;
-(void)setSleepEventDelegate:(id<HDSPSleepEventDelegate>)arg1 ;
-(BOOL)_isWaitingForWakeUp;
-(id<HDSPActivityScheduler>)retryAttemptScheduler;
-(id)_sleepScheduleModel;
-(id)diagnosticDescription;
-(NSString *)providerIdentifier;
-(id)upcomingEventsDueAfterDate:(id)arg1 ;
-(void)_lock_startQuery;
-(id)initWithEnvironment:(id)arg1 retryAttemptScheduler:(id)arg2 ;
-(void)_updateState;
-(id<HDSPSleepEventDelegate>)sleepEventDelegate;
-(id)performImmediateQueryForNotification;
-(void)unscheduleTrackingDelay;
-(void)scheduleRetryAttempt;
-(void)executeQuery;
-(HDSPEnvironment *)environment;
-(BOOL)_isDelayingForTracking;
-(BOOL)isWakeUpResultsNotificationEnabled;
-(void)postResultsNotification;
-(id)notificationAttemptWindowForWakeUpBeforeDate:(id)arg1 ;
-(void)startObservingProtectedHealthDataAvailability;
-(HKSHGoalProgressEngine *)goalProgressEngine;
@end

