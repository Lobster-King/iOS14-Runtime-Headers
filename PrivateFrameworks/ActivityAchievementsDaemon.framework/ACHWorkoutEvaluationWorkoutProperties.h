/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACHWorkoutEvaluationWorkoutProperties : NSObject {

	BOOL _isFirstParty;
	unsigned long long _type;
	double _duration;
	double _kilocalories;
	double _kilometers;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double kilocalories;                  //@synthesize kilocalories=_kilocalories - In the implementation block
@property (nonatomic,readonly) double kilometers;                    //@synthesize kilometers=_kilometers - In the implementation block
@property (nonatomic,readonly) BOOL isFirstParty;                    //@synthesize isFirstParty=_isFirstParty - In the implementation block
-(double)duration;
-(double)kilocalories;
-(unsigned long long)type;
-(BOOL)isFirstParty;
-(double)kilometers;
-(id)initWithWorkout:(id)arg1 ;
@end
