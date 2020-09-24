/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class JFXEffectsPreviewGenerationRequest, JFXEffectsPreviewGeneratorJob;

@interface JFXEffectsPreviewRequestHandler : NSObject {

	JFXEffectsPreviewGenerationRequest* _req;
	JFXEffectsPreviewGeneratorJob* _job;

}

@property (nonatomic,retain) JFXEffectsPreviewGenerationRequest * req;              //@synthesize req=_req - In the implementation block
@property (nonatomic,retain) JFXEffectsPreviewGeneratorJob * job;                   //@synthesize job=_job - In the implementation block
-(JFXEffectsPreviewGenerationRequest *)req;
-(id)initWithRequest:(id)arg1 ;
-(void)setReq:(JFXEffectsPreviewGenerationRequest *)arg1 ;
-(void)setJob:(JFXEffectsPreviewGeneratorJob *)arg1 ;
-(JFXEffectsPreviewGeneratorJob *)job;
-(id)buildPVRenderRequest;
-(id)buildCallbackMap:(id)arg1 ;
@end
