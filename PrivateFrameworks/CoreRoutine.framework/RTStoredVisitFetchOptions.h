/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding> {

	BOOL _ascending;
	BOOL _labelVisit;
	NSNumber* _confidence;
	NSDateInterval* _dateInterval;
	NSNumber* _limit;

}

@property (nonatomic,readonly) BOOL ascending;                         //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) BOOL labelVisit;                        //@synthesize labelVisit=_labelVisit - In the implementation block
@property (nonatomic,readonly) NSNumber * limit;                       //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSNumber *)limit;
-(BOOL)isEqualToFetchOptions:(id)arg1 ;
-(BOOL)ascending;
-(NSDateInterval *)dateInterval;
-(NSNumber *)confidence;
-(id)init;
-(id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 labelVisit:(BOOL)arg4 limit:(id)arg5 ;
-(id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 limit:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)labelVisit;
-(id)description;
@end
