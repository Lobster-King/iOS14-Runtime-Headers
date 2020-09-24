/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CKDMetadataCache : CKSQLite {

	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;              //@synthesize cacheQueue=_cacheQueue - In the implementation block
+(id)dbFileName;
+(id)sharedCache;
-(void)expungeOldData;
-(id)_initWithCacheDir:(id)arg1 ;
-(id)cachedDSIDForAccountID:(id)arg1 ;
-(void)inlock_expungeDataForAccountID:(id)arg1 ;
-(id)dateOfLastTokenUpdate;
-(id)inlock_containerInfoForContainerID:(id)arg1 accountID:(id)arg2 ;
-(id)knownAppContainerTuplesForAccountID:(id)arg1 ;
-(void)setGlobalConfiguration:(id)arg1 ;
-(id)inlock_applicationMetadataForApplicationID:(id)arg1 ;
-(id)appContainerIntersectionMetadataForAppContainerAccountTuple:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerAccountTuple:(id)arg2 ;
-(void)inlock_setDateOfLastTokenUpdate:(id)arg1 ;
-(id)containerInfoForContainerID:(id)arg1 accountID:(id)arg2 ;
-(id)knownApplicationBundleIDs;
-(void)removeContainerID:(id)arg1 ;
-(id)knownContainerizedApplicationBundleIDs;
-(id)publicKeyOfType:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeKnownApplicationID:(id)arg1 ;
-(void)willCreateDatabase;
-(id)applicationMetadataForApplicationID:(id)arg1 ;
-(void)expungeAllData;
-(void)expungeStaleAccountIDs;
-(id)knownAppContainerAccountTuples;
-(void)setPublicKey:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 ;
-(id)globalConfiguration;
-(void)setPushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2 ;
-(void)setApplicationMetadata:(id)arg1 forApplicationID:(id)arg2 ;
-(void)setContainerInfo:(id)arg1 forContainerID:(id)arg2 accountID:(id)arg3 ;
-(void)expungeDataForAccountID:(id)arg1 ;
-(void)setDateOfLastTokenUpdate:(id)arg1 ;
-(void)setCachedDSID:(id)arg1 forAccountID:(id)arg2 ;
-(id)pushTokenForAppContainerAccountTuple:(id)arg1 filterOldTokens:(BOOL)arg2 ;
@end
