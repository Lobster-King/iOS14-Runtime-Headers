/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKDataMetadataSection.h>

@class HKDataMetadataWorkoutRouteCell, HKLocationReadings, HKLocationFetcher, HKRouteMapGenerator;

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection {

	HKDataMetadataWorkoutRouteCell* _cell;
	HKLocationReadings* _locationReadings;
	HKLocationFetcher* _locationFetcher;
	HKRouteMapGenerator* _generator;

}

@property (nonatomic,retain) HKDataMetadataWorkoutRouteCell * cell;                //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) HKLocationReadings * locationReadings;              //@synthesize locationReadings=_locationReadings - In the implementation block
@property (nonatomic,retain) HKLocationFetcher * locationFetcher;                  //@synthesize locationFetcher=_locationFetcher - In the implementation block
@property (nonatomic,retain) HKRouteMapGenerator * generator;                      //@synthesize generator=_generator - In the implementation block
-(HKDataMetadataWorkoutRouteCell *)cell;
-(HKRouteMapGenerator *)generator;
-(id)sectionTitle;
-(void)setCell:(HKDataMetadataWorkoutRouteCell *)arg1 ;
-(void)setGenerator:(HKRouteMapGenerator *)arg1 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)generateRouteImage;
-(id)initWithLocationReadings:(id)arg1 ;
-(HKLocationReadings *)locationReadings;
-(HKLocationFetcher *)locationFetcher;
-(void)setLocationFetcher:(HKLocationFetcher *)arg1 ;
@end
