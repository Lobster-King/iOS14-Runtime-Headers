/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EMCollectionItemID.h>

@class NSString;

@interface EMThreadCollectionItemID : NSObject <EFCacheable, EMCollectionItemID> {

	long long _conversationID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long conversationID;              //@synthesize conversationID=_conversationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)cachedSelf;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)conversationID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConversationID:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

