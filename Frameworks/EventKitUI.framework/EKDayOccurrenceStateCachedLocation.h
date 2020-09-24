/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EKDayOccurrenceStateCachedLocation : NSObject {

	BOOL _originalOccurrenceLocationIsPrediction;
	BOOL _originalHasNewTimeProposed;
	NSString* _generatedLocationString;
	NSString* _originalOccurrenceLocation;
	NSString* _originalOccurrenceLocationWithoutPrediction;

}

@property (nonatomic,readonly) NSString * generatedLocationString;                                  //@synthesize generatedLocationString=_generatedLocationString - In the implementation block
@property (nonatomic,readonly) NSString * originalOccurrenceLocation;                               //@synthesize originalOccurrenceLocation=_originalOccurrenceLocation - In the implementation block
@property (nonatomic,readonly) NSString * originalOccurrenceLocationWithoutPrediction;              //@synthesize originalOccurrenceLocationWithoutPrediction=_originalOccurrenceLocationWithoutPrediction - In the implementation block
@property (nonatomic,readonly) BOOL originalOccurrenceLocationIsPrediction;                         //@synthesize originalOccurrenceLocationIsPrediction=_originalOccurrenceLocationIsPrediction - In the implementation block
@property (nonatomic,readonly) BOOL originalHasNewTimeProposed;                                     //@synthesize originalHasNewTimeProposed=_originalHasNewTimeProposed - In the implementation block
-(NSString *)originalOccurrenceLocationWithoutPrediction;
-(BOOL)originalHasNewTimeProposed;
-(NSString *)originalOccurrenceLocation;
-(NSString *)generatedLocationString;
-(BOOL)originalOccurrenceLocationIsPrediction;
-(id)initWithGeneratedLocationString:(id)arg1 originalOccurrenceLocation:(id)arg2 originalOccurrenceLocationWithoutPrediction:(id)arg3 originalOccurrenceLocationIsPrediction:(BOOL)arg4 originalHasNewTimeProposed:(BOOL)arg5 ;
@end
