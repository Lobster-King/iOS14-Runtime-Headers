/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICSTimeZoneChange : NSObject {

	double _interval;
	long long _tzOffsetTo;

}
-(double)interval;
-(long long)compare:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)tzOffsetTo;
-(BOOL)isCloseTo:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 tzOffsetTo:(long long)arg2 ;
@end

