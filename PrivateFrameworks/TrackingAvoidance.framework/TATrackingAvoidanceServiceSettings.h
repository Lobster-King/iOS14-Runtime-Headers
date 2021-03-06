/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TATrackingAvoidanceServiceSettings : NSObject {

	BOOL _enableTAFilterGeneral;
	BOOL _enableTAFilterVisits;
	BOOL _enableTAFilterSingleVisit;
	double _classificationTimeInterval;

}

@property (nonatomic,readonly) BOOL enableTAFilterGeneral;                     //@synthesize enableTAFilterGeneral=_enableTAFilterGeneral - In the implementation block
@property (nonatomic,readonly) BOOL enableTAFilterVisits;                      //@synthesize enableTAFilterVisits=_enableTAFilterVisits - In the implementation block
@property (nonatomic,readonly) BOOL enableTAFilterSingleVisit;                 //@synthesize enableTAFilterSingleVisit=_enableTAFilterSingleVisit - In the implementation block
@property (nonatomic,readonly) double classificationTimeInterval;              //@synthesize classificationTimeInterval=_classificationTimeInterval - In the implementation block
-(id)initWithDefaults;
-(id)initWithEnableTAFilterGeneral:(BOOL)arg1 enableTAFilterVisits:(BOOL)arg2 enableTAFilterSingleVisit:(BOOL)arg3 classificationTimeInterval:(double)arg4 ;
-(BOOL)enableTAFilterSingleVisit;
-(double)classificationTimeInterval;
-(BOOL)enableTAFilterVisits;
-(BOOL)enableTAFilterGeneral;
-(id)initWithEnableTAFilterGeneralOrDefault:(id)arg1 enableTAFilterVisitsOrDefault:(id)arg2 enableTAFilterSingleVisitOrDefault:(id)arg3 classificationTimeIntervalOrDefault:(id)arg4 ;
@end

