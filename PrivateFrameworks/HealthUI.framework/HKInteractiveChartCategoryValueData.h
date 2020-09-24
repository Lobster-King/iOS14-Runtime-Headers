/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSDate, NSString;

@interface HKInteractiveChartCategoryValueData : NSObject <HKGraphSeriesChartData> {

	long long _value;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setValue:(long long)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)hash;
-(void)setEndDate:(NSDate *)arg1 ;
@end
