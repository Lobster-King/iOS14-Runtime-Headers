/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMHome, NSMutableSet, HMAccessory, HFAccessoryInfoItem, HFAccessoryNetworkInfoItem;

@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider {

	HMHome* _home;
	id<HFCharacteristicValueSource> _valueSource;
	NSMutableSet* _accessoryInfoDetailItems;
	HMAccessory* _accessory;
	HFAccessoryInfoItem* _firmwareItem;
	HFAccessoryInfoItem* _softwareItem;
	HFAccessoryNetworkInfoItem* _networkItem;

}

@property (nonatomic,retain) NSMutableSet * accessoryInfoDetailItems;                  //@synthesize accessoryInfoDetailItems=_accessoryInfoDetailItems - In the implementation block
@property (nonatomic,retain) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HFAccessoryInfoItem * firmwareItem;                     //@synthesize firmwareItem=_firmwareItem - In the implementation block
@property (nonatomic,readonly) HFAccessoryInfoItem * softwareItem;                     //@synthesize softwareItem=_softwareItem - In the implementation block
@property (nonatomic,readonly) HFAccessoryNetworkInfoItem * networkItem;               //@synthesize networkItem=_networkItem - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
+(id)preferredCharacteristicOrderArray;
+(id)_displayValueForCachedValue:(id)arg1 characteristicType:(id)arg2 accessoryInfoService:(id)arg3 ;
+(/*^block*/id)accessoryInfoServiceDetailComparator;
-(id)items;
-(id)initWithHome:(id)arg1 accessory:(id)arg2 ;
-(NSMutableSet *)accessoryInfoDetailItems;
-(HFAccessoryInfoItem *)firmwareItem;
-(HFAccessoryInfoItem *)softwareItem;
-(BOOL)canToggleAccessoryInfoItem:(id)arg1 ;
-(void)toggleAccessoryInfoItem:(id)arg1 ;
-(void)setAccessoryInfoDetailItems:(NSMutableSet *)arg1 ;
-(HMAccessory *)accessory;
-(id)init;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(HFAccessoryNetworkInfoItem *)networkItem;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(id)reloadItems;
-(HMHome *)home;
@end

