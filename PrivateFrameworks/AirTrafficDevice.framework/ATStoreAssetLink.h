/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol OS_dispatch_queue, ATAssetLinkDelegate;
@class SSDownloadManager, NSMutableDictionary, NSMapTable, NSObject, NSString;

@interface ATStoreAssetLink : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate, ATAssetLink> {

	SSDownloadManager* _downloadManager;
	NSMutableDictionary* _assetsByStoreID;
	NSMapTable* _downloadsByAsset;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                               //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(BOOL)isOpen;
-(BOOL)open;
-(void)close;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_updateInstallProgress:(double)arg1 forAsset:(id)arg2 ;
-(id)_downloadForAsset:(id)arg1 error:(id*)arg2 ;
-(id)_storeKindForAssetType:(id)arg1 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(id)_assetTypeForStoreKind:(id)arg1 ;
-(id)init;
-(id)downloadManager;
-(void)cancelAssets:(id)arg1 ;
-(id)_assetForDownload:(id)arg1 ;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(unsigned long long)maximumBatchSize;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3 ;
-(id<ATAssetLinkDelegate>)delegate;
-(BOOL)linkIsReady;
-(unsigned long long)priority;
-(id)_dataClassForStoreKind:(id)arg1 ;
-(void)_enqueueAssets:(id)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
@end
