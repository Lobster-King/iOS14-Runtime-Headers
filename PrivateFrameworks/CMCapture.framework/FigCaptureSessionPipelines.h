/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCaptureMicSourcePipeline, NSMutableArray, NSArray;

@interface FigCaptureSessionPipelines : NSObject {

	FigCaptureMicSourcePipeline* _micSourcePipeline;
	NSMutableArray* _cameraSourcePipelines;
	NSMutableArray* _metadataSourcePipelines;
	NSMutableArray* _previewSinkPipelines;
	NSMutableArray* _videoDataSinkPipelines;
	NSMutableArray* _movieFileSinkPipelines;
	NSMutableArray* _depthDataSinkPipelines;
	NSMutableArray* _videoThumbnailSinkPipelines;
	NSMutableArray* _metadataSinkPipelines;
	NSMutableArray* _visionDataSinkPipelines;
	NSMutableArray* _audioDataSinkPipelines;
	NSMutableArray* _audioFileSinkPipelines;
	NSMutableArray* _stillImageSinkPipelineStorages;
	NSMutableArray* _pointCloudDataSinkPipelines;
	NSMutableArray* _cameraCalibrationDataSinkPipelines;

}

@property (nonatomic,retain) FigCaptureMicSourcePipeline * micSourcePipeline;                //@synthesize micSourcePipeline=_micSourcePipeline - In the implementation block
@property (nonatomic,readonly) NSArray * cameraSourcePipelines;                              //@synthesize cameraSourcePipelines=_cameraSourcePipelines - In the implementation block
@property (nonatomic,readonly) NSArray * metadataSourcePipelines;                            //@synthesize metadataSourcePipelines=_metadataSourcePipelines - In the implementation block
@property (nonatomic,readonly) NSArray * previewSinkPipelines;                               //@synthesize previewSinkPipelines=_previewSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * videoDataSinkPipelines;                             //@synthesize videoDataSinkPipelines=_videoDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * movieFileSinkPipelines;                             //@synthesize movieFileSinkPipelines=_movieFileSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * stillImageSinkPipelineSessionStorages;              //@synthesize stillImageSinkPipelineStorages=_stillImageSinkPipelineStorages - In the implementation block
@property (nonatomic,readonly) NSArray * depthDataSinkPipelines;                             //@synthesize depthDataSinkPipelines=_depthDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * videoThumbnailSinkPipelines;                        //@synthesize videoThumbnailSinkPipelines=_videoThumbnailSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * metadataSinkPipelines;                              //@synthesize metadataSinkPipelines=_metadataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * visionDataSinkPipelines;                            //@synthesize visionDataSinkPipelines=_visionDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * audioDataSinkPipelines;                             //@synthesize audioDataSinkPipelines=_audioDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * audioFileSinkPipelines;                             //@synthesize audioFileSinkPipelines=_audioFileSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * pointCloudDataSinkPipelines;                        //@synthesize pointCloudDataSinkPipelines=_pointCloudDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * cameraCalibrationDataSinkPipelines;                 //@synthesize cameraCalibrationDataSinkPipelines=_cameraCalibrationDataSinkPipelines - In the implementation block
-(void)addAudioFileSinkPipeline:(id)arg1 ;
-(id)metadataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(void)addCameraCalibrationDataSinkPipeline:(id)arg1 ;
-(id)videoDataSinkPipelineWithSinkID:(id)arg1 ;
-(NSArray *)videoThumbnailSinkPipelines;
-(FigCaptureMicSourcePipeline *)micSourcePipeline;
-(void)addMetadataSourcePipeline:(id)arg1 ;
-(id)depthDataSinkPipelineWithSinkID:(id)arg1 ;
-(NSArray *)previewSinkPipelines;
-(id)stillImageSinkPipelineSessionStorageWithSinkID:(id)arg1 ;
-(void)dealloc;
-(id)visionDataSinkPipelineWithSinkID:(id)arg1 ;
-(void)setMicSourcePipeline:(FigCaptureMicSourcePipeline *)arg1 ;
-(id)movieFileSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(void)addMetadataSinkPipeline:(id)arg1 ;
-(id)movieFileSinkPipelineWithSinkID:(id)arg1 ;
-(id)cameraCalibrationDataSinkPipelineWithSinkID:(id)arg1 ;
-(NSArray *)movieFileSinkPipelines;
-(void)addVisionDataSinkPipeline:(id)arg1 ;
-(id)videoThumbnailSinkPipelineWithSinkID:(id)arg1 ;
-(id)movieFileSinkPipelineWithFileCoordinatorNode:(id)arg1 ;
-(NSArray *)audioFileSinkPipelines;
-(id)previewSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(id)metadataSinkPipelineWithSinkID:(id)arg1 ;
-(NSArray *)depthDataSinkPipelines;
-(id)pointCloudDataSinkPipelineWithSinkID:(id)arg1 ;
-(id)audioFileSinkPipelineWithSinkID:(id)arg1 ;
-(id)movieFileSinkPipelineWithVideoConnectionID:(id)arg1 ;
-(id)cameraSourcePipelineWithSourceID:(id)arg1 ;
-(NSArray *)pointCloudDataSinkPipelines;
-(id)videoDataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(NSArray *)metadataSinkPipelines;
-(void)addCameraSourcePipeline:(id)arg1 ;
-(NSArray *)cameraSourcePipelines;
-(NSArray *)audioDataSinkPipelines;
-(void)addVideoDataSinkPipeline:(id)arg1 ;
-(id)audioFileSinkPipelineWithFileSinkNode:(id)arg1 ;
-(id)depthDataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(NSArray *)cameraCalibrationDataSinkPipelines;
-(void)addAudioDataSinkPipeline:(id)arg1 ;
-(void)addPreviewSinkPipeline:(id)arg1 ;
-(void)addPointCloudDataSinkPipeline:(id)arg1 ;
-(NSArray *)visionDataSinkPipelines;
-(NSArray *)stillImageSinkPipelineSessionStorages;
-(id)stillImageSinkPipelineSessionStorageWithStillImageCoordinator:(id)arg1 ;
-(void)addStillImageSinkPipelineSessionStorage:(id)arg1 ;
-(void)addDepthDataSinkPipeline:(id)arg1 ;
-(id)previewSinkPipelineWithSinkID:(id)arg1 ;
-(id)movieFileSinkPipelineWithIrisStagingNode:(id)arg1 ;
-(id)movieFileSinkPipelineWithFileSinkNode:(id)arg1 ;
-(NSArray *)metadataSourcePipelines;
-(void)addVideoThumbnailSinkPipeline:(id)arg1 ;
-(void)addMovieFileSinkPipeline:(id)arg1 ;
-(id)audioDataSinkPipelineWithSinkID:(id)arg1 ;
-(NSArray *)videoDataSinkPipelines;
@end
