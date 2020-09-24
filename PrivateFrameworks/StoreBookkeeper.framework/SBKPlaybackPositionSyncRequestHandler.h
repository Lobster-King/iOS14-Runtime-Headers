/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKSyncRequestHandler.h>
#import <libobjc.A.dylib/SBKTransactionControllerDelegate.h>
#import <libobjc.A.dylib/SBKSyncTransactionProcessing.h>

@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource, SBKUniversalPlaybackPositionTransactionContext;
@class NSObject, SBKTransactionController, NSMutableDictionary, NSDictionary, SBKSyncTransaction, NSError, NSString;

@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKTransactionControllerDelegate, SBKSyncTransactionProcessing> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _syncOperationQueue;
	BOOL _syncInProgress;
	BOOL _canceled;
	id<SBKUniversalPlaybackPositionDataSource> _dataSource;
	SBKTransactionController* _kvsController;
	id<SBKUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;
	NSMutableDictionary* _metadataItemsFromDataSource;
	NSDictionary* _metadataItemsToCommitToDataSource;
	NSDictionary* _metadataItemsToCommitToKVSStorage;
	NSMutableDictionary* _responseMetadataItemsToCommitToDataSource;
	NSMutableDictionary* _responseMetadataItemsMergedToCommitBackToKVSStorage;
	SBKSyncTransaction* _currentKVSTransaction;
	NSError* _fatalSyncError;
	NSString* _overrideSyncAnchor;

}

@property (retain) SBKTransactionController * kvsController;                                                     //@synthesize kvsController=_kvsController - In the implementation block
@property (retain) id<SBKUniversalPlaybackPositionDataSource> dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) id<SBKUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext;              //@synthesize dataSourceTransactionContext=_dataSourceTransactionContext - In the implementation block
@property (retain) NSMutableDictionary * metadataItemsFromDataSource;                                            //@synthesize metadataItemsFromDataSource=_metadataItemsFromDataSource - In the implementation block
@property (retain) NSDictionary * metadataItemsToCommitToDataSource;                                             //@synthesize metadataItemsToCommitToDataSource=_metadataItemsToCommitToDataSource - In the implementation block
@property (retain) NSDictionary * metadataItemsToCommitToKVSStorage;                                             //@synthesize metadataItemsToCommitToKVSStorage=_metadataItemsToCommitToKVSStorage - In the implementation block
@property (retain) NSMutableDictionary * responseMetadataItemsToCommitToDataSource;                              //@synthesize responseMetadataItemsToCommitToDataSource=_responseMetadataItemsToCommitToDataSource - In the implementation block
@property (retain) NSMutableDictionary * responseMetadataItemsMergedToCommitBackToKVSStorage;                    //@synthesize responseMetadataItemsMergedToCommitBackToKVSStorage=_responseMetadataItemsMergedToCommitBackToKVSStorage - In the implementation block
@property (retain) SBKSyncTransaction * currentKVSTransaction;                                                   //@synthesize currentKVSTransaction=_currentKVSTransaction - In the implementation block
@property (assign) BOOL syncInProgress;                                                                          //@synthesize syncInProgress=_syncInProgress - In the implementation block
@property (assign) BOOL canceled;                                                                                //@synthesize canceled=_canceled - In the implementation block
@property (retain) NSError * fatalSyncError;                                                                     //@synthesize fatalSyncError=_fatalSyncError - In the implementation block
@property (retain) NSString * overrideSyncAnchor;                                                                //@synthesize overrideSyncAnchor=_overrideSyncAnchor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(BOOL)canceled;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)_shouldStop;
-(void)setDataSource:(id<SBKUniversalPlaybackPositionDataSource>)arg1 ;
-(BOOL)_synchronize:(id*)arg1 ;
-(void)timeout;
-(void)cancelWithError:(id)arg1 ;
-(void)setSyncInProgress:(BOOL)arg1 ;
-(id<SBKUniversalPlaybackPositionDataSource>)dataSource;
-(BOOL)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3 ;
-(void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3 ;
-(void)transactionController:(id)arg1 transactionDidFinish:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 bagContext:(id)arg2 ;
-(void)setMetadataItemsFromDataSource:(NSMutableDictionary *)arg1 ;
-(void)setMetadataItemsToCommitToDataSource:(NSDictionary *)arg1 ;
-(void)setMetadataItemsToCommitToKVSStorage:(NSDictionary *)arg1 ;
-(void)setResponseMetadataItemsToCommitToDataSource:(NSMutableDictionary *)arg1 ;
-(void)setResponseMetadataItemsMergedToCommitBackToKVSStorage:(NSMutableDictionary *)arg1 ;
-(void)setKvsController:(SBKTransactionController *)arg1 ;
-(void)setDataSourceTransactionContext:(id<SBKUniversalPlaybackPositionTransactionContext>)arg1 ;
-(void)setCurrentKVSTransaction:(SBKSyncTransaction *)arg1 ;
-(NSMutableDictionary *)metadataItemsFromDataSource;
-(NSMutableDictionary *)responseMetadataItemsToCommitToDataSource;
-(NSMutableDictionary *)responseMetadataItemsMergedToCommitBackToKVSStorage;
-(void)clearTransactionResponseData;
-(id<SBKUniversalPlaybackPositionTransactionContext>)dataSourceTransactionContext;
-(BOOL)syncInProgress;
-(void)_dataSourceCancelTransaction;
-(NSDictionary *)metadataItemsToCommitToKVSStorage;
-(id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg1 processConflicts:(BOOL)arg2 ;
-(SBKSyncTransaction *)currentKVSTransaction;
-(id)_synchronouslyRunKVSTransaction:(id)arg1 ;
-(void)_mergeMetadataItemsFromSyncResponse;
-(NSDictionary *)metadataItemsToCommitToDataSource;
-(NSError *)fatalSyncError;
-(SBKTransactionController *)kvsController;
-(void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2 ;
-(void)setFatalSyncError:(NSError *)arg1 ;
-(void)_signalKVSTransactionCompletion:(id)arg1 ;
-(void)transaction:(id)arg1 willProcessResponseData:(id)arg2 ;
-(void)transaction:(id)arg1 didProcessResponseData:(id)arg2 ;
-(void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(BOOL*)arg5 ;
-(int)_mergeConflictedItemFromSyncResponse:(id)arg1 ;
-(void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(BOOL*)arg3 ;
-(id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2 ;
-(id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2 ;
-(id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2 ;
-(NSString *)overrideSyncAnchor;
-(void)setOverrideSyncAnchor:(NSString *)arg1 ;
@end
