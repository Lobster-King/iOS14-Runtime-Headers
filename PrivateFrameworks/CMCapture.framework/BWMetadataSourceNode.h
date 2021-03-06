/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface BWMetadataSourceNode : BWSourceNode {

	BOOL _running;
	opaqueCMFormatDescriptionRef _formatDescription;
	OpaqueCMClockRef _clock;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;

}

@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
+(void)initialize;
-(OpaqueCMClockRef)clock;
-(BOOL)start:(id*)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(BOOL)stop:(id*)arg1 ;
-(id)nodeSubType;
-(void)dealloc;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(void)appendMetadataSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

