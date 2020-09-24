/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTClock.h>

@class UIImage, UIImageView, UIView, NSDate, NSCalendar, NSTimeZone;

@interface MTUIAnalogClockView : UIView <MTClock> {

	long long _runMode;
	UIImage* _faceDayImage;
	UIImage* _faceNightImage;
	UIImageView* _faceView;
	UIView* _dayHands[3];
	UIView* _nightHands[3];
	UIImageView* _middleDotDay;
	UIImageView* _middleDotNight;
	UIImageView* _middleRedDot;
	NSDate* _time;
	BOOL _nighttime;
	double _seconds;
	int _flutterIndex;
	BOOL _isRenderStateStale;
	NSCalendar* _calendar;
	BOOL _minuteHourAnimationTriggered;

}

@property (assign,nonatomic) long long runMode;                                //@synthesize runMode=_runMode - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) UIImageView * faceView;                         //@synthesize faceView=_faceView - In the implementation block
@property (nonatomic,readonly) long long hour; 
@property (nonatomic,readonly) long long minute; 
@property (nonatomic,retain) NSDate * time;                                    //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (getter=isNighttime,nonatomic,readonly) BOOL nighttime;              //@synthesize nighttime=_nighttime - In the implementation block
@property (getter=isStarted,nonatomic,readonly) BOOL started; 
+(void)initialize;
+(id)nightTimeHourHandColor;
+(BOOL)doesFaceHaveShadow;
+(id)nightTimeSecondHandColor;
+(id)analogClockWithStyle:(long long)arg1 ;
+(double)hourHandLength;
+(double)secondHandMainLength;
+(UIEdgeInsets)insetsForStyle:(long long)arg1 ;
+(id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(/*^block*/id)arg3 ignoreCache:(BOOL)arg4 ;
+(void)updateTimeForAllSweeping;
+(id)makeOverSecondHandDotImage;
+(double)secondHandOverhangLength;
+(void)registerClock:(id)arg1 ;
+(void)unregisterSweepingClock:(id)arg1 ;
+(id)imageCacheNameForType:(int)arg1 daytime:(BOOL)arg2 ;
+(id)resourcePath;
+(double)secondHandLength;
+(BOOL)hasOverHourHandDot;
+(id)dayTimeSecondHandColor;
+(void)unregisterClock:(id)arg1 ;
+(id)imageInBundleForName:(id)arg1 ;
+(id)overHourHandDotForDayTime:(BOOL)arg1 ;
+(id)cacheVersionedPath;
+(void)adjustNumberalCenter:(CGPoint*)arg1 forNumeralIndex:(long long)arg2 ;
+(long long)style;
+(id)nightTimeFaceColor;
+(double)faceRadius;
+(id)dayTimeTextColor;
+(id)nightTimeMinuteHandColor;
+(CGSize)sizeForStyle:(long long)arg1 ;
+(id)clockHand:(long long)arg1 daytime:(BOOL)arg2 ;
+(void)registerTickingClock:(id)arg1 ;
+(BOOL)isClockRegistered:(id)arg1 ;
+(id)dayTimeFaceColor;
+(void)updateTimeForAllTicking;
+(id)nightTimeOverHourHandDotColor;
+(double)overHourHandDotSize;
+(double)secondHandWidth;
+(CGSize)clockSize;
+(double)minuteHandWidth;
+(id)shadowInfoAtIndex:(unsigned long long)arg1 ;
+(id)overHourHandDotImageForDaytime:(BOOL)arg1 ;
+(void)unregisterTickingClock:(id)arg1 ;
+(id)makeDotImageSize:(double)arg1 color:(id)arg2 ;
+(CGPoint)shadowRotationalCenterForHand:(long long)arg1 ;
+(id)clockFaceForDaytime:(BOOL)arg1 ignoreCache:(BOOL)arg2 ;
+(id)overSecondHandDotImage;
+(CGPoint)handRotationalCenterForHand:(long long)arg1 ;
+(id)overSecondHandDotColor;
+(BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2 ;
+(BOOL)hasOverSecondHandDot;
+(id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(/*^block*/id)arg3 ;
+(double)minuteHandLength;
+(id)makeClockFaceForDaytime:(BOOL)arg1 ;
+(id)makeClockHand:(long long)arg1 daytime:(BOOL)arg2 ;
+(id)dayTimeHourHandColor;
+(void)registerSweepingClock:(id)arg1 ;
+(double)antialiasPaddingRatio;
+(double)numeralInset;
+(id)cacheVersionHash;
+(double)hourHandWidth;
+(void)updateFlutterForAllTicking;
+(id)cacheTopLevelPath;
+(id)nightTimeTextColor;
+(id)dayTimeMinuteHandColor;
+(UIEdgeInsets)shadowInsets;
+(Class)classForStyle:(long long)arg1 ;
+(id)numeralFont;
+(id)dayTimeOverHourHandDotColor;
+(id)clockFaceForDaytime:(BOOL)arg1 ;
+(double)overSecondHandDotSize;
-(long long)hour;
-(NSDate *)time;
-(BOOL)isStarted;
-(CGSize)intrinsicContentSize;
-(void)setTime:(NSDate *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(long long)style;
-(long long)runMode;
-(void)start;
-(id)init;
-(double)updateInterval;
-(NSTimeZone *)timeZone;
-(void)updateTimeContinuously:(long long)arg1 ;
-(void)updateTime;
-(double)coarseUpdateInterval;
-(long long)minute;
-(void)stop;
-(void)handleLocaleChange;
-(void)setRunMode:(long long)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(UIImageView *)faceView;
-(void)updateFlutter;
-(void)setHandTransformForHandIndex:(long long)arg1 ;
-(void)setHandAngle:(double)arg1 forHandIndex:(long long)arg2 ;
-(void)updateTimeAnimated:(BOOL)arg1 ;
-(void)setTime:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNighttime:(BOOL)arg1 ;
-(BOOL)isNighttime;
@end
