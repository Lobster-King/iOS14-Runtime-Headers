/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/EKParticipantSemanticIdentifierGeneratorDelegate.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKCalendarItem, NSString, NSURL, NSPredicate;

@interface EKParticipant : EKObject <EKParticipantSemanticIdentifierGeneratorDelegate, EKIdentityProtocol, NSCopying> {

	EKCalendarItem* _owner;

}

@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * inviterNameString; 
@property (assign,nonatomic) int proposedStartDateStatus; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,readonly) EKCalendarItem * owner;                             //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long participantStatus; 
@property (nonatomic,readonly) long long participantRole; 
@property (nonatomic,readonly) long long participantType; 
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser; 
@property (nonatomic,readonly) NSPredicate * contactPredicate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)participantWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
+(BOOL)doesParticipantURL:(id)arg1 email:(id)arg2 andPhoneNumber:(id)arg3 matchParticipantURL:(id)arg4 email:(id)arg5 andPhoneNumber:(id)arg6 ;
+(id)participantWithName:(id)arg1 url:(id)arg2 ;
+(id)knownSingleValueKeysForComparison;
+(id)knownIdentityKeysForComparison;
+(BOOL)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5 ;
-(id)displayName;
-(id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3 ;
-(id)commentLabelString;
-(id)semanticIdentifier;
-(void)setDisplayNameRaw:(id)arg1 ;
-(id)proposedStartDate;
-(BOOL)isCurrentUser;
-(long long)participantStatus;
-(void)setFirstName:(NSString *)arg1 ;
-(int)proposedStartDateStatus;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)emailAddress;
-(EKCalendarItem *)owner;
-(NSString *)lastName;
-(id)invitedBy;
-(void)setEmailAddress:(NSString *)arg1 ;
-(id)existingContact;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
-(BOOL)isLocationRoom;
-(id)nameUsingAddressAsBackup;
-(const void*)ABRecordWithAddressBook:(void*)arg1 ;
-(void)setProposedStartDate:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)hasProposedStartDate;
-(NSString *)inviterNameString;
-(id)setInviterNameString;
-(void)setLastName:(NSString *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(void)setProposedStartDateStatus:(int)arg1 ;
-(id)displayNameRaw;
-(void)setProposedStartDate:(id)arg1 ;
-(id)displayName;
-(NSString *)comment;
-(NSString *)firstName;
-(void)setDisplayName:(id)arg1 ;
-(id)nameComponents;
-(NSString *)UUID;
-(NSURL *)URL;
-(long long)participantRole;
-(void)setURL:(NSURL *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(id)url;
-(NSString *)name;
-(NSPredicate *)contactPredicate;
-(BOOL)isEqualToParticipant:(id)arg1 ;
-(id)proposedStartDateForEvent:(id)arg1 ;
-(NSString *)description;
-(long long)participantType;
@end
