/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface TUAnimationFloatFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _startValue;
	double _endValue;
	double _speed;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double startValue;                                   //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double endValue;                                     //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(id)initWithTimingFunction:(id)arg1 startValue:(double)arg2 endValue:(double)arg3 speed:(double)arg4 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)solveForTime:(double)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(id)init;
-(double)startValue;
-(double)endValue;
-(double)speed;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
@end

