/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMRemindersDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding> {

	BOOL _showMarkedForDeleteObjects;
	NSArray* _objectIDs;

}

@property (nonatomic,readonly) NSArray * objectIDs;                        //@synthesize objectIDs=_objectIDs - In the implementation block
@property (assign,nonatomic) BOOL showMarkedForDeleteObjects;              //@synthesize showMarkedForDeleteObjects=_showMarkedForDeleteObjects - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)objectIDs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObjectIDs:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShowMarkedForDeleteObjects:(BOOL)arg1 ;
-(BOOL)showMarkedForDeleteObjects;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

