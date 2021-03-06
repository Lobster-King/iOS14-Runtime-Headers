/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsServer/UNSNotificationRecordUpdate.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate {

	BOOL _shouldRepost;
	UNSNotificationRecord* _replacedNotificationRecord;

}

@property (nonatomic,readonly) UNSNotificationRecord * replacedNotificationRecord;              //@synthesize replacedNotificationRecord=_replacedNotificationRecord - In the implementation block
@property (nonatomic,readonly) BOOL shouldRepost;                                               //@synthesize shouldRepost=_shouldRepost - In the implementation block
+(id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UNSNotificationRecord *)replacedNotificationRecord;
-(id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(BOOL)arg3 ;
-(BOOL)shouldRepost;
@end

