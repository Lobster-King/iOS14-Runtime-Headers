/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeConversionDictionaryProviding.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class NSDictionary, NSString;

@interface SNAudioCorrelationResult : NSObject <SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	double _peakValue;
	long long _channelIndex;
	SCD_Struct_SN3 _peakTime;
	SCD_Struct_SN4 timeRange;

}

@property (assign,nonatomic) double peakValue;                             //@synthesize peakValue=_peakValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN3 peakTime;                      //@synthesize peakTime=_peakTime - In the implementation block
@property (assign,nonatomic) long long channelIndex;                       //@synthesize channelIndex=_channelIndex - In the implementation block
@property (readonly) NSDictionary * timeConversionDictionary; 
@property (assign,nonatomic) SCD_Struct_SN4 timeRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_SN4)timeRange;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(void)setChannelIndex:(long long)arg1 ;
-(void)setPeakValue:(double)arg1 ;
-(void)setPeakTime:(SCD_Struct_SN3)arg1 ;
-(NSDictionary *)timeConversionDictionary;
-(SCD_Struct_SN3)peakTime;
-(double)peakValue;
-(long long)channelIndex;
@end
