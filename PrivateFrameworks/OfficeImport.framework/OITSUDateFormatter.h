/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OITSUDateFormatter : NSObject {

	NSString* _dateOnlyFormatString;
	NSString* _timeOnlyFormatString;
	CFDateFormatterRef _fullDateFormatter;

}
+(id)supportedDateFormatsForLocale:(id)arg1 ;
+(id)p_supportedDateFormatMatchingFormat:(id)arg1 locale:(id)arg2 ;
+(id)p_supportedTimeFormatMatchingFormat:(id)arg1 locale:(id)arg2 ;
+(id)supportedTimeFormatsForLocale:(id)arg1 ;
+(unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1 ;
+(id)defaultDateTimeFormatForLocale:(id)arg1 ;
+(id)dateFormatStringSpecialSymbols;
+(id)datePortionOfDateTimeFormatString:(id)arg1 ;
+(id)timePortionOfDateTimeFormatString:(id)arg1 ;
-(void)dealloc;
-(id)initWithLocale:(id)arg1 ;
-(id)init;
@end
