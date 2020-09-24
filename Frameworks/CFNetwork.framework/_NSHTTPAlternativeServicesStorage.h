/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSURL, NSObject, NSMutableSet, NSMutableDictionary;

@interface _NSHTTPAlternativeServicesStorage : NSObject {

	NSURL* _path;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _garbageCollectionDispatched;
	BOOL _dbInitialized;
	BOOL _isMemoryStore;
	os_unfair_lock_s lock;
	NSMutableSet* memoryEntries;
	NSMutableDictionary* speculativeEntries;
	sqlite3Ref dbConnection;
	sqlite3_stmtRef selectAllEntriesStmt;
	sqlite3_stmtRef selectAllValidEntriesStmt;
	sqlite3_stmtRef selectEntriesStmt;
	sqlite3_stmtRef selectEntriesWithRegistrableDomainStmt;
	sqlite3_stmtRef insertEntriesStmt;
	sqlite3_stmtRef deleteWithTimeStmt;
	sqlite3_stmtRef deleteWithRegistrableDomainStmt;
	sqlite3_stmtRef deleteExpiredEntriesStmt;
	sqlite3_stmtRef trimDbStmt;

}

@property (nonatomic,readonly) NSURL * path; 
+(id)sharedPersistentStore;
-(void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)arg1 ;
-(NSURL *)path;
-(id)initPersistentStoreWithURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)storeHTTPServiceEntry:(id)arg1 ;
-(id)HTTPServiceEntriesWithRegistrableDomain:(id)arg1 ;
-(id)HTTPServiceEntriesWithFilter:(id)arg1 ;
-(id)initInMemoryStore;
-(void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)arg1 ;
-(id)entries;
@end
