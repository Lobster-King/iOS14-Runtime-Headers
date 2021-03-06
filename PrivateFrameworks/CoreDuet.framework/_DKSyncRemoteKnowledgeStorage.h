/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKSyncRemoteKnowledgeStorage <_DKSyncRemoteStorage>
@required
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)hasAdditionsFlagForPeer:(id)arg1;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(/*^block*/id)arg7;
-(void)setFetchDelegate:(id)arg1;
-(void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2;
-(void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)clearPrewarmedFlag;
-(BOOL)hasDeletionsFlagForPeer:(id)arg1;

@end

