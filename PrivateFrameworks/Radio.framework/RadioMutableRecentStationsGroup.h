/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioRecentStationsGroup.h>

@class NSString, NSArray;

@interface RadioMutableRecentStationsGroup : RadioRecentStationsGroup

@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * localizedTitle; 
@property (nonatomic,copy) NSArray * stations; 
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStations:(NSArray *)arg1 ;
@end

