/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class rowVariant;

@interface searchColumn : NSObject {

	int _propNumber;
	rowVariant* _propValue;

}

@property (assign) int propNumber;                      //@synthesize propNumber=_propNumber - In the implementation block
@property (retain) rowVariant * propValue;              //@synthesize propValue=_propValue - In the implementation block
-(int)propNumber;
-(id)initWithPropertyNumber:(int)arg1 RVariant:(id)arg2 ;
-(void)setPropNumber:(int)arg1 ;
-(rowVariant *)propValue;
-(void)setPropValue:(rowVariant *)arg1 ;
@end

