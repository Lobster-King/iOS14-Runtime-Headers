/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCorePipeline.framework/IMCorePipeline
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@protocol IMPipelineComponent
@required
-(id)runWithInput:(id)arg1;
-(id)bindTo:(id)arg1;
-(id)runIndividuallyWithInput:(id)arg1;

@end


@protocol IMPipelineComponent;
@interface IMPipelineComponent : NSObject <IMPipelineComponent> {

	id<IMPipelineComponent> _nextComponent;

}

@property (nonatomic,retain) id<IMPipelineComponent> nextComponent;              //@synthesize nextComponent=_nextComponent - In the implementation block
+(id)pipelineFromComponents:(id)arg1 ;
-(id)runWithInput:(id)arg1 ;
-(id)bindTo:(id)arg1 ;
-(id<IMPipelineComponent>)nextComponent;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(void)setNextComponent:(id<IMPipelineComponent>)arg1 ;
@end
