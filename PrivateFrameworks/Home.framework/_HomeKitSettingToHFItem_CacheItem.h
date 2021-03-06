/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFHomeKitSettingsVendor;
@class HFItem, HMSetting, HMSettingGroup, HMAccessorySelectionSettingItem, HFAccessorySettingsEntity, NSDictionary, NSString;

@interface _HomeKitSettingToHFItem_CacheItem : NSObject <NAIdentifiable> {

	HFItem* _outputItem;
	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	HMSetting* _singleSetting;
	HMSettingGroup* _settingGroup;
	HMAccessorySelectionSettingItem* _optionItem;
	HFAccessorySettingsEntity* _accessoryGroupEntity;
	NSDictionary* _usageOptions;

}

@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,readonly) NSString * keyPath; 
@property (nonatomic,readonly) HMSetting * singleSetting;                                      //@synthesize singleSetting=_singleSetting - In the implementation block
@property (nonatomic,readonly) HMSettingGroup * settingGroup;                                  //@synthesize settingGroup=_settingGroup - In the implementation block
@property (nonatomic,readonly) HMAccessorySelectionSettingItem * optionItem;                   //@synthesize optionItem=_optionItem - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingsEntity * accessoryGroupEntity;               //@synthesize accessoryGroupEntity=_accessoryGroupEntity - In the implementation block
@property (nonatomic,readonly) HFItem * outputItem;                                            //@synthesize outputItem=_outputItem - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) NSDictionary * usageOptions;                                    //@synthesize usageOptions=_usageOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(BOOL)_checkSettingGroupForSettingsThatNeedToBeDisplayed:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3 ;
-(NSString *)cacheKey;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)keyPath;
-(HMAccessorySelectionSettingItem *)optionItem;
-(HMSetting *)singleSetting;
-(HFAccessorySettingsEntity *)accessoryGroupEntity;
-(BOOL)shouldBeDisplayed;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 accessoryGroupEntity:(id)arg3 ;
-(HFItem *)outputItem;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 ;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(NSDictionary *)usageOptions;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3 ;
-(HMSettingGroup *)settingGroup;
-(NSString *)description;
@end

