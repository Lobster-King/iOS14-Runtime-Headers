/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@class NSString, NSArray;

@interface EKRecurrenceHelper : NSObject {

	NSString* _specifier;
	BOOL _dirty;
	BOOL _parsed;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;

}

@property (nonatomic,readonly) BOOL isDirty; 
@property (nonatomic,copy) NSString * specifier; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * setPositions; 
-(BOOL)isDirty;
-(void)setSpecifier:(NSString *)arg1 ;
-(NSArray *)daysOfTheYear;
-(NSString *)specifier;
-(void)_appendIndexList:(id)arg1 toSpecifier:(id)arg2 propertyKey:(unsigned short)arg3 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(void)setSetPositions:(NSArray *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)_appendDaysOfTheWeek:(id)arg1 toSpecifier:(id)arg2 ;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(NSArray *)daysOfTheMonth;
-(void)_updateSpecifier;
-(NSArray *)daysOfTheWeek;
-(NSArray *)weeksOfTheYear;
-(id)_parseDaysOfWeek:(SCD_Struct_EK8*)arg1 range:(SCD_Struct_EK7)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)revert;
-(id)_parseIndexList:(SCD_Struct_EK8*)arg1 range:(SCD_Struct_EK7)arg2 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(void)_clearArrays;
-(void)_parseSpecifierIfNeeded;
-(NSArray *)setPositions;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
@end

