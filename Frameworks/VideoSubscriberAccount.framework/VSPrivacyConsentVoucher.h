/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSPrivacyConsentVoucher : NSObject <NSCopying, NSSecureCoding> {

	NSString* _appAdamID;
	NSString* _providerID;

}

@property (nonatomic,copy,readonly) NSString * appAdamID;               //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerID;              //@synthesize providerID=_providerID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)appAdamID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)providerID;
-(unsigned long long)hash;
-(id)description;
-(id)initWithAppAdamID:(id)arg1 providerID:(id)arg2 ;
@end
