/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString;

@interface _HKSHLocalizedSleepSchedule : NSObject {

	NSAttributedString* _localizedBedTime;
	NSAttributedString* _localizedWakeTime;

}

@property (nonatomic,readonly) NSAttributedString * localizedBedTime;               //@synthesize localizedBedTime=_localizedBedTime - In the implementation block
@property (nonatomic,readonly) NSAttributedString * localizedWakeTime;              //@synthesize localizedWakeTime=_localizedWakeTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSAttributedString *)localizedBedTime;
-(NSAttributedString *)localizedWakeTime;
-(id)initWithSleepSchedule:(id)arg1 calendar:(id)arg2 dayStart:(id)arg3 timeFont:(id)arg4 amPmFont:(id)arg5 ;
@end

