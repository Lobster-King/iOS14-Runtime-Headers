/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEONavdDefaults : NSObject

@property (nonatomic,readonly) BOOL shouldRunNavigationInDaemon; 
@property (nonatomic,readonly) BOOL shouldShowServiceErrorAlert; 
@property (nonatomic,readonly) BOOL shouldLazyLoadRoutes; 
@property (nonatomic,readonly) BOOL shouldUseGuidanceEventManager; 
@property (nonatomic,readonly) BOOL shouldRequestLaneGuidance; 
@property (nonatomic,readonly) BOOL shouldRequestInlineShields; 
@property (nonatomic,readonly) int startValidDistanceOffset; 
@property (nonatomic,readonly) int endValidDistanceOffset; 
@property (nonatomic,readonly) BOOL shouldAutomaticallyRerouteTrafficIncidents; 
@property (nonatomic,readonly) double automaticTrafficIncidentRerouteDelay; 
@property (nonatomic,readonly) double maxDistanceFromOriginToSuppressReroute; 
@property (nonatomic,readonly) BOOL shouldMatchToLAR; 
@property (nonatomic,readonly) BOOL shouldSnapToParkingLotSegments; 
@property (nonatomic,readonly) double minimumDistanceToGetLocationUpdatesInMeters; 
@property (nonatomic,readonly) double minimumDistanceToConsiderLeechedLocationInMeters; 
@property (nonatomic,readonly) double minimumTimeIntervalToConsiderLeechedLocationInSeconds; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForDriving; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForTransit; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForDriving; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForTransit; 
@property (nonatomic,readonly) double locationUpdateTimerInterval; 
@property (nonatomic,readonly) double staleLocationUseTimerInterval; 
@property (nonatomic,readonly) double extraLocationWaitTimeInterval; 
@property (nonatomic,readonly) double locationFreshnessThreshold; 
@property (nonatomic,readonly) double locationReuseThreshold; 
@property (nonatomic,readonly) double minimumDistanceToCompareAgainstLocationAccuracy; 
@property (nonatomic,readonly) unsigned long long initialSelfInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) unsigned long long initialClientInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) double hypothesisResponseStaleToRefreshThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisShouldPersistThresholdInSeconds; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfEntriesInTheCacheUnderMemoryPressure; 
@property (nonatomic,readonly) long long maximumNumberOfDestinationsToMonitor; 
@property (nonatomic,readonly) double pendingStopTimeToLive; 
@property (nonatomic,readonly) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds; 
@property (nonatomic,readonly) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds; 
@property (nonatomic,readonly) unsigned long long accessValueThresholdToUpdateCacheEntries; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfProcessingLoopRepeats; 
@property (nonatomic,readonly) double refreshTimeIntervalToUseIfError; 
@property (nonatomic,readonly) unsigned long long refreshEquationLowestFrequency; 
@property (nonatomic,readonly) unsigned long long refreshEquationLowestFrequencyTransit; 
@property (nonatomic,readonly) unsigned long long refreshEquationHighestFrequency; 
@property (nonatomic,readonly) double maximumRefreshIntervalLeeway; 
@property (nonatomic,readonly) double minimumTimerTimeStampFudge; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffBase; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffMax; 
@property (nonatomic,readonly) double predictionsWatchdogInterval; 
@property (nonatomic,readonly) double defaultExpirationOffset; 
@property (nonatomic,readonly) double minimumExpirationOffset; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfLeechedLocations; 
@property (nonatomic,readonly) double updateTimeout; 
@property (nonatomic,readonly) BOOL useConservativeDepartureForRefreshTimer; 
@property (nonatomic,readonly) double maximumUserRoutingPreferencesAge; 
@property (nonatomic,readonly) unsigned long long maximumTraceFileCount; 
@property (nonatomic,readonly) double exitRegionSize; 
@property (nonatomic,readonly) BOOL shouldUseServerSideETAs; 
@property (nonatomic,readonly) BOOL transitTTLSupported; 
@property (nonatomic,readonly) double averageWalkingSpeed; 
@property (nonatomic,readonly) double slowWalkingSpeed; 
@property (nonatomic,readonly) double fastWalkingSpeed; 
@property (nonatomic,readonly) unsigned long long minRandomJitterForHypothesisWakeup; 
@property (nonatomic,readonly) unsigned long long maxRandomJitterForHypothesisWakeup; 
@property (nonatomic,readonly) BOOL transitTextInPlanningArtwork; 
@property (nonatomic,readonly) BOOL transitListInstructionTimeText; 
+(id)sharedInstance;
-(double)locationUpdatesDesiredAccuracyForTransit;
-(double)refreshTimeIntervalToUseIfError;
-(double)automaticTrafficIncidentRerouteDelay;
-(double)minimumTimeIntervalToConsiderLeechedLocationInSeconds;
-(double)refreshTimeIntervalBackoffBase;
-(unsigned long long)maximumNumberOfLeechedLocations;
-(BOOL)shouldUseGuidanceEventManager;
-(BOOL)shouldRunNavigationInDaemon;
-(double)maximumRefreshIntervalLeeway;
-(long long)maximumNumberOfDestinationsToMonitor;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForDriving;
-(unsigned long long)initialClientInitiatedHypothesisCacheAccessValue;
-(double)staleLocationUseTimerInterval;
-(unsigned long long)maximumTraceFileCount;
-(double)updateTimeout;
-(double)maxDistanceFromOriginToSuppressReroute;
-(double)minimumTimerTimeStampFudge;
-(double)minimumDistanceToCompareAgainstLocationAccuracy;
-(double)maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
-(unsigned long long)initialSelfInitiatedHypothesisCacheAccessValue;
-(double)refreshTimeIntervalBackoffMax;
-(unsigned long long)maxRandomJitterForHypothesisWakeup;
-(unsigned long long)maximumNumberOfProcessingLoopRepeats;
-(BOOL)transitListInstructionTimeText;
-(double)extraLocationWaitTimeInterval;
-(BOOL)useConservativeDepartureForRefreshTimer;
-(BOOL)shouldMatchToLAR;
-(unsigned long long)maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
-(BOOL)shouldUseServerSideETAs;
-(double)minimumDistanceToConsiderLeechedLocationInMeters;
-(unsigned long long)refreshEquationLowestFrequencyTransit;
-(double)minimumDistanceToGetLocationUpdatesInMeters;
-(double)defaultExpirationOffset;
-(BOOL)shouldRequestInlineShields;
-(unsigned long long)accessValueThresholdToUpdateCacheEntries;
-(unsigned long long)refreshEquationHighestFrequency;
-(BOOL)transitTTLSupported;
-(unsigned long long)refreshEquationLowestFrequency;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForTransit;
-(BOOL)shouldRequestLaneGuidance;
-(double)maximumUserRoutingPreferencesAge;
-(double)locationUpdatesDesiredAccuracyForWalking;
-(double)hypothesisShouldPersistThresholdInSeconds;
-(double)predictionsWatchdogInterval;
-(double)locationReuseThreshold;
-(double)fastWalkingSpeed;
-(double)locationUpdateTimerInterval;
-(BOOL)shouldShowServiceErrorAlert;
-(double)locationUpdatesDesiredAccuracyForDriving;
-(BOOL)shouldSnapToParkingLotSegments;
-(double)minimumExpirationOffset;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForWalking;
-(int)endValidDistanceOffset;
-(double)hypothesisResponseStaleToRefreshThresholdInSeconds;
-(BOOL)shouldLazyLoadRoutes;
-(double)slowWalkingSpeed;
-(double)minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
-(double)pendingStopTimeToLive;
-(BOOL)shouldAutomaticallyRerouteTrafficIncidents;
-(double)hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
-(unsigned long long)minRandomJitterForHypothesisWakeup;
-(double)locationFreshnessThreshold;
-(double)exitRegionSize;
-(double)averageWalkingSpeed;
-(int)startValidDistanceOffset;
-(BOOL)transitTextInPlanningArtwork;
@end
