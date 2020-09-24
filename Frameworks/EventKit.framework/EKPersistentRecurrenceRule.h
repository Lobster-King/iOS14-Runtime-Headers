/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentRecurrenceRule : EKPersistentObject
+(id)relations;
+(Class)alternateUniverseClass;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
-(int)entityType;
-(void)setSpecifier:(id)arg1 ;
-(void)setFrequency:(int)arg1 ;
-(long long)firstDayOfTheWeekRaw;
-(void)setFirstDayOfTheWeekRaw:(long long)arg1 ;
-(int)frequency;
-(id)owner;
-(id)specifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cachedEndDate;
-(long long)interval;
-(void)setOwner:(id)arg1 ;
-(id)UUID;
-(void)setCount:(unsigned long long)arg1 ;
-(id)endDate;
-(unsigned long long)count;
-(void)setUUID:(id)arg1 ;
-(void)setInterval:(long long)arg1 ;
-(id)description;
-(void)setEndDate:(id)arg1 ;
@end
