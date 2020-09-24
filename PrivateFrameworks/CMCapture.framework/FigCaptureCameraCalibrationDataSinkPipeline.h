/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class NSString;

@interface FigCaptureCameraCalibrationDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	NSString* _sourceID;

}

@property (nonatomic,readonly) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
+(void)initialize;
-(int)_buildCameraCalibrationDataSinkPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 cameraInfoByPortType:(id)arg4 clientAuditToken:(SCD_Struct_Fi73)arg5 delegate:(id)arg6 ;
-(id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 cameraInfoByPortType:(id)arg5 clientAuditToken:(SCD_Struct_Fi73)arg6 delegate:(id)arg7 ;
-(void)dealloc;
-(NSString *)sourceID;
@end
