/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TXRBufferMap.h>

@class NSString;

@interface MTKTextureIOBufferMap : NSObject <TXRBufferMap> {

	void* _bytes;

}

@property (nonatomic,readonly) void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)bytes;
-(id)initWithContents:(void*)arg1 ;
@end

