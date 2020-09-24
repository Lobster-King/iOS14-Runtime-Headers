/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALinearMaskLayer : CALayer

@property (assign) CGColorRef foregroundColor; 
@property (__weak) id<CALinearMaskLayerDelegate><CALayerDelegate> delegate; 
+(id)defaultValueForKey:(id)arg1 ;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(CGColorRef)foregroundColor;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)drawInLinearMaskContext:(CALinearMaskContextRef)arg1 ;
@end
