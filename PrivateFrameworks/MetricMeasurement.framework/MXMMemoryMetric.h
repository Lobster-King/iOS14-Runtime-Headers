/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MXMMetric.h>

@class NSString, NSNumber, MXMInstrument;

@interface MXMMemoryMetric : MXMMetric

@property (nonatomic,copy,readonly) NSString * processName; 
@property (nonatomic,copy,readonly) NSNumber * processIdentifier; 
@property (nonatomic,copy,readonly) MXMInstrument * instrument; 
+(id)currentProcess;
-(id)initWithProcessIdentifier:(int)arg1 ;
-(id)initWithProcessName:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 filter:(id)arg2 ;
-(void)willStartAtEstimatedTime:(unsigned long long)arg1 ;
-(NSString *)processName;
-(NSNumber *)processIdentifier;
-(BOOL)_shouldConstructProbe;
-(id)_constructProbe;
@end

