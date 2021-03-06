/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXModeFeaturizer.h>

@protocol ATXLocationManagerProtocolATXLocationOfInterestManagerProtocol, ATXModeFeaturizerDelegate;
@class CLCircularRegion, NSString;

@interface ATXModeRoutineFeaturizer : NSObject <ATXModeFeaturizer> {

	id<ATXLocationManagerProtocol><ATXLocationOfInterestManagerProtocol> _locationManager;
	CLCircularRegion* _homeLOIRegion;
	CLCircularRegion* _workLOIRegion;
	id<ATXModeFeaturizerDelegate> _delegate;
	double _homeLOISearchRadius;
	double _workLOISearchRadius;

}

@property (assign) double homeLOISearchRadius;                                           //@synthesize homeLOISearchRadius=_homeLOISearchRadius - In the implementation block
@property (assign) double workLOISearchRadius;                                           //@synthesize workLOISearchRadius=_workLOISearchRadius - In the implementation block
@property (assign,nonatomic,__weak) id<ATXModeFeaturizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopListening;
-(void)dealloc;
-(id)init;
-(void)beginListening;
-(void)setDelegate:(id<ATXModeFeaturizerDelegate>)arg1 ;
-(id<ATXModeFeaturizerDelegate>)delegate;
-(double)workLOISearchRadius;
-(double)homeLOISearchRadius;
-(id)initWithLocationManager:(id)arg1 ;
-(id)provideFeatures;
-(void)_locationManagerDidEnterRegion:(id)arg1 ;
-(void)_locationManagerDidExitRegion:(id)arg1 ;
-(void)_routineLocationsOfInterestDidChange:(id)arg1 ;
-(void)_updateLOIAndUpdateFeatures;
-(BOOL)isInRegion:(id)arg1 ;
-(void)beginMonitoringForLocation:(id)arg1 radius:(double)arg2 type:(long long)arg3 ;
-(void)_watchRegionForLOIType:(long long)arg1 ;
-(void)setHomeLOISearchRadius:(double)arg1 ;
-(void)setWorkLOISearchRadius:(double)arg1 ;
@end

