/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings, SBEntityRemovalMedusaDefaultAnimationSettings;

@interface SBEntityRemovalMedusaSlideOutAnimationSettings : PTSettings {

	double _toBeMadeFullScreenPushInScale;
	double _toBeMadeFullScreenScaleResetAnimationDelay;
	double _toBeRemovedSlideOutAnimationDelay;
	double _toBeRemovedSlideOutHeightOffsetMultiplier;
	SBFFluidBehaviorSettings* _toBeMadeFullscreenPushInScaleAnimationSettings;
	SBFFluidBehaviorSettings* _toBeMadeFullscreenScaleResetAnimationSettings;
	SBFFluidBehaviorSettings* _toBeRemovedSlideOutAnimationSettings;
	SBEntityRemovalMedusaDefaultAnimationSettings* _defaultAnimationSettings;

}

@property (assign,nonatomic) double toBeMadeFullScreenPushInScale;                                                   //@synthesize toBeMadeFullScreenPushInScale=_toBeMadeFullScreenPushInScale - In the implementation block
@property (assign,nonatomic) double toBeMadeFullScreenScaleResetAnimationDelay;                                      //@synthesize toBeMadeFullScreenScaleResetAnimationDelay=_toBeMadeFullScreenScaleResetAnimationDelay - In the implementation block
@property (assign,nonatomic) double toBeRemovedSlideOutAnimationDelay;                                               //@synthesize toBeRemovedSlideOutAnimationDelay=_toBeRemovedSlideOutAnimationDelay - In the implementation block
@property (assign,nonatomic) double toBeRemovedSlideOutHeightOffsetMultiplier;                                       //@synthesize toBeRemovedSlideOutHeightOffsetMultiplier=_toBeRemovedSlideOutHeightOffsetMultiplier - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toBeMadeFullscreenPushInScaleAnimationSettings;              //@synthesize toBeMadeFullscreenPushInScaleAnimationSettings=_toBeMadeFullscreenPushInScaleAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toBeMadeFullscreenScaleResetAnimationSettings;               //@synthesize toBeMadeFullscreenScaleResetAnimationSettings=_toBeMadeFullscreenScaleResetAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toBeRemovedSlideOutAnimationSettings;                        //@synthesize toBeRemovedSlideOutAnimationSettings=_toBeRemovedSlideOutAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalMedusaDefaultAnimationSettings * defaultAnimationSettings;               //@synthesize defaultAnimationSettings=_defaultAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBEntityRemovalMedusaDefaultAnimationSettings *)defaultAnimationSettings;
-(double)toBeRemovedSlideOutHeightOffsetMultiplier;
-(SBFFluidBehaviorSettings *)toBeRemovedSlideOutAnimationSettings;
-(double)toBeMadeFullScreenScaleResetAnimationDelay;
-(double)toBeMadeFullScreenPushInScale;
-(SBFFluidBehaviorSettings *)toBeMadeFullscreenPushInScaleAnimationSettings;
-(SBFFluidBehaviorSettings *)toBeMadeFullscreenScaleResetAnimationSettings;
-(double)toBeRemovedSlideOutAnimationDelay;
-(void)setToBeMadeFullScreenPushInScale:(double)arg1 ;
-(void)setToBeMadeFullScreenScaleResetAnimationDelay:(double)arg1 ;
-(void)setToBeMadeFullscreenPushInScaleAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToBeMadeFullscreenScaleResetAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToBeRemovedSlideOutAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToBeRemovedSlideOutAnimationDelay:(double)arg1 ;
-(void)setToBeRemovedSlideOutHeightOffsetMultiplier:(double)arg1 ;
-(void)setDefaultAnimationSettings:(SBEntityRemovalMedusaDefaultAnimationSettings *)arg1 ;
@end
