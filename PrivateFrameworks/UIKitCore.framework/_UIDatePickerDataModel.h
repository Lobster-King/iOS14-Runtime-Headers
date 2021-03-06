/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLocale, NSCalendar, _UIDatePickerChineseCalendar, _UIDatePickerDateRange, NSTimeZone, NSDate, NSDateComponents, NSString;

@interface _UIDatePickerDataModel : NSObject {

	NSLocale* _effectiveLocale;
	NSCalendar* _effectiveCalendar;
	_UIDatePickerChineseCalendar* _chineseWrapperCalendar;
	_UIDatePickerDateRange* _dateRange;
	long long _datePickerStyle;
	long long _datePickerMode;
	NSLocale* _locale;
	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSDate* _date;
	NSDateComponents* _lastSelectedDateComponents;
	long long _minuteInterval;
	NSString* _customFontDesign;

}

@property (assign,nonatomic) long long datePickerStyle;                                      //@synthesize datePickerStyle=_datePickerStyle - In the implementation block
@property (assign,nonatomic) long long datePickerMode;                                       //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                            //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * effectiveLocale; 
@property (nonatomic,readonly) NSCalendar * effectiveCalendar; 
@property (nonatomic,readonly) NSCalendar * formattingCalendar; 
@property (nonatomic,retain) NSTimeZone * timeZone;                                          //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDateComponents * lastSelectedDateComponents;                  //@synthesize lastSelectedDateComponents=_lastSelectedDateComponents - In the implementation block
@property (nonatomic,readonly) NSDate * effectiveDate; 
@property (nonatomic,copy,readonly) NSDateComponents * effectiveDateComponents; 
@property (nonatomic,retain) NSDate * minimumDate; 
@property (nonatomic,retain) NSDate * maximumDate; 
@property (assign,nonatomic) long long minuteInterval;                                       //@synthesize minuteInterval=_minuteInterval - In the implementation block
@property (nonatomic,retain) NSString * customFontDesign;                                    //@synthesize customFontDesign=_customFontDesign - In the implementation block
-(void)setDate:(NSDate *)arg1 ;
-(NSCalendar *)calendar;
-(NSDate *)date;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(id)init;
-(void)setDatePickerStyle:(long long)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)resetForCurrentLocaleOrCalendarChange;
-(NSDateComponents *)lastSelectedDateComponents;
-(NSCalendar *)formattingCalendar;
-(void)_setupDerivedLocaleAndCalendars;
-(NSDateComponents *)effectiveDateComponents;
-(NSLocale *)effectiveLocale;
-(long long)datePickerStyle;
-(void)setLastSelectedDateComponents:(NSDateComponents *)arg1 ;
-(NSTimeZone *)timeZone;
-(long long)minuteInterval;
-(long long)datePickerMode;
-(NSString *)customFontDesign;
-(void)setCustomFontDesign:(NSString *)arg1 ;
-(NSCalendar *)effectiveCalendar;
-(void)setDatePickerMode:(long long)arg1 ;
-(NSDate *)effectiveDate;
-(void)setMinuteInterval:(long long)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
@end

