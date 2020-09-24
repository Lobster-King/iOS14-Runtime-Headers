/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HMIPersonDataSourceDisk.h>
#import <libobjc.A.dylib/HMIHomePersonManagerDataSource.h>

@class NSString;

@interface HMIHomePersonDataSourceDisk : HMIPersonDataSourceDisk <HMIHomePersonManagerDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(/*^block*/id)arg1 ;
-(void)removePersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPersons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPersonFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
