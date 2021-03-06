/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMMailboxObjectID;

@interface EMMailboxChangeAction : NSObject <NSSecureCoding> {

	EMMailboxObjectID* _mailboxObjectID;

}

@property (nonatomic,copy,readonly) EMMailboxObjectID * mailboxObjectID;              //@synthesize mailboxObjectID=_mailboxObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithMailboxObjectID:(id)arg1 ;
-(EMMailboxObjectID *)mailboxObjectID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
@end

