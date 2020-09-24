/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMExtensionConfigurationSubscriberRequestHandling.h>

@protocol RMExtensionConfigurationApplicator;
@class NSConditionLock, RMConfigurationSubscriberClient, RMAssetResolver, RMPolicyStore, NSArray, NSString;

@interface RMExtensionConfigurationSubscriber : NSObject <RMExtensionConfigurationSubscriberRequestHandling> {

	NSConditionLock* _configurationSubscriberClientLock;
	RMConfigurationSubscriberClient* _configurationSubscriberClient;
	RMAssetResolver* _assetResolver;
	RMPolicyStore* _policyStore;
	id<RMExtensionConfigurationApplicator> _applicator;
	NSArray* _configurationTypes;

}

@property (nonatomic,retain) RMConfigurationSubscriberClient * configurationSubscriberClient;              //@synthesize configurationSubscriberClient=_configurationSubscriberClient - In the implementation block
@property (nonatomic,retain) RMAssetResolver * assetResolver;                                              //@synthesize assetResolver=_assetResolver - In the implementation block
@property (nonatomic,retain) RMPolicyStore * policyStore;                                                  //@synthesize policyStore=_policyStore - In the implementation block
@property (nonatomic,readonly) id<RMExtensionConfigurationApplicator> applicator;                          //@synthesize applicator=_applicator - In the implementation block
@property (nonatomic,readonly) NSArray * configurationTypes;                                               //@synthesize configurationTypes=_configurationTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSubscriber;
-(id<RMExtensionConfigurationApplicator>)applicator;
-(id)init;
-(RMAssetResolver *)assetResolver;
-(NSArray *)configurationTypes;
-(RMConfigurationSubscriberClient *)configurationSubscriberClient;
-(id)initWithConfigurationSubscriberClient:(id)arg1 assetResolver:(id)arg2 policyStore:(id)arg3 applicator:(id)arg4 configurationTypes:(id)arg5 ;
-(RMPolicyStore *)policyStore;
-(void)fetchThenApplyConfigurationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfigurationSubscriberClient:(RMConfigurationSubscriberClient *)arg1 ;
-(void)setAssetResolver:(RMAssetResolver *)arg1 ;
-(void)setPolicyStore:(RMPolicyStore *)arg1 ;
@end
