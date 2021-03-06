/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSArray, NSSet, NSDate, NSObject;

@interface PGSuggestionNotificationProfile : NSObject {

	NSArray* _existingSuggestions;
	BOOL _eligibleForNotification;
	unsigned char _userType;
	NSSet* _shareParticipantContactIdentifiers;
	NSDate* _dateOfLastNotification;
	NSObject*<OS_os_log> _loggingConnection;

}

@property (nonatomic,readonly) BOOL eligibleForNotification; 
@property (nonatomic,readonly) unsigned char userType; 
@property (nonatomic,readonly) NSDate * dateOfLastNotification; 
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
+(double)_requiredTimeIntervalFromLastNotificationForUserType:(unsigned char)arg1 ;
+(unsigned char)_requiredNotificationQualityForUserType:(unsigned char)arg1 ;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(unsigned char)userType;
-(id)initWithExistingSuggestions:(id)arg1 ;
-(BOOL)eligibleForNotification;
-(id)shareParticipantContactIdentifiers;
-(NSDate *)dateOfLastNotification;
-(BOOL)shouldNotifyForSuggestion:(id)arg1 withOptions:(id)arg2 ;
-(void)_determineUserTypeAndEligibility;
-(unsigned char)notificationQualityForHighlightNode:(id)arg1 ;
-(unsigned char)notificationQualityForEnrichableEvent:(id)arg1 ;
@end

