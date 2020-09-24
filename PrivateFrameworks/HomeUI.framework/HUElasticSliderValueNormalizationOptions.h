/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HUElasticSliderValueNormalizationOptions : NSObject {

	BOOL _applyStepValue;
	BOOL _applyMinimumVisualRangeSpan;
	unsigned long long _boundingStrategy;

}

@property (assign,nonatomic) unsigned long long boundingStrategy;              //@synthesize boundingStrategy=_boundingStrategy - In the implementation block
@property (assign,nonatomic) BOOL applyStepValue;                              //@synthesize applyStepValue=_applyStepValue - In the implementation block
@property (assign,nonatomic) BOOL applyMinimumVisualRangeSpan;                 //@synthesize applyMinimumVisualRangeSpan=_applyMinimumVisualRangeSpan - In the implementation block
-(id)init;
-(void)setBoundingStrategy:(unsigned long long)arg1 ;
-(void)setApplyStepValue:(BOOL)arg1 ;
-(void)setApplyMinimumVisualRangeSpan:(BOOL)arg1 ;
-(unsigned long long)boundingStrategy;
-(BOOL)applyMinimumVisualRangeSpan;
-(BOOL)applyStepValue;
@end
