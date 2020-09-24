/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, EKSource, NSArray, NSSet;

@interface EKGroupInfo : NSObject {

	NSMutableArray* _calendars;
	int _customGroupType;
	NSString* _customTitle;
	NSString* _customTitleAtBeginningOfSentence;
	NSString* _typeTitle;
	NSString* _title;
	NSString* _titleForBeginningOfSentence;
	BOOL _selected;
	BOOL _showSelectAllButton;
	BOOL _showAccountErrorActionButton;
	EKSource* _source;
	NSString* _footer;
	unsigned long long _accountError;

}

@property (nonatomic,retain) EKSource * source;                                        //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL selected;                                            //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL showSelectAllButton;                                 //@synthesize showSelectAllButton=_showSelectAllButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * typeTitle; 
@property (nonatomic,retain,readonly) NSArray * calendarInfos; 
@property (nonatomic,copy,readonly) NSSet * calendarSet; 
@property (nonatomic,copy,readonly) NSSet * selectedCalendarSet; 
@property (nonatomic,readonly) unsigned long long numCalendars; 
@property (nonatomic,readonly) unsigned long long numSelectableCalendars; 
@property (nonatomic,readonly) unsigned long long numSelectedCalendars; 
@property (nonatomic,readonly) BOOL showAddCalendarButton; 
@property (nonatomic,readonly) BOOL showCalendarNameIfSolitary; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (assign,nonatomic) BOOL showAccountErrorActionButton;                        //@synthesize showAccountErrorActionButton=_showAccountErrorActionButton - In the implementation block
@property (nonatomic,retain) NSString * footer;                                        //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic) unsigned long long accountError;                          //@synthesize accountError=_accountError - In the implementation block
-(void)selectAll;
-(int)sortOrder;
-(NSString *)footer;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSubscribed;
-(NSString *)title;
-(void)setSource:(EKSource *)arg1 ;
-(id)init;
-(void)setFooter:(NSString *)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(NSString *)typeTitle;
-(EKSource *)source;
-(void)removeCalendar:(id)arg1 ;
-(void)setShowSelectAllButton:(BOOL)arg1 ;
-(void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2 ;
-(id)titleForBeginningOfSentence:(BOOL)arg1 ;
-(unsigned long long)numCalendars;
-(NSArray *)calendarInfos;
-(unsigned long long)numSelectableCalendars;
-(id)initWithCustomGroupType:(int)arg1 ;
-(void)insertCalendarInfo:(id)arg1 ;
-(unsigned long long)numSelectedCalendars;
-(id)calendarAtIndex:(unsigned long long)arg1 ;
-(id)copyCalendars;
-(NSSet *)calendarSet;
-(NSSet *)selectedCalendarSet;
-(void)selectNone;
-(BOOL)showAddCalendarButton;
-(BOOL)showCalendarNameIfSolitary;
-(BOOL)showSelectAllButton;
-(BOOL)showAccountErrorActionButton;
-(void)setShowAccountErrorActionButton:(BOOL)arg1 ;
-(unsigned long long)accountError;
-(void)setAccountError:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)selected;
@end
