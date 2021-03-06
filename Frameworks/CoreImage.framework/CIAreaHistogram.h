/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIAreaHistogram : CIFilter {

	CIImage* inputImage;
	CIVector* inputExtent;
	NSNumber* inputScale;
	NSNumber* inputCount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputCount; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputCount:(NSNumber *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(IRect)_netExtent;
-(id)outputImageMPS;
-(BOOL)_inputsAreOK;
-(id)outputImageNonMPS;
-(id)outputData;
-(id)outputImage;
-(NSNumber *)inputScale;
-(NSNumber *)inputCount;
-(void)setInputScale:(NSNumber *)arg1 ;
@end

