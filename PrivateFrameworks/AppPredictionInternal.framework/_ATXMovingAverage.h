/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ATXMovingAverage : NSObject <NSSecureCoding> {

	double _movingAverage;
	double _movingError;
	long long _count;
	double _alpha;

}

@property (nonatomic,readonly) double movingAverage; 
@property (nonatomic,readonly) double movingError; 
+(BOOL)supportsSecureCoding;
-(void)addElement:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithAlpha:(double)arg1 ;
-(double)movingAverage;
-(double)movingError;
@end

