/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetWriterInputMetadataAdaptorInternal, AVAssetWriterInput;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {

	AVAssetWriterInputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
+(void)initialize;
+(id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1 ;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(AVAssetWriterInput *)assetWriterInput;
-(BOOL)appendTimedMetadataGroup:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

