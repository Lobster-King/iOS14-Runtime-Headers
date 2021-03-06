/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLIOAccelResource.h>

@protocol MTLBuffer;
@class MTLIOAccelBuffer, MTLAccelerationStructureDescriptor;

@interface MTLIOAccelAccelerationStructure : MTLIOAccelResource {

	MTLIOAccelBuffer*<MTLBuffer> _buffer;
	unsigned long long _bufferOffset;
	MTLAccelerationStructureDescriptor* _descriptor;

}

@property (nonatomic,readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) MTLIOAccelBuffer*<MTLBuffer> buffer; 
@property (nonatomic,readonly) unsigned long long bufferOffset; 
@property (nonatomic,retain) MTLAccelerationStructureDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)setDescriptor:(MTLAccelerationStructureDescriptor *)arg1 ;
-(unsigned long long)bufferOffset;
-(MTLIOAccelBuffer*<MTLBuffer>)buffer;
-(MTLAccelerationStructureDescriptor *)descriptor;
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)size;
@end

