/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextViewDelegate.h>

@class EKTextViewWithLabelTextMetrics, NSURL, UITapGestureRecognizer, NSString;

@interface EKEventDetailLocationItem : NSObject <UITextViewDelegate> {

	EKTextViewWithLabelTextMetrics* _locationView;
	NSURL* _locationURL;
	UITapGestureRecognizer* _locationTapRecognizer;
	BOOL _locationIsAttendee;
	long long _locationStatus;
	NSString* _locationComment;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
	NSString* _locationTitle;

}

@property (assign) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;              //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
@property (retain) NSString * locationTitle;                                            //@synthesize locationTitle=_locationTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)updateAttributedString;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(void)setLocationTitle:(NSString *)arg1 ;
-(NSString *)locationTitle;
-(void)updateLocation:(id)arg1 forEvent:(id)arg2 ;
-(id)locationView;
-(void)_locationTapped;
-(id)initWithLocationName:(id)arg1 forEvent:(id)arg2 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
@end

