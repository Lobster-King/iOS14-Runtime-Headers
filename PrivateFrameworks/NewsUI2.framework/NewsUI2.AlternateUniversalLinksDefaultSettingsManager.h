/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCNewsAppConfigurationObserving.h>

@interface NewsUI2.AlternateUniversalLinksDefaultSettingsManager : NSObject <FCBundleSubscriptionChangeObserver, FCNewsAppConfigurationObserving> {

	 appConfigurationManager;
	 bundleSubscriptionManager;

}
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 changeSet:(id)arg3 ;
-(void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2 ;
-(id)init;
@end
