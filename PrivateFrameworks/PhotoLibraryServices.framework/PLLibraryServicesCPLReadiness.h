/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class PLLibraryServicesManager, NSObject, NSMutableArray;

@interface PLLibraryServicesCPLReadiness : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;
	NSObject*<OS_dispatch_source> _photoLibraryCPLReadinessTimer;
	NSMutableArray* _photoLibraryCPLReadinessBlocks;

}
-(id)libraryServicesManager;
-(void)invalidate;
-(BOOL)isReadyForCloudPhotoLibraryWithStatus:(id*)arg1 ;
-(void)cancelCPLReadinessBlocksAndStopWaiting;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id*)arg1 ;
-(void)_callOutstandingCPLReadinessBlocks;
-(void)_stopWaitingForCPLReadiness;
-(void)processCloudPhotosLibraryStateChange:(BOOL)arg1 ;
-(void)pauseCloudPhotos:(BOOL)arg1 reason:(short)arg2 ;
-(void)performOnceLibraryIsReadyForCPLManager:(/*^block*/id)arg1 ;
-(void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
-(BOOL)_checkForCPLReadinessAndCallBlocks;
@end
