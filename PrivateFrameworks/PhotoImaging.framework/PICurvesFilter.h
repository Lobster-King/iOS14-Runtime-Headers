/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PICurvesFilter : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputTableImage;

}

@property (retain) CIImage * inputImage;                   //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputTableImage;              //@synthesize inputTableImage=_inputTableImage - In the implementation block
+(id)curvesKernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(CIImage *)inputTableImage;
-(void)setInputTableImage:(CIImage *)arg1 ;
@end

