/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVisiblePercentageProviding.h>
#import <libobjc.A.dylib/SVVisiblePercentageReporting.h>

@class NSString;

@interface SVVisiblePercentageProvider : NSObject <SVVisiblePercentageProviding, SVVisiblePercentageReporting> {

	double _visiblePercentage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double visiblePercentage;              //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
-(double)visiblePercentageOfObject:(id)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(id)initWithVisiblePercentage:(double)arg1 ;
@end

