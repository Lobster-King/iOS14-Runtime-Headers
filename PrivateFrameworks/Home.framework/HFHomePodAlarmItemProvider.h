/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@protocol HFMediaProfileContainer, HFHomePodAlarmItemProviderDelegate;
@class HFAccessorySettingMobileTimerAdapter, NSMutableDictionary, NSMutableSet;

@interface HFHomePodAlarmItemProvider : HFItemProvider {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HFAccessorySettingMobileTimerAdapter* _mobileTimerAdapter;
	id<HFHomePodAlarmItemProviderDelegate> _delegate;
	NSMutableDictionary* _alarmIDToItemMap;
	NSMutableSet* _alarmItems;

}

@property (nonatomic,readonly) NSMutableDictionary * alarmIDToItemMap;                                 //@synthesize alarmIDToItemMap=_alarmIDToItemMap - In the implementation block
@property (nonatomic,readonly) NSMutableSet * alarmItems;                                              //@synthesize alarmItems=_alarmItems - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                      //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingMobileTimerAdapter * mobileTimerAdapter;              //@synthesize mobileTimerAdapter=_mobileTimerAdapter - In the implementation block
@property (assign,nonatomic,__weak) id<HFHomePodAlarmItemProviderDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(id)items;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(HFAccessorySettingMobileTimerAdapter *)mobileTimerAdapter;
-(void)setDelegate:(id<HFHomePodAlarmItemProviderDelegate>)arg1 ;
-(id<HFHomePodAlarmItemProviderDelegate>)delegate;
-(NSMutableSet *)alarmItems;
-(id)reloadItems;
-(NSMutableDictionary *)alarmIDToItemMap;
@end
