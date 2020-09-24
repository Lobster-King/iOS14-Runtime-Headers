/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <libobjc.A.dylib/EKCalendarChooserDelegate.h>

@class EKEventStore, EKCalendarChooser, EKCalendar, EKEvent, NSString;

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate> {

	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	unsigned long long _entityType;
	EKCalendar* _selectedCalendar;
	BOOL _limitToSource;
	BOOL _onlyShowUnmanagedSources;
	EKEvent* _event;

}

@property (nonatomic,retain) EKCalendar * selectedCalendar; 
@property (assign,nonatomic) BOOL limitToSource;                         //@synthesize limitToSource=_limitToSource - In the implementation block
@property (assign,nonatomic,__weak) EKEvent * event;                     //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL onlyShowUnmanagedSources;              //@synthesize onlyShowUnmanagedSources=_onlyShowUnmanagedSources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEvent:(EKEvent *)arg1 ;
-(EKEvent *)event;
-(CGSize)preferredContentSize;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 ;
-(BOOL)onlyShowUnmanagedSources;
-(BOOL)limitToSource;
-(void)loadView;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned long long)arg4 ;
-(void)setSelectedCalendar:(EKCalendar *)arg1 ;
-(void)setLimitToSource:(BOOL)arg1 ;
-(void)setOnlyShowUnmanagedSources:(BOOL)arg1 ;
-(EKCalendar *)selectedCalendar;
-(void)calendarChooserSelectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 ;
@end
