/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, CLSAsset, NSMetadataQuery;

@interface CLSAssetUploadObserver : NSObject {

	double uploadProgress;
	NSError* uploadError;
	CLSAsset* _asset;
	/*^block*/id _onUploadProgress;
	/*^block*/id _onUploadComplete;
	NSMetadataQuery* _query;

}

@property (nonatomic,retain) CLSAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (assign,getter=isUploaded,nonatomic) BOOL uploaded; 
@property (nonatomic,retain) NSMetadataQuery * query;                      //@synthesize query=_query - In the implementation block
@property (readonly) double uploadProgress; 
@property (readonly) NSError * uploadError; 
@property (nonatomic,copy) id onUploadProgress;                            //@synthesize onUploadProgress=_onUploadProgress - In the implementation block
@property (nonatomic,copy) id onUploadComplete;                            //@synthesize onUploadComplete=_onUploadComplete - In the implementation block
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(void)stopObserving;
-(NSMetadataQuery *)query;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)isUploaded;
-(void)setUploaded:(BOOL)arg1 ;
-(NSError *)uploadError;
-(void)startObserving;
-(CLSAsset *)asset;
-(id)init;
-(void)setAsset:(CLSAsset *)arg1 ;
-(id)onUploadProgress;
-(id)onUploadComplete;
-(double)uploadProgress;
-(void)setOnUploadProgress:(id)arg1 ;
-(void)setOnUploadComplete:(id)arg1 ;
@end

