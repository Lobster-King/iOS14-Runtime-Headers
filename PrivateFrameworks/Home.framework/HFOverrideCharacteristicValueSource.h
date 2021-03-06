/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFLightProfileValueSource.h>
#import <libobjc.A.dylib/HFCharacteristicValueSource.h>

@protocol HFCharacteristicValueSource, HFOverrideCharacteristicValueProvider;
@class NSString;

@interface HFOverrideCharacteristicValueSource : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource> {

	id<HFCharacteristicValueSource> _originalValueSource;
	id<HFOverrideCharacteristicValueProvider> _overrideValueProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> originalValueSource;                               //@synthesize originalValueSource=_originalValueSource - In the implementation block
@property (assign,nonatomic,__weak) id<HFOverrideCharacteristicValueProvider> overrideValueProvider;              //@synthesize overrideValueProvider=_overrideValueProvider - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider; 
+(id)na_identity;
-(id)cachedErrorForWriteToCharacteristic:(id)arg1 ;
-(id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)cachedValueForCharacteristic:(id)arg1 ;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(BOOL)isNaturalLightingSupportedForProfile:(id)arg1 ;
-(BOOL)isNaturalLightingEnabledForProfile:(id)arg1 ;
-(id)writeNaturalLightEnabledState:(BOOL)arg1 forProfile:(id)arg2 ;
-(void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 lightProfile:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<HFCharacteristicValueSource>)originalValueSource;
-(id)readValuesForCharacteristics:(id)arg1 ;
-(id)writeValuesForCharacteristics:(id)arg1 ;
-(void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3 ;
-(void)commitTransactionWithReason:(id)arg1 ;
-(id<HFOverrideCharacteristicValueProvider>)overrideValueProvider;
-(id)initWithOriginalValueSource:(id)arg1 overrideValueProvider:(id)arg2 ;
-(void)setOverrideValueProvider:(id<HFOverrideCharacteristicValueProvider>)arg1 ;
-(unsigned long long)hash;
@end

