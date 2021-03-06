/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSleepDataSourceProvider.h>

@class NSCalendar;

@interface HKSHSleepDataSourceProvider : NSObject <HKSleepDataSourceProvider> {

	NSCalendar* _calendar;

}

@property (nonatomic,retain) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(id)makeSleepDataSourceFromHealthStore:(id)arg1 representativeDisplayType:(id)arg2 ;
@end

