/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBInCallSettings : PTSettings {

	SBFFluidBehaviorSettings* _transientOverlayFadeInSettings;
	SBFFluidBehaviorSettings* _transientOverlayFadeOutSettings;

}

@property (nonatomic,retain) SBFFluidBehaviorSettings * transientOverlayFadeInSettings;               //@synthesize transientOverlayFadeInSettings=_transientOverlayFadeInSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * transientOverlayFadeOutSettings;              //@synthesize transientOverlayFadeOutSettings=_transientOverlayFadeOutSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFFluidBehaviorSettings *)transientOverlayFadeInSettings;
-(void)setTransientOverlayFadeInSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)transientOverlayFadeOutSettings;
-(void)setTransientOverlayFadeOutSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

