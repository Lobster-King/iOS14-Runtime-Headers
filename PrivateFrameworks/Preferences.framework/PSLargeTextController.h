/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSLargeTextSliderListController;

@interface PSLargeTextController : PSListController {

	PSLargeTextSliderListController* _sliderListController;
	PSLargeTextSliderListController* _extendedRangeSliderListController;
	BOOL _usesExtendedRange;
	BOOL _showsExtendedRangeSwitch;

}

@property (assign,nonatomic) BOOL showsExtendedRangeSwitch;              //@synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch - In the implementation block
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(BOOL)showsExtendedRangeSwitch;
-(void)setShowsExtendedRangeSwitch:(BOOL)arg1 ;
-(void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2 ;
-(id)usesExtendedRangeForSpecifier:(id)arg1 ;
-(void)loadView;
-(id)init;
-(id)specifiers;
@end

