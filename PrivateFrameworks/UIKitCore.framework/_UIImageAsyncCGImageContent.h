/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageCGImageContent.h>

@class _UICGImageDecompressor;

@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent {

	long long _orientation;
	BOOL _finishedDecompressing;
	_UICGImageDecompressor* _decompressor;

}

@property (assign) BOOL finishedDecompressing;              //@synthesize finishedDecompressing=_finishedDecompressing - In the implementation block
@property (readonly) long long orientation; 
-(BOOL)isDecompressing;
-(long long)orientation;
-(CGImageRef)CGImage;
-(void)setFinishedDecompressing:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)finishedDecompressing;
-(unsigned long long)hash;
-(id)initWithData:(id)arg1 immediateLoadWithMaxSize:(CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(BOOL)arg5 ;
-(id)description;
@end

