/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXHomeScreenSuggestionXPCInterface.h>

@class _PASXPCClientHelper;

@interface ATXHomeScreenSuggestionSender : NSObject <ATXHomeScreenSuggestionXPCInterface> {

	_PASXPCClientHelper* _xpcClientHelper;

}
-(void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)forceDebugRotationForStack:(id)arg1 extensionBundleId:(id)arg2 kind:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
