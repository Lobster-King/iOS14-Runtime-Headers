/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSArray, NSMutableArray;

@interface CRTextDetectorResults : NSObject {

	NSDictionary* _inputOptions;
	NSDate* _startTime;
	NSDate* _endTime;
	NSArray* _textFeatures;
	NSArray* _pyramidPreIntraScaleNMSTextFeatures;
	NSArray* _pyramidPostIntraScaleNMSTextFeatures;
	NSArray* _pyramidPostInterScaleNMSTextFeatures;
	NSMutableArray* _pyramidScaleSize;

}

@property (nonatomic,retain) NSDictionary * inputOptions;                                 //@synthesize inputOptions=_inputOptions - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                          //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                            //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSArray * textFeatures;                                      //@synthesize textFeatures=_textFeatures - In the implementation block
@property (nonatomic,retain) NSArray * pyramidPreIntraScaleNMSTextFeatures;               //@synthesize pyramidPreIntraScaleNMSTextFeatures=_pyramidPreIntraScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSArray * pyramidPostIntraScaleNMSTextFeatures;              //@synthesize pyramidPostIntraScaleNMSTextFeatures=_pyramidPostIntraScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSArray * pyramidPostInterScaleNMSTextFeatures;              //@synthesize pyramidPostInterScaleNMSTextFeatures=_pyramidPostInterScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * pyramidScaleSize;                           //@synthesize pyramidScaleSize=_pyramidScaleSize - In the implementation block
-(NSDate *)endTime;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setTextFeatures:(NSArray *)arg1 ;
-(NSArray *)pyramidPostInterScaleNMSTextFeatures;
-(void)setPyramidPostInterScaleNMSTextFeatures:(NSArray *)arg1 ;
-(NSArray *)pyramidPostIntraScaleNMSTextFeatures;
-(void)setPyramidPostIntraScaleNMSTextFeatures:(NSArray *)arg1 ;
-(NSArray *)pyramidPreIntraScaleNMSTextFeatures;
-(void)setPyramidPreIntraScaleNMSTextFeatures:(NSArray *)arg1 ;
-(NSMutableArray *)pyramidScaleSize;
-(void)setPyramidScaleSize:(NSMutableArray *)arg1 ;
-(NSArray *)textFeatures;
-(NSDictionary *)inputOptions;
-(void)setInputOptions:(NSDictionary *)arg1 ;
@end
