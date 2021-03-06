/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBForcePressToFullScreenAppLayoutSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	SBSwitcherModifier* _multitaskingModifier;
	long long _startingEnvironmentMode;

}
-(long long)homeScreenBackdropBlurType;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(long long)wallpaperStyle;
-(BOOL)isContainerStatusBarVisible;
-(id)appLayoutsToCacheSnapshots;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 ;
@end

