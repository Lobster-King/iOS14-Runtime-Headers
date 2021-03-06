/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKSourceStoreServer <NSObject>
@required
-(void)remote_fetchAllSourcesWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchHasSampleWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchOrderedSourcesForObjectType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(/*^block*/id)arg3;

@end

